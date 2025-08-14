#include <stdio.h>
#include <stdint.h>

#define MEMORY_SIZE 102400      // 100 KB
#define ALIGNMENT sizeof(int)   // Memory alignment

// My simulated memory pool
static unsigned char memory[MEMORY_SIZE];

// Memory block structure
typedef struct baremetal {
    int size;               // Usable memory size
    int free;               // 1 = free, 0 = used
    struct baremetal *n;    // Next block
} b;

static b *head = NULL; // Start of free list

// Align requested size to ALIGNMENT
int align_size(int size) {
    return (size % ALIGNMENT == 0) ? size : size + (ALIGNMENT - (size % ALIGNMENT));
}

// Initialize memory system
void init_memory() {
    head = (b*)memory;
    head->size = MEMORY_SIZE - sizeof(b);
    head->free = 1;
    head->n = NULL;
}

// Allocate memory
int* allocate(int size) {
    if (size <= 0) return NULL;
    size = align_size(size);

    b *curr = head;
    while (curr) {
        if (curr->free && curr->size >= size) {
            if (curr->size > size + sizeof(b)) {
                // Create a new block in the remaining space
                b *nb = (b*)((unsigned char*)curr + sizeof(b) + size);
                nb->size = curr->size - size - sizeof(b);
                nb->free = 1;
                nb->n = curr->n;

                curr->n = nb;
                curr->size = size;
            }
            curr->free = 0;
            return (int*)((unsigned char*)curr + sizeof(b));
        }
        curr = curr->n;
    }
    return NULL; // No suitable block found
}

// Free memory
void deallocate(int *ptr) {
    if (!ptr) {
        printf("Deallocation failed: NULL pointer\n");
        return;
    }

    b *bp = (b*)((unsigned char*)ptr - sizeof(b));

    if (bp->free) {
        printf("Deallocation failed: Block already free at %p\n", ptr);
        return;
    }

    bp->free = 1;
    printf("Deallocated memory at %p (size %d bytes)\n", ptr, bp->size);

    // Merge with next block if free
    if (bp->n && bp->n->free) {
        bp->size += sizeof(b) + bp->n->size;
        bp->n = bp->n->n;
    }

    // Merge with previous block if free
    b *curr = head;
    while (curr && curr->n != bp) curr = curr->n;
    if (curr && curr->free) {
        curr->size += sizeof(b) + bp->size;
        curr->n = bp->n;
    }
}

// Example use
int main() {
    init_memory();

    int *mem[100];

    mem[0] = allocate(128);
    if (mem[0])
        printf("Allocation successful for mem[0]: %p\n", mem[0]);
    else
        printf("Allocation failed for mem[0]\n");

    mem[1] = allocate(1024);
    if (mem[1])
        printf("Allocation successful for mem[1]: %p\n", mem[1]);
    else
        printf("Allocation failed for mem[1]\n");

    mem[2] = allocate(4096);
    if (mem[2])
        printf("Allocation successful for mem[2]: %p\n", mem[2]);
    else
        printf("Allocation failed for mem[2]\n");

    deallocate(mem[1]); // free mem[1]

    mem[1] = allocate(512);
    if (mem[1])
        printf("Allocation successful for mem[1] (realloc): %p\n", mem[1]);
    else
        printf("Allocation failed for mem[1] (realloc)\n");

    printf("Memory operations completed successfully.\n");
    return 0;
}
