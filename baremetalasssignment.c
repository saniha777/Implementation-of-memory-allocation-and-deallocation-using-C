<!DOCTYPE html>
<!-- saved from url=(0027)https://www.onlinegdb.com/# -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><script type="text/javascript" async="" src="./baremetalasssignment_files/adagio.js.download" id="adagiojs-27aabbefec730d8" data-pid="1116"></script><style id="ace-idle-fingers">.ace-idle-fingers .ace_gutter {
  background: #3b3b3b;
  color: rgb(153,153,153)
}

.ace-idle-fingers .ace_print-margin {
  width: 1px;
  background: #3b3b3b
}

.ace-idle-fingers {
  background-color: #323232;
  color: #FFFFFF
}

.ace-idle-fingers .ace_cursor {
  color: #91FF00
}

.ace-idle-fingers .ace_marker-layer .ace_selection {
  background: rgba(90, 100, 126, 0.88)
}

.ace-idle-fingers.ace_multiselect .ace_selection.ace_start {
  box-shadow: 0 0 3px 0px #323232;
}

.ace-idle-fingers .ace_marker-layer .ace_step {
  background: rgb(102, 82, 0)
}

.ace-idle-fingers .ace_marker-layer .ace_bracket {
  margin: -1px 0 0 -1px;
  border: 1px solid #404040
}

.ace-idle-fingers .ace_marker-layer .ace_active-line {
  background: #353637
}

.ace-idle-fingers .ace_gutter-active-line {
  background-color: #353637
}

.ace-idle-fingers .ace_marker-layer .ace_selected-word {
  border: 1px solid rgba(90, 100, 126, 0.88)
}

.ace-idle-fingers .ace_invisible {
  color: #404040
}

.ace-idle-fingers .ace_keyword,
.ace-idle-fingers .ace_meta {
  color: #CC7833
}

.ace-idle-fingers .ace_constant,
.ace-idle-fingers .ace_constant.ace_character,
.ace-idle-fingers .ace_constant.ace_character.ace_escape,
.ace-idle-fingers .ace_constant.ace_other,
.ace-idle-fingers .ace_support.ace_constant {
  color: #6C99BB
}

.ace-idle-fingers .ace_invalid {
  color: #FFFFFF;
  background-color: #FF0000
}

.ace-idle-fingers .ace_fold {
  background-color: #CC7833;
  border-color: #FFFFFF
}

.ace-idle-fingers .ace_support.ace_function {
  color: #B83426
}

.ace-idle-fingers .ace_variable.ace_parameter {
  font-style: italic
}

.ace-idle-fingers .ace_string {
  color: #A5C261
}

.ace-idle-fingers .ace_string.ace_regexp {
  color: #CCCC33
}

.ace-idle-fingers .ace_comment {
  font-style: italic;
  color: #BC9458
}

.ace-idle-fingers .ace_meta.ace_tag {
  color: #FFE5BB
}

.ace-idle-fingers .ace_entity.ace_name {
  color: #FFC66D
}

.ace-idle-fingers .ace_collab.ace_user1 {
  color: #323232;
  background-color: #FFF980
}

.ace-idle-fingers .ace_indent-guide {
  background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAEklEQVQImWMwMjLyZYiPj/8PAAreAwAI1+g0AAAAAElFTkSuQmCC) right repeat-y
}

.ace-idle-fingers .ace_indent-guide-active {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAAZSURBVHjaYvj///9/hivKyv8BAAAA//8DACLqBhbvk+/eAAAAAElFTkSuQmCC") right repeat-y;
}

/*# sourceURL=ace/css/ace-idle-fingers */</style><style id="autocompletion.css">
.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #CAD6FA;
    z-index: 1;
}
.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {
    background-color: #3a674e;
}
.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid #abbffe;
    margin-top: -1px;
    background: rgba(233,233,253,0.4);
    position: absolute;
    z-index: 2;
}
.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {
    border: 1px solid rgba(109, 150, 13, 0.8);
    background: rgba(58, 103, 78, 0.62);
}
.ace_completion-meta {
    opacity: 0.5;
    margin: 0.9em;
}
.ace_completion-message {
    color: blue;
}
.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #2d69c7;
}
.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{
    color: #93ca12;
}
.ace_editor.ace_autocomplete {
    width: 300px;
    z-index: 200000;
    border: 1px lightgray solid;
    position: fixed;
    box-shadow: 2px 3px 5px rgba(0,0,0,.2);
    line-height: 1.4;
    background: #fefefe;
    color: #111;
}
.ace_dark.ace_editor.ace_autocomplete {
    border: 1px #484747 solid;
    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);
    line-height: 1.4;
    background: #25282c;
    color: #c1c1c1;
}
/*# sourceURL=ace/css/autocompletion.css */</style><style id="snippets.css">
.ace_snippet-marker {
    -moz-box-sizing: border-box;
    box-sizing: border-box;
    background: rgba(194, 193, 208, 0.09);
    border: 1px dotted rgba(211, 208, 235, 0.62);
    position: absolute;
}
/*# sourceURL=ace/css/snippets.css */</style><style id="error_marker.css">
    .error_widget_wrapper {
        background: inherit;
        color: inherit;
        border:none
    }
    .error_widget {
        border-top: solid 2px;
        border-bottom: solid 2px;
        margin: 5px 0;
        padding: 10px 40px;
        white-space: pre-wrap;
    }
    .error_widget.ace_error, .error_widget_arrow.ace_error{
        border-color: #ff5a5a
    }
    .error_widget.ace_warning, .error_widget_arrow.ace_warning{
        border-color: #F1D817
    }
    .error_widget.ace_info, .error_widget_arrow.ace_info{
        border-color: #5a5a5a
    }
    .error_widget.ace_ok, .error_widget_arrow.ace_ok{
        border-color: #5aaa5a
    }
    .error_widget_arrow {
        position: absolute;
        border: solid 5px;
        border-top-color: transparent!important;
        border-right-color: transparent!important;
        border-left-color: transparent!important;
        top: -5px;
    }

/*# sourceURL=ace/css/error_marker.css */</style><style id="ace-tm">.ace-tm .ace_gutter {
  background: #f0f0f0;
  color: #333;
}

.ace-tm .ace_print-margin {
  width: 1px;
  background: #e8e8e8;
}

.ace-tm .ace_fold {
    background-color: #6B72E6;
}

.ace-tm {
  background-color: #FFFFFF;
  color: black;
}

.ace-tm .ace_cursor {
  color: black;
}
        
.ace-tm .ace_invisible {
  color: rgb(191, 191, 191);
}

.ace-tm .ace_storage,
.ace-tm .ace_keyword {
  color: blue;
}

.ace-tm .ace_constant {
  color: rgb(197, 6, 11);
}

.ace-tm .ace_constant.ace_buildin {
  color: rgb(88, 72, 246);
}

.ace-tm .ace_constant.ace_language {
  color: rgb(88, 92, 246);
}

.ace-tm .ace_constant.ace_library {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_invalid {
  background-color: rgba(255, 0, 0, 0.1);
  color: red;
}

.ace-tm .ace_support.ace_function {
  color: rgb(60, 76, 114);
}

.ace-tm .ace_support.ace_constant {
  color: rgb(6, 150, 14);
}

.ace-tm .ace_support.ace_type,
.ace-tm .ace_support.ace_class {
  color: rgb(109, 121, 222);
}

.ace-tm .ace_keyword.ace_operator {
  color: rgb(104, 118, 135);
}

.ace-tm .ace_string {
  color: rgb(3, 106, 7);
}

.ace-tm .ace_comment {
  color: rgb(76, 136, 107);
}

.ace-tm .ace_comment.ace_doc {
  color: rgb(0, 102, 255);
}

.ace-tm .ace_comment.ace_doc.ace_tag {
  color: rgb(128, 159, 191);
}

.ace-tm .ace_constant.ace_numeric {
  color: rgb(0, 0, 205);
}

.ace-tm .ace_variable {
  color: rgb(49, 132, 149);
}

.ace-tm .ace_xml-pe {
  color: rgb(104, 104, 91);
}

.ace-tm .ace_entity.ace_name.ace_function {
  color: #0000A2;
}


.ace-tm .ace_heading {
  color: rgb(12, 7, 255);
}

.ace-tm .ace_list {
  color:rgb(185, 6, 144);
}

.ace-tm .ace_meta.ace_tag {
  color:rgb(0, 22, 142);
}

.ace-tm .ace_string.ace_regex {
  color: rgb(255, 0, 0)
}

.ace-tm .ace_marker-layer .ace_selection {
  background: rgb(181, 213, 255);
}
.ace-tm.ace_multiselect .ace_selection.ace_start {
  box-shadow: 0 0 3px 0px white;
}
.ace-tm .ace_marker-layer .ace_step {
  background: rgb(252, 255, 0);
}

.ace-tm .ace_marker-layer .ace_stack {
  background: rgb(164, 229, 101);
}

.ace-tm .ace_marker-layer .ace_bracket {
  margin: -1px 0 0 -1px;
  border: 1px solid rgb(192, 192, 192);
}

.ace-tm .ace_marker-layer .ace_active-line {
  background: rgba(0, 0, 0, 0.07);
}

.ace-tm .ace_gutter-active-line {
    background-color : #dcdcdc;
}

.ace-tm .ace_marker-layer .ace_selected-word {
  background: rgb(250, 250, 255);
  border: 1px solid rgb(200, 200, 250);
}

.ace-tm .ace_indent-guide {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;
}

.ace-tm .ace_indent-guide-active {
  background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAIGNIUk0AAHolAACAgwAA+f8AAIDpAAB1MAAA6mAAADqYAAAXb5JfxUYAAAAZSURBVHjaYvj///9/hivKyv8BAAAA//8DACLqBhbvk+/eAAAAAElFTkSuQmCC") right repeat-y;
}

/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">/*
styles = []
for (var i = 1; i < 16; i++) {
    styles.push(".ace_br" + i + "{" + (
        ["top-left", "top-right", "bottom-right", "bottom-left"]
    ).map(function(x, j) {
        return i & (1<<j) ? "border-" + x + "-radius: 3px;" : "" 
    }).filter(Boolean).join(" ") + "}")
}
styles.join("\n")
*/
.ace_br1 {border-top-left-radius    : 3px;}
.ace_br2 {border-top-right-radius   : 3px;}
.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}
.ace_br4 {border-bottom-right-radius: 3px;}
.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}
.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}
.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}
.ace_br8 {border-bottom-left-radius : 3px;}
.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}
.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}
.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}
.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}
.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}


.ace_editor {
    position: relative;
    overflow: hidden;
    padding: 0;
    font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;
    direction: ltr;
    text-align: left;
    -webkit-tap-highlight-color: rgba(0, 0, 0, 0);
}

.ace_scroller {
    position: absolute;
    overflow: hidden;
    top: 0;
    bottom: 0;
    background-color: inherit;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    cursor: text;
}

.ace_content {
    position: absolute;
    box-sizing: border-box;
    min-width: 100%;
    contain: style size layout;
    font-variant-ligatures: no-common-ligatures;
}

.ace_dragging .ace_scroller:before{
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    content: '';
    background: rgba(250, 250, 250, 0.01);
    z-index: 1000;
}
.ace_dragging.ace_dark .ace_scroller:before{
    background: rgba(0, 0, 0, 0.01);
}

.ace_gutter {
    position: absolute;
    overflow : hidden;
    width: auto;
    top: 0;
    bottom: 0;
    left: 0;
    cursor: default;
    z-index: 4;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    contain: style size layout;
}

.ace_gutter-active-line {
    position: absolute;
    left: 0;
    right: 0;
}

.ace_scroller.ace_scroll-left {
    box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;
}

.ace_gutter-cell {
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    padding-left: 19px;
    padding-right: 6px;
    background-repeat: no-repeat;
}

.ace_gutter-cell.ace_error {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: 2px center;
}

.ace_gutter-cell.ace_warning {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");
    background-position: 2px center;
}

.ace_gutter-cell.ace_info {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");
    background-position: 2px center;
}
.ace_dark .ace_gutter-cell.ace_info {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");
}

.ace_scrollbar {
    contain: strict;
    position: absolute;
    right: 0;
    bottom: 0;
    z-index: 6;
}

.ace_scrollbar-inner {
    position: absolute;
    cursor: text;
    left: 0;
    top: 0;
}

.ace_scrollbar-v{
    overflow-x: hidden;
    overflow-y: scroll;
    top: 0;
}

.ace_scrollbar-h {
    overflow-x: scroll;
    overflow-y: hidden;
    left: 0;
}

.ace_print-margin {
    position: absolute;
    height: 100%;
}

.ace_text-input {
    position: absolute;
    z-index: 0;
    width: 0.5em;
    height: 1em;
    opacity: 0;
    background: transparent;
    -moz-appearance: none;
    appearance: none;
    border: none;
    resize: none;
    outline: none;
    overflow: hidden;
    font: inherit;
    padding: 0 1px;
    margin: 0 -1px;
    contain: strict;
    -ms-user-select: text;
    -moz-user-select: text;
    -webkit-user-select: text;
    user-select: text;
    /*with `pre-line` chrome inserts &nbsp; instead of space*/
    white-space: pre!important;
}
.ace_text-input.ace_composition {
    background: transparent;
    color: inherit;
    z-index: 1000;
    opacity: 1;
}
.ace_composition_placeholder { color: transparent }
.ace_composition_marker { 
    border-bottom: 1px solid;
    position: absolute;
    border-radius: 0;
    margin-top: 1px;
}

[ace_nocontext=true] {
    transform: none!important;
    filter: none!important;
    clip-path: none!important;
    mask : none!important;
    contain: none!important;
    perspective: none!important;
    mix-blend-mode: initial!important;
    z-index: auto;
}

.ace_layer {
    z-index: 1;
    position: absolute;
    overflow: hidden;
    /* workaround for chrome bug https://github.com/ajaxorg/ace/issues/2312*/
    word-wrap: normal;
    white-space: pre;
    height: 100%;
    width: 100%;
    box-sizing: border-box;
    /* setting pointer-events: auto; on node under the mouse, which changes
        during scroll, will break mouse wheel scrolling in Safari */
    pointer-events: none;
}

.ace_gutter-layer {
    position: relative;
    width: auto;
    text-align: right;
    pointer-events: auto;
    height: 1000000px;
    contain: style size layout;
}

.ace_text-layer {
    font: inherit !important;
    position: absolute;
    height: 1000000px;
    width: 1000000px;
    contain: style size layout;
}

.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {
    contain: style size layout;
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
}

.ace_hidpi .ace_text-layer,
.ace_hidpi .ace_gutter-layer,
.ace_hidpi .ace_content,
.ace_hidpi .ace_gutter {
    contain: strict;
    will-change: transform;
}
.ace_hidpi .ace_text-layer > .ace_line, 
.ace_hidpi .ace_text-layer > .ace_line_group {
    contain: strict;
}

.ace_cjk {
    display: inline-block;
    text-align: center;
}

.ace_cursor-layer {
    z-index: 4;
}

.ace_cursor {
    z-index: 4;
    position: absolute;
    box-sizing: border-box;
    border-left: 2px solid;
    /* workaround for smooth cursor repaintng whole screen in chrome */
    transform: translatez(0);
}

.ace_multiselect .ace_cursor {
    border-left-width: 1px;
}

.ace_slim-cursors .ace_cursor {
    border-left-width: 1px;
}

.ace_overwrite-cursors .ace_cursor {
    border-left-width: 0;
    border-bottom: 1px solid;
}

.ace_hidden-cursors .ace_cursor {
    opacity: 0.2;
}

.ace_hasPlaceholder .ace_hidden-cursors .ace_cursor {
    opacity: 0;
}

.ace_smooth-blinking .ace_cursor {
    transition: opacity 0.18s;
}

.ace_animate-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: step-end;
    animation-name: blink-ace-animate;
    animation-iteration-count: infinite;
}

.ace_animate-blinking.ace_smooth-blinking .ace_cursor {
    animation-duration: 1000ms;
    animation-timing-function: ease-in-out;
    animation-name: blink-ace-animate-smooth;
}
    
@keyframes blink-ace-animate {
    from, to { opacity: 1; }
    60% { opacity: 0; }
}

@keyframes blink-ace-animate-smooth {
    from, to { opacity: 1; }
    45% { opacity: 1; }
    60% { opacity: 0; }
    85% { opacity: 0; }
}

.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {
    position: absolute;
    z-index: 3;
}

.ace_marker-layer .ace_selection {
    position: absolute;
    z-index: 5;
}

.ace_marker-layer .ace_bracket {
    position: absolute;
    z-index: 6;
}

.ace_marker-layer .ace_error_bracket {
    position: absolute;
    border-bottom: 1px solid #DE5555;
    border-radius: 0;
}

.ace_marker-layer .ace_active-line {
    position: absolute;
    z-index: 2;
}

.ace_marker-layer .ace_selected-word {
    position: absolute;
    z-index: 4;
    box-sizing: border-box;
}

.ace_line .ace_fold {
    box-sizing: border-box;

    display: inline-block;
    height: 11px;
    margin-top: -2px;
    vertical-align: middle;

    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");
    background-repeat: no-repeat, repeat-x;
    background-position: center center, top left;
    color: transparent;

    border: 1px solid black;
    border-radius: 2px;

    cursor: pointer;
    pointer-events: auto;
}

.ace_dark .ace_fold {
}

.ace_fold:hover{
    background-image:
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),
        url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");
}

.ace_tooltip {
    background-color: #FFF;
    background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));
    border: 1px solid gray;
    border-radius: 1px;
    box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);
    color: black;
    max-width: 100%;
    padding: 3px 4px;
    position: fixed;
    z-index: 999999;
    box-sizing: border-box;
    cursor: default;
    white-space: pre;
    word-wrap: break-word;
    line-height: normal;
    font-style: normal;
    font-weight: normal;
    letter-spacing: normal;
    pointer-events: none;
}

.ace_folding-enabled > .ace_gutter-cell {
    padding-right: 13px;
}

.ace_fold-widget {
    box-sizing: border-box;

    margin: 0 -12px 0 1px;
    display: none;
    width: 11px;
    vertical-align: top;

    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");
    background-repeat: no-repeat;
    background-position: center;

    border-radius: 3px;
    
    border: 1px solid transparent;
    cursor: pointer;
}

.ace_folding-enabled .ace_fold-widget {
    display: inline-block;   
}

.ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");
}

.ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");
}

.ace_fold-widget:hover {
    border: 1px solid rgba(0, 0, 0, 0.3);
    background-color: rgba(255, 255, 255, 0.2);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);
}

.ace_fold-widget:active {
    border: 1px solid rgba(0, 0, 0, 0.4);
    background-color: rgba(0, 0, 0, 0.05);
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);
}
/**
 * Dark version for fold widgets
 */
.ace_dark .ace_fold-widget {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");
}
.ace_dark .ace_fold-widget.ace_end {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget.ace_closed {
    background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");
}
.ace_dark .ace_fold-widget:hover {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
    background-color: rgba(255, 255, 255, 0.1);
}
.ace_dark .ace_fold-widget:active {
    box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);
}

.ace_inline_button {
    border: 1px solid lightgray;
    display: inline-block;
    margin: -1px 8px;
    padding: 0 5px;
    pointer-events: auto;
    cursor: pointer;
}
.ace_inline_button:hover {
    border-color: gray;
    background: rgba(200,200,200,0.2);
    display: inline-block;
    pointer-events: auto;
}

.ace_fold-widget.ace_invalid {
    background-color: #FFB4B4;
    border-color: #DE5555;
}

.ace_fade-fold-widgets .ace_fold-widget {
    transition: opacity 0.4s ease 0.05s;
    opacity: 0;
}

.ace_fade-fold-widgets:hover .ace_fold-widget {
    transition: opacity 0.05s ease 0.05s;
    opacity:1;
}

.ace_underline {
    text-decoration: underline;
}

.ace_bold {
    font-weight: bold;
}

.ace_nobold .ace_bold {
    font-weight: normal;
}

.ace_italic {
    font-style: italic;
}


.ace_error-marker {
    background-color: rgba(255, 0, 0,0.2);
    position: absolute;
    z-index: 9;
}

.ace_highlight-marker {
    background-color: rgba(255, 255, 0,0.2);
    position: absolute;
    z-index: 8;
}

.ace_mobile-menu {
    position: absolute;
    line-height: 1.5;
    border-radius: 4px;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    user-select: none;
    background: white;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #dcdcdc;
    color: black;
}
.ace_dark > .ace_mobile-menu {
    background: #333;
    color: #ccc;
    box-shadow: 1px 3px 2px grey;
    border: 1px solid #444;

}
.ace_mobile-button {
    padding: 2px;
    cursor: pointer;
    overflow: hidden;
}
.ace_mobile-button:hover {
    background-color: #eee;
    opacity:1;
}
.ace_mobile-button:active {
    background-color: #ddd;
}

.ace_placeholder {
    font-family: arial;
    transform: scale(0.9);
    transform-origin: left;
    white-space: pre;
    opacity: 0.7;
    margin: 0 10px;
}
/*# sourceURL=ace/css/ace_editor.css */</style>
    <title> GDB online Debugger | Compiler - Code, Compile, Run, Debug online C, C++</title>

    
    <meta name="description" content="Online GDB is online compiler and debugger for C/C++. You can compile, run and debug code with gdb online. Using gcc/g++ as compiler and gdb as debugger. Currently C and C++ languages are supported.">
    <meta name="keywords" content="gdb online, online gdb, online debugger, debugger online, online compiler, debug c online, debug c program online, debug c code online, debug c++ program online, debug c++ code online, debug c++ online, online gdb debugger">
<meta name="google-site-verification" content="LRk_5wLIzc43hz9wV6QksHTiqYHM1CoAbHZVzigvn9s">
<meta name="verify-admitad" content="fb09364f2b">
    <meta property="og:title" content="">
    <meta property="og:site_name" content="GDB online Debugger">
    <meta property="og:description" content="Online GDB is online compiler and debugger for C/C++. You can compile, run and debug code with gdb online. Using gcc/g++ as compiler and gdb as debugger. Currently C and C++ languages are supported.">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    
    <link rel="icon" href="https://www.onlinegdb.com/favicon.ico" type="image/x-icon">
    <!--<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@3.3.6/dist/css/bootstrap.min.css">-->
    <!--<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/3.3.6/css/bootstrap.min.css" integrity="sha512-nNo+yCHEyn0smMxSswnf/OnX6/KwJuZTlNZBjauKhTK0c+zT+q5JOCx0UFhXQ6rJR9jg6Es8gPuD2uZcYDLqSw==" crossorigin="anonymous" referrerpolicy="no-referrer" />-->
    <link rel="stylesheet" href="./baremetalasssignment_files/bootstrap.min.css">

    
    <link rel="stylesheet" href="./baremetalasssignment_files/onlinegdb.css">
    
    
    <script async="" src="./baremetalasssignment_files/apstag.js.download"></script><script async="" src="./baremetalasssignment_files/clarity.js.download"></script><script async="" src="./baremetalasssignment_files/ew6y4c1gqd"></script><script type="text/javascript" async="" src="./baremetalasssignment_files/js"></script><script async="" src="./baremetalasssignment_files/gtm.js.download"></script><script>  var main_ide =  true;  </script>

    
    <script type="text/javascript" src="./baremetalasssignment_files/onlinegdb.js.download"></script><style type="text/css">  .JColResizer{table-layout:fixed;} .JColResizer > tbody > tr > td, .JColResizer > tbody > tr > th{overflow:hidden}  .JPadding > tbody > tr > td, .JPadding > tbody > tr > th{/*padding-left:0!important; */padding-right:0!important;} .JCLRgrips{ height:0px; position:relative;} .JCLRgrip{margin-left:-5px; position:absolute; z-index:5; } .JCLRgrip .JColResizer{position:absolute;background-color:red;filter:alpha(opacity=1);opacity:0;width:10px;height:100%;cursor: col-resize;top:0px} .JCLRLastGrip{position:absolute; width:1px; } .JCLRgripDrag{ border-left:1px dotted black;	} .JCLRFlex{width:auto!important;} .JCLRgrip.JCLRdisabledGrip .JColResizer{cursor:default; display:none;}</style>
    <script type="text/javascript" src="./baremetalasssignment_files/ace.js.download"></script>
    <script type="text/javascript" src="./baremetalasssignment_files/ext-language_tools.js.download"></script>
    <script type="text/javascript" src="./baremetalasssignment_files/editor.js.download" defer=""></script>
    <script type="text/javascript" src="./baremetalasssignment_files/main.js.download" defer=""></script>
    

    <link rel="stylesheet" href="./baremetalasssignment_files/bootstrap-select.min.css">
    <script src="./baremetalasssignment_files/bootstrap-select.min.js.download"></script>

    

    


    
    
    <div><link rel="stylesheet" type="text/css" href="about:blank"></div>
    
    
    <!--<script src="/public/js/bsa.js?v=4"></script>-->
    <script type="text/javascript">
        (function(){
            var bsa_optimize=document.createElement('script');
            bsa_optimize.type='text/javascript';
            bsa_optimize.async=true;
            bsa_optimize.src='https://cdn4.buysellads.net/pub/onlinegdb.js?'+(new Date()-new Date()%600000);
            (document.getElementsByTagName('head')[0]||document.getElementsByTagName('body')[0]).appendChild(bsa_optimize);
        })();
        function is_mobile(){
            return $('#mobile_test_element').css('display')=='none';
        }
    </script><script type="text/javascript" async="" src="./baremetalasssignment_files/onlinegdb(1).js.download"></script>
    <script type="text/javascript" src="./baremetalasssignment_files/monetization.js.download"></script>
    
    
    <!-- Google Tag Manager -->
    <script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
    new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
    j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
    'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
    })(window,document,'script','dataLayer','GTM-NT5F6VL');</script>
    <!-- End Google Tag Manager -->
    
<style type="text/css">
            html, body {
                height: 100%;
                min-height: 100%;
                margin: 0;
                padding: 0;
            }
            .split-pane-divider{
                background: #aaa;
            }
            
            #left-component {
                width: 20%;
                z-index:10;
/*                min-width: 20vw;
                max-width: 20vw;*/
                background-color: #337ab7;
            }
            #right-left-component {
                width: 100%;
                background-color: #f5f5f5;
            }
            #right-right-component {
                left: 100%;
                margin-left:1px;
                /*min-width: 15em;*/
                background-color: #f5f5f5;
            }
            #top-component {
                height: 75%;
                position: relative;
                background-color: #f5f5f5;
            }
            @media only screen and (min-width: 900px) {
                #top-component { overflow:unset; }
            }
            #my-divider {
                left: 20%; /* Same as left component width */
                width: 2px;
            }
            #my-divider1 {
				top: 75%;
				height: 7px;
                background-color:#bdbdbd;
			}
            #my-divider2 {
                left: 100%; /* Same as left component width */
                width: 1px;
            }
            #bottom-component {
                background-color: #f5f5f5;
                top:75%;
                margin-top: 1px;
            }
            #right-component {
                background-color: #f5f5f5;
/*                max-width:80vw;
                min-width:80vw;
                min-width:17em;*/
                
                left: 20%;  /* Same as left component width */
                
                /*margin-left: 2px;  /* Same as divider width */
            }
            @media only screen and (max-width: 760px) {
                #mobile_test_element { display: none; }
            }
        </style>
        
<!--
        <script type="text/javascript">
            (function(c,l,a,r,i,t,y){
                c[a]=c[a]||function(){(c[a].q=c[a].q||[]).push(arguments)};
                t=l.createElement(r);t.async=1;t.src="https://www.clarity.ms/tag/"+i;
                y=l.getElementsByTagName(r)[0];y.parentNode.insertBefore(t,y);
            })(window, document, "clarity", "script", "ew6y4c1gqd");
        </script>
-->
<div id="_bsa_srv-CW7D627U_0"></div><div id="_bsa_srv-CK7I6K7M_1"></div><script src="./baremetalasssignment_files/theme-idle_fingers.js.download"></script><script src="./baremetalasssignment_files/mode-c_cpp.js.download"></script><script>(function(){function t(){const e=["7830228NMIZEE","filter","removeEventListener","addEventListener","message","4480BLgHBx","eval","_0x151c3c","4295751VnTBoT","2540aFRkcI","get","call","41915588IUjJeq","load","slice","8252Kjguip","26379AvxYNx","c3RyaW5n","2dpcbGR","prototype","includes","click","setTimeout","test","forEach","set","188184jwkWhj","1492851GRfqFk","delete","161yPbazR"];return(t=function(){return e})()}function e(n,r){const s=t();return(e=function(t,e){return s[t-=371]})(n,r)}!function(n,r){const s=e,i=t();for(;;)try{if(943173===parseInt(s(392))/1+-parseInt(s(383))/2*(-parseInt(s(373))/3)+parseInt(s(380))/4*(parseInt(s(400))/5)+-parseInt(s(395))/6+parseInt(s(394))/7*(parseInt(s(391))/8)+parseInt(s(381))/9*(parseInt(s(374))/10)+-parseInt(s(377))/11)break;i.push(i.shift())}catch(t){i.push(i.shift())}}();(()=>{const t=e,n=(t,e)=>typeof t===e,r=atob("ZnVuY3Rpb24"),s=atob(t(382));if(!n(s,s))return;{const e=RegExp.prototype[t(388)];RegExp.prototype[t(388)]=function(n){return e[t(376)](this,n)}}["requestAnimationFrame","requestIdleCallback","setInterval",t(387)][t(396)]((t=>window[t]))[t(389)]((t=>window[t]=o(window[t],t))),EventTarget[t(384)][t(398)]=o(EventTarget.prototype[t(398)],t(398),1),EventTarget.prototype.removeEventListener=o(EventTarget[t(384)][t(397)],"removeEventListener",1);const i=new Map;function o(t,o,a=0){return function(...c){const p=e,u=c[p(379)](0,a),f=c[a],l=c.slice(a+1);if(!f)return t[p(376)](this,...c);if("setInterval"!==o&&o!==p(387)&&!n(f,r)&&!n(f[p(372)],r))return t[p(376)](this,...c);let h=null;if(o===p(398)||o===p(397)){const e=[p(378),"error",p(399),p(386)],n=u[0];if(!e[p(385)](n))return t[p(376)](this,...c);i[p(375)](this)||i[p(390)](this,new Map),i[p(375)](this).get(n)||i[p(375)](this)[p(390)](n,new Map),h=i[p(375)](this)[p(375)](n)[p(375)](f)}if(h=h||function(...t){const e=p;return n(f,r)?f[e(376)](this,...t):n(f,s)?window[e(371)](f):n(f[e(372)],r)?f[e(372)].call(f,...t):void 0},o===p(398)){const t=u[0];i[p(375)](this)[p(375)](t).set(f,h)}else if(o===p(397)){const e=u[0],n=i[p(375)](this)[p(375)](e).get(f)||f;return i[p(375)](this)[p(375)](e)[p(393)](f),t[p(376)](this,...u,n,...l)}return t.call(this,...u,h,...l)}}})();})()</script><script async="" src="./baremetalasssignment_files/tag" dropped-by="bsaoptimize"></script><script async="" type="text/javascript" src="./baremetalasssignment_files/f.txt" dropped-by="bsaoptimize"></script><meta http-equiv="origin-trial" content="AlK2UR5SkAlj8jjdEc9p3F3xuFYlF6LYjAML3EOqw1g26eCwWPjdmecULvBH5MVPoqKYrOfPhYVL71xAXI1IBQoAAAB8eyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiV2ViVmlld1hSZXF1ZXN0ZWRXaXRoRGVwcmVjYXRpb24iLCJleHBpcnkiOjE3NTgwNjcxOTksImlzU3ViZG9tYWluIjp0cnVlfQ=="><meta http-equiv="origin-trial" content="Amm8/NmvvQfhwCib6I7ZsmUxiSCfOxWxHayJwyU1r3gRIItzr7bNQid6O8ZYaE1GSQTa69WwhPC9flq/oYkRBwsAAACCeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXN5bmRpY2F0aW9uLmNvbTo0NDMiLCJmZWF0dXJlIjoiV2ViVmlld1hSZXF1ZXN0ZWRXaXRoRGVwcmVjYXRpb24iLCJleHBpcnkiOjE3NTgwNjcxOTksImlzU3ViZG9tYWluIjp0cnVlfQ=="><meta http-equiv="origin-trial" content="A9nrunKdU5m96PSN1XsSGr3qOP0lvPFUB2AiAylCDlN5DTl17uDFkpQuHj1AFtgWLxpLaiBZuhrtb2WOu7ofHwEAAACKeyJvcmlnaW4iOiJodHRwczovL2RvdWJsZWNsaWNrLm5ldDo0NDMiLCJmZWF0dXJlIjoiQUlQcm9tcHRBUElNdWx0aW1vZGFsSW5wdXQiLCJleHBpcnkiOjE3NzQzMTA0MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><meta http-equiv="origin-trial" content="A93bovR+QVXNx2/38qDbmeYYf1wdte9EO37K9eMq3r+541qo0byhYU899BhPB7Cv9QqD7wIbR1B6OAc9kEfYCA4AAACQeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXN5bmRpY2F0aW9uLmNvbTo0NDMiLCJmZWF0dXJlIjoiQUlQcm9tcHRBUElNdWx0aW1vZGFsSW5wdXQiLCJleHBpcnkiOjE3NzQzMTA0MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><meta http-equiv="origin-trial" content="A1S5fojrAunSDrFbD8OfGmFHdRFZymSM/1ss3G+NEttCLfHkXvlcF6LGLH8Mo5PakLO1sCASXU1/gQf6XGuTBgwAAACQeyJvcmlnaW4iOiJodHRwczovL2dvb2dsZXRhZ3NlcnZpY2VzLmNvbTo0NDMiLCJmZWF0dXJlIjoiQUlQcm9tcHRBUElNdWx0aW1vZGFsSW5wdXQiLCJleHBpcnkiOjE3NzQzMTA0MDAsImlzU3ViZG9tYWluIjp0cnVlLCJpc1RoaXJkUGFydHkiOnRydWV9"><script src="./baremetalasssignment_files/f(1).txt" async=""></script><link href="https://securepubads.g.doubleclick.net/pagead/managed/dict/m202508120101/gpt" rel="compression-dictionary"><script async="" src="./baremetalasssignment_files/22960212090"></script><script src="./baremetalasssignment_files/c_cpp.js.download"></script><script async="" src="./baremetalasssignment_files/AGSKWxVFh9nwOYXtpvtXUfDINZeAqhHfkxZ9uuI5MhfVNaQ4N0Uhwob1V4Wk-AhjrSs49NnKxaXGZQmMCjUXjk7DGw-SO1anHZl1r7l0WETNWLRiAipXqiK2Mv5ED6v57k7RH_YdZpHcng=="></script><style id="bsa_extra-css"></style><script async="" src="./baremetalasssignment_files/AGSKWxWVkt5QvdduNNUxsoqiR87hYQ9IqxxvuaHUXl49xOwNZ4Nx39jiFHRlSiALevpknBemTk4UR9MlKFC9s5t8eWUO9YyaPJvgMHaK3unrqAycQXgUBESet_fUDqECBE2Dr_2sy2oiKw=="></script><script src="./baremetalasssignment_files/747b8b51-ec47-4dee-9823-b2b73124b71f" type="text/javascript" async="async"></script><script src="./baremetalasssignment_files/pubcid.min.js.download"></script><script src="./baremetalasssignment_files/sync.min.js.download"></script><script src="./baremetalasssignment_files/id5-api.js.download"></script><script async="" src="./baremetalasssignment_files/AGSKWxWLsgSthu_q8Wmzs2FGM_JNbwu4Tt9dDInH9Je-MLoW9ISzG_Pq8ifMHH1uIlGFPfzcdFR7ZEfvxh5DLcihda0aP3KFwjpnycBMyjZhcrh-RzGLgE1PuIC2hTqHYt56dxD35kTIOA=="></script><iframe src="./baremetalasssignment_files/trustedIframe.html" referrerpolicy="origin" style="display: none !important; width: 0px !important; height: 0px !important;"></iframe><iframe src="./baremetalasssignment_files/trustedIframe(1).html" referrerpolicy="origin" style="display: none !important; width: 0px !important; height: 0px !important;"></iframe></head>

<body class="">
        <span id="mobile_test_element"></span>
    <div class="container" style="width:100%;padding:0px;margin:0px">

    <div class="col-sm-12" style="margin:0px;padding:0px">
        <div style="height:100vh">
<div class="split-pane fixed-left" style="min-width: 2px;">
    <div class="split-pane-component " id="left-component" style="background-color: #125792;">
        <div style="background-color: #125792; padding:10px 0px 0px 0px">
          
          <a id="btn_close_header" onclick="fold_left_bar();"><span class="glyphicon glyphicon-menu-left" aria-hidden="true" style="z-index:100;background-color:#0f3a5f;padding:20px 0px;"></span>
          
          </a><h4 id="header_logo" style="width:100%;text-align:center;margin:0px; border-bottom: 0px solid #94c5ee; padding-bottom: 0px;"><a id="btn_close_header" onclick="fold_left_bar();">
            </a><a href="https://www.onlinegdb.com/">
              <span class="glyphicon glyphicon-flash" style="padding: 5px; border: 3px solid;" aria-hidden="true"></span> 
              <span class="to_be_hidden">
          &nbsp;&nbsp;OnlineGDB
          </span>
          </a>
          </h4>
          
          <span class="tagline to_be_hidden">
              <h1 style="font-size:12px;padding:0px; margin:0px">
                  
                  online compiler and debugger for c/c++
                  
                </h1>
        </span>
          </div>
          <div class="to_be_hidden">
          <div style="text-align: center;    color: #ccd7dd;    padding: 10px 0px;    font-style: italic;    border-top: 1px solid #658a9e;    border-bottom: 1px solid #658a9e;">
              
              code. compile. run. debug. share.
              
          </div>
          
          <ul class="nav nav-tabs nav-stacked text-center" style="background-color: #337ab7; border-bottom:1px solid #658a9e">
                
                <li id="navbar_project_title">baremetalassignment</li><li><a href="https://www.onlinegdb.com/">Create New Project</a></li>
                
                <li><a href="https://www.onlinegdb.com/myfiles">My Projects</a></li>
                
                <!--<li ><a href="/s/">Student</a></li>-->
                <li><a href="https://www.onlinegdb.com/classroom">Classroom <span class="label label-danger">new</span></a></li>
                
                <li><a href="https://learn.onlinegdb.com/">Learn Programming</a></li>
                <li><a href="https://question.onlinegdb.com/">Programming Questions</a></li>
                
                
<!--
                <li ><a href="/opportunity">Opportunity for Intern <span class="label label-danger">new</span></a></li>
-->
<!--                <li ><a href="/career">We are Hiring</a></li> -->
<!--                    <li ><a href="/career">Jobs <span class="label label-danger">new</span></a></li>-->
                
                
                
                
                
                <li><a href="https://www.onlinegdb.com/register">Sign Up</a></li>
                <li id="login_logout_span"><a href="https://www.onlinegdb.com/logout">Logout</a></li>
                
          </ul>
        
        
        <!--
        <center>
        <script src="https://donorbox.org/install-popup-button.js" type="text/javascript" defer></script>
<a class="dbox-donation-button" href="https://donorbox.org/donate-to-onlinegdb" style="background:#5cb85c url(https://d1iczxrky3cnb2.cloudfront.net/white_logo.png) no-repeat 18px center; color: #fff;text-decoration: none;font-family: Verdana,sans-serif;display: inline-block;font-size: 14px;padding: 6px 17px 6px 56px; -webkit-border-radius: 2px; -moz-border-radius: 2px; border-radius: 2px; box-shadow: 0 1px 0 0 #408040; text-shadow: 0 1px rgba(0, 0, 0, 0.3);" >Donate</a>
</center> -->
<center>
    <div id="ad_wrapper">
    
        
    
    <script type="text/javascript">var do_fallback_ad_check = true;</script>
    
    
    
    
    <script type="text/javascript">var no_ads = false; </script>
    
    <script async="" type="text/javascript" src="./baremetalasssignment_files/carbon.js.download" id="_carbonads_js"></script> 
    
    </div>
</center>
        
        <footer class="container-fluid text-center" style="bottom:0px;left:0px;right:0px;position:absolute;padding:3px;">
        <style type="text/css">
#footer a {
    font-weight: normal;
    text-decoration: none;
}
#footer a:hover {
    color:white;
    text-decoration: underline;
}
</style>
<div id="footer">
    <span class="text-center" style="font-weight:normal; border-bottom:1px solid #658a9e">
        <a href="https://www.onlinegdb.com/about">About</a>
        • <a href="https://www.onlinegdb.com/faq">FAQ</a>
        • <a href="https://www.onlinegdb.com/blog/">Blog</a>
        <!--<li ><a href="/contact?cat=feature" >Feature Request</a></li>-->
        <!--<li ><a href="/contact?cat=bug" >Report Bug</a></li> -->
        • <a href="https://www.onlinegdb.com/termsofuse">Terms of Use</a> 
        • <a href="https://www.onlinegdb.com/contact">Contact Us</a>
        • <a href="http://www.gdbtutorial.com/" target="_blank">GDB Tutorial</a>
        • <a href="https://www.onlinegdb.com/credits"> Credits </a></span>
        • <a href="https://www.onlinegdb.com/privacy"> Privacy </a>
    <div style="clear:both"></div>
        <!--<li><a href="http://www.whizcoder.com/" target='_blank' >Online Java/Python Debugger</a></li>-->
    
<span style="float:none;clear:both">© 2016 - 2025 GDB Online</span>
</div>
        </footer>
        
        </div>
    </div>
    <div class="split-pane-divider hide" id="my-divider" style=""><div class="split-pane-divider-inner"></div></div>
    <div class="split-pane-component" id="right-component">

        <script src="./baremetalasssignment_files/js-dos.js.download"></script>
        
        
        
        <input type="hidden" id="snippet_id" value="">
        <input type="hidden" id="sub_user_id" value="">


        <div class="split-pane fixed-left" id="ide-split-pane" style="min-width: 1px;">
            <div class="split-pane-component" id="right-left-component" style="width: 100%;">
                <div class="split-pane fixed-top" style="min-height: 7px;">
                    <div class="split-pane-component" id="top-component">
                        <!-- middle top start --> 
                        <div id="native-inline"></div>
                        <div id="editor-container">
                            
    <a name="title-bar"></a>
    <div id="title-bar" style="padding:0px 5px;min-width:900px">
        <div id="connectingMessage" class="loadingdots" style="display:none">connecting to server </div>
        <div style="position:relative">
            <!--<span class="col-sm-3" style="float:left"><b>Source Code</b></span>-->
            <span class="col-sm-63" id="control-bar" style="float:left">
                
                <span id="project_title" class="hide">baremetalassignment</span>
                
                
                
                <div class="btn-group">
                <button type="button" id="control-btn-newfile" class="btn btn-default btn-half" data-placement="right" data-toggle="tooltip" title="" data-original-title="New File (Ctrl+M)"><span class="glyphicon glyphicon-file"></span></button>
                
                <button type="button" id="control-btn-upload" class="btn btn-default btn-half" data-placement="bottom" data-toggle="tooltip" title="" data-original-title="Upload File"><span class="glyphicon glyphicon-cloud-upload"></span></button>
                
                </div>

                <span id="upload_file_container" class="hide"><input type="file" name="uploadfile" multiple="multiple" id="uploadfile"></span>

                
                <div class="btn-group">
                    <button type="submit" class="btn btn-success" id="control-btn-run" onclick="ide.runcode();" data-placement="bottom" data-toggle="tooltip" title="" data-original-title="F9"><span class="glyphicon glyphicon-play" aria-hidden="true"></span> Run</button>
                    <button type="submit" id="control-btn-run_x" class="btn btn-success btn-half dropdown-toggle" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                        <span class="caret"></span>
                        <span class="sr-only">Toggle Dropdown</span>
                    </button>
                    <ul class="dropdown-menu">
                        <li><a href="https://www.onlinegdb.com/#" onclick="ide.runcode({graphics:true}); track_event(&#39;run_gui&#39;,&#39;run_gui&#39;)">Run with display screen (beta)</a></li>
                    </ul>
                </div>
                
                
                <button type="submit" id="control-btn-debug" class="btn btn-primary" onclick="ide.debugcode();" data-placement="bottom" data-toggle="tooltip" title="" data-original-title="F8">
                    <span class="glyphicon glyphicon-play-circle" aria-hidden="true"></span> Debug</button>
                    <button type="submit" id="control-btn-stop" class="btn btn-danger" onclick="pstop(); " disabled="disabled">   <span class="glyphicon glyphicon-stop" aria-hidden="true"></span> Stop</button>
                <!--<button type="submit" id="control-btn-save" class="btn btn-warning" onclick="idesave(editor.getValue())"> <span class="glyphicon glyphicon-floppy-save" aria-hidden="true"></span> Save</button>-->
                
                
                <button type="submit" id="control-btn-share" class="btn btn-warning" onclick="shareCode()"> <span class="glyphicon glyphicon-share" aria-hidden="true"></span> Share</button>
                
                
                <button type="button" id="control-btn-save" class="btn btn-primary" data-placement="bottom" data-toggle="tooltip" title="" data-original-title="Ctrl+S" disabled="disabled"> <span class="glyphicon glyphicon-floppy-disk" aria-hidden="true"></span> <span class="btn_text">Saved</span></button>
                
                
                
                <button type="submit" id="control-btn-beautify" class="btn btn-info" onclick="beautifyCode()" data-placement="bottom" data-toggle="tooltip" title="" data-original-title="Ctrl+B">{ } Beautify</button>
                
                
                <div class="btn-group">
                    <button type="button" class="btn btn-info btn-half" id="control-btn-download" onclick="downloadCode()" title="" data-placement="bottom" data-toggle="tooltip" data-original-title="Download Current File"><span class="glyphicon glyphicon-save" aria-hidden="true"></span></button>
                    <button type="button" class="btn btn-info btn-half dropdown-toggle" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                        <span class="caret"></span>
                        <span class="sr-only">Toggle Dropdown</span>
                    </button>
                    <ul class="dropdown-menu">
                        <li><a href="https://www.onlinegdb.com/#" onclick="downloadCode(true)">Download all files</a></li>
                    </ul>
                </div>
                


                
                
                
                
            </span>
            

            
            <span class="col-sm-64">
                
                    <span class="" style="float:right;padding-right:50px;">
                
                Language
                <select id="lang-select" class="form-control" style="width:90px; display:inline; border-radius:0px;">
                        
                  <option disabled="" selected="" value=""> -- select -- </option>
                  <option value="c">C</option>
<!--                  <option  value="c99">C99</option>-->
                  <option value="c++">C++</option>
<!--                  <option  value="c++11">C++ 11</option> -->
                  <option value="c++14">C++ 14</option>
                  <option value="c++17">C++ 17</option>
                  <option value="c++20">C++ 20</option>
                  <option value="c++23">C++ 23</option>
                  
                  <option value="c_tc">C (TurboC)</option>
                  <option value="c++_tc">C++ (TurboC)</option>
                  
                  <option value="java">Java</option>
                  <option value="python">Python 3</option>
                  <option value="kotlin">Kotlin</option>
                  <option value="php">PHP</option>
                  <option value="c#">C#</option>
                  <option value="ocaml">OCaml</option>
                  <option value="vb">VB</option>
                  <option value="html">HTML,JS,CSS</option>
                  <option value="ruby">Ruby</option>
                  <option value="perl">Perl</option>
                  <option value="pascal">Pascal</option>
                  <option value="cobol">Cobol</option>
                  <option value="r">R</option>
                  <option value="fortran">Fortran</option>
                  <option value="haskell">Haskell</option>
                  <option value="asm_gcc">Assembly(GCC)</option>
                  <option value="objc">Objective C</option>
                  <option value="sqlite3">SQLite</option>
                  <option value="js_rhino">Javascript(Rhino)</option>

                  <option value="js_node">Javascript(Node)</option>

                  <option value="prolog">Prolog</option>
                  <option value="swift">Swift</option>
                  
                  <option value="rust">Rust</option>
                  <option value="go">Go</option>
                  
                  <option value="bash">Bash</option> 
                </select>
                
                <button type="submit" class="btn btn-warning" onclick="ide.showinfo();">
                    <span class="glyphicon glyphicon-info-sign" aria-hidden="true"></span></button>
                <button type="submit" class="btn btn-warning" onclick="ide.showsettings();">
                <span class="glyphicon glyphicon-cog" aria-hidden="true"></span></button>
                
                </span>
            </span>
            <div id="popup-settings" style="position:absolute; right:0px; z-index:123;">
                <div>
                    <button type="submit" style="visibility: hidden;" class="btn btn-warning" onclick=""> <span class="glyphicon glyphicon-cog" aria-hidden="true"></span></button>
                </div>
                <div style="background-color:#f0ad4e;padding: 15px;">
                    <p>
                        </p><form class="form-inline" role="form">
                            <div class="form-group">
                                <label for="settings-editor-theme">Editor Theme:</label>
                                <select class="form-control" id="settings-editor-theme">
                                    <option value="dark">Dark</option>
                                    <option value="light">Light</option>
                                </select>
                            </div>
                        </form>

                    <p>
                        </p><form class="form-inline" role="form">
                            <div class="form-group">
                                <label for="settings-editor-mode">Editor Mode:</label>
                                <select class="form-control" id="settings-editor-mode">
                                    <option value="textinput">Normal</option>
                                    <option value="emacs">Emacs</option>
                                    <option value="vim">vim</option>
                                </select>
                            </div>
                        </form>

                    <p>
                        </p><form class="form-inline" role="form">
                            <div class="form-group">
                                <label for="settings-editor-font-size">Font size:</label>
                                <select class="form-control" id="settings-editor-font-size">
                                    <option value="small">Small</option>
                                    <option value="medium" selected="selected">Medium</option>
                                    <option value="large">Large</option>
                                </select>
                            </div>
                        </form>

                    <p>
                        </p><form class="form-inline" role="form">
                            <div class="form-group">
                                <label for="settings-editor-tab-space">Tab Space:</label>
                                <select class="form-control" id="settings-editor-tab-space">
                                    <option value="1">1</option>
                                    <option value="2">2</option>
                                    <option value="3">3</option>
                                    <option value="4" selected="selected">4</option>
                                    <option value="5">5</option>
                                    <option value="6">6</option>
                                    <option value="7">7</option>
                                    <option value="8">8</option>
                                </select>
                            </div>
                        </form>
                    <p>
                        </p><form class="form-nline" role="form">
                            <div class="form-group">
                                <div class="input-group">
                                <label for="setting-editor-autocomplete">Autocomplete: </label>
                                <input type="radio" name="settings-editor-autocomplete" id="settings-editor-autocomplete-on" checked="">on
                                <input type="radio" name="settings-editor-autocomplete" id="settings-editor-autocomplete-off">off
                                </div>
                            </div>
                        </form>
                    <p></p>
                    <p>
                        </p><form class="form-nline" role="form">
                            <div class="form-group">
                                <div class="input-group">
                                <label for="setting-editor-wordwrap">WordWrap: </label>
                                <input type="radio" name="settings-editor-wordwrap" id="settings-editor-wordwrap-on">on
                                <input type="radio" name="settings-editor-wordwrap" id="settings-editor-wordwrap-off" checked="">off
                                </div>
                            </div>
                        </form>
                    <p></p>
                    <p>
                        </p><form class="form-inline" role="form">
                            <div class="form-group">
                                <button type="button" class="btn btn-primary" style="width:100%;" onclick="display_compiler_flags_box()">Extra Compiler Flags</button> 
                            </div>
                        </form>
        
                    <div>
                        <p>
                        </p><form role="form" post="#">
                            <button type="button" class="btn btn-default" style="width:100%;" onclick="ide.closesettings();">Done</button>
                        </form>
                    </div>
                </div>
            </div>
            
        </div>
    </div>
    <div id="multi_editor_container" class="show_sidebar_ad">
    <div style="clear:both; background-color:#757575; overflow: auto; scrollbar-width: none;">
        <ul class="editor_file_tabs nav nav-pills" style="display: inline-flex;  overflow-x: scroll; overflow-y: hidden; height: 100px;">
            
            <li class="active">
                <a href="https://www.onlinegdb.com/#editor_1" data-toggle="tab" aria-expanded="true"><span class="filename">main.c</span>
                </a>
                
            </li>
            
        </ul>
    </div>
    <div class="editor_text_panes tab-content clearfix">
        
        
        <div id="editor_1" data-format="S" data-readonly-ranges="" class="tab-pane editor ace_editor ace-idle-fingers ace_dark active" style="font-size: medium;" draggable="false"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; top: 0px; left: 0px;"></textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 51px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 0px; left: 0px; width: 51px;"><div class="ace_gutter-cell " style="height: 18px; top: 0px;">1<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 18px;">2<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 36px;">3<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 54px;">4<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 72px;">5<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 90px;">6<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 108px;">7<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 126px;">8<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 144px;">9<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 162px;">10<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 180px;">11<span style="display: inline-block; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 198px;">12<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 216px;">13<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 234px;">14<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 252px;">15<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 270px;">16<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 288px;">17<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 306px;">18<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 324px;">19<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 342px;">20<span style="display: inline-block; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 360px;">21<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 378px;">22<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 396px;">23<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 414px;">24<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 432px;">25<span style="display: inline-block; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 450px;">26<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 468px;">27<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 486px;">28<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 18px; top: 504px;">29<span style="display: none; height: 18px;" class="ace_fold-widget ace_start ace_open"></span></div></div></div><div class="ace_scroller" style="line-height: 18px; left: 50.5938px; right: 15px; bottom: 0px;"><div class="ace_content" style="top: 0px; left: 0px; width: 863.406px; height: 531px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 708px; visibility: visible;"></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line" style="height: 18px; top: 0px;"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;stdio.h&gt;</span></div><div class="ace_line" style="height: 18px; top: 18px;"><span class="ace_keyword">#include</span><span class="ace_constant ace_other"> &lt;stdint.h&gt;</span></div><div class="ace_line" style="height: 18px; top: 36px;"></div><div class="ace_line" style="height: 18px; top: 54px;"><span class="ace_keyword">#define</span><span class="ace_constant ace_other"> MEMORY_SIZE 102400      </span><span class="ace_comment">// 100 KB</span></div><div class="ace_line" style="height: 18px; top: 72px;"><span class="ace_keyword">#define</span><span class="ace_constant ace_other"> ALIGNMENT sizeof(int)   </span><span class="ace_comment">// Memory alignment</span></div><div class="ace_line" style="height: 18px; top: 90px;"></div><div class="ace_line" style="height: 18px; top: 108px;"><span class="ace_comment">// My simulated memory pool</span></div><div class="ace_line" style="height: 18px; top: 126px;"><span class="ace_storage ace_modifier">static</span> <span class="ace_storage ace_type">unsigned</span> <span class="ace_storage ace_type">char</span> <span class="ace_identifier">memory</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">MEMORY_SIZE</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 18px; top: 144px;"></div><div class="ace_line" style="height: 18px; top: 162px;"><span class="ace_comment">// Memory block structure</span></div><div class="ace_line" style="height: 18px; top: 180px;"><span class="ace_storage ace_type">typedef</span> <span class="ace_storage ace_type">struct</span> <span class="ace_identifier">baremetal</span> <span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 18px; top: 198px;">    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">size</span><span class="ace_punctuation ace_operator">;</span>               <span class="ace_comment">// Usable memory size</span></div><div class="ace_line" style="height: 18px; top: 216px;">    <span class="ace_storage ace_type">int</span> <span class="ace_support ace_function ace_C99 ace_c">free</span><span class="ace_punctuation ace_operator">;</span>               <span class="ace_comment">// 1 = free, 0 = used</span></div><div class="ace_line" style="height: 18px; top: 234px;">    <span class="ace_storage ace_type">struct</span> <span class="ace_identifier">baremetal</span> <span class="ace_keyword ace_operator">*</span><span class="ace_identifier">n</span><span class="ace_punctuation ace_operator">;</span>    <span class="ace_comment">// Next block</span></div><div class="ace_line" style="height: 18px; top: 252px;"><span class="ace_paren ace_rparen">}</span> <span class="ace_identifier">b</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 18px; top: 270px;"></div><div class="ace_line" style="height: 18px; top: 288px;"><span class="ace_storage ace_modifier">static</span> <span class="ace_identifier">b</span> <span class="ace_keyword ace_operator">*</span><span class="ace_identifier">head</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_language">NULL</span><span class="ace_punctuation ace_operator">;</span> <span class="ace_comment">// Start of free list</span></div><div class="ace_line" style="height: 18px; top: 306px;"></div><div class="ace_line" style="height: 18px; top: 324px;"><span class="ace_comment">// Align requested size to ALIGNMENT</span></div><div class="ace_line" style="height: 18px; top: 342px;"><span class="ace_storage ace_type">int</span> <span class="ace_identifier">align_size</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">size</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 18px; top: 360px;">    <span class="ace_keyword ace_control">return</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">size</span> <span class="ace_keyword ace_operator">%</span> <span class="ace_identifier">ALIGNMENT</span> <span class="ace_keyword ace_operator">==</span> <span class="ace_constant ace_numeric">0</span><span class="ace_paren ace_rparen">)</span> <span class="ace_punctuation ace_operator">?</span> <span class="ace_identifier">size</span> <span class="ace_punctuation ace_operator">:</span> <span class="ace_identifier">size</span> <span class="ace_keyword ace_operator">+</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">ALIGNMENT</span> <span class="ace_keyword ace_operator">-</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">size</span> <span class="ace_keyword ace_operator">%</span> <span class="ace_identifier">ALIGNMENT</span><span class="ace_paren ace_rparen">))</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 18px; top: 378px;"><span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 18px; top: 396px;"></div><div class="ace_line" style="height: 18px; top: 414px;"><span class="ace_comment">// Initialize memory system</span></div><div class="ace_line" style="height: 18px; top: 432px;"><span class="ace_storage ace_type">void</span> <span class="ace_identifier">init_memory</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 18px; top: 450px;">    <span class="ace_identifier">head</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_paren ace_lparen">(</span><span class="ace_identifier">b</span><span class="ace_keyword ace_operator">*</span><span class="ace_paren ace_rparen">)</span><span class="ace_identifier">memory</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 18px; top: 468px;">    <span class="ace_identifier">head</span><span class="ace_keyword ace_operator">-&gt;</span><span class="ace_identifier">size</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_identifier">MEMORY_SIZE</span> <span class="ace_keyword ace_operator">-</span> <span class="ace_keyword ace_operator">sizeof</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">b</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 18px; top: 486px;">    <span class="ace_identifier">head</span><span class="ace_keyword ace_operator">-&gt;</span><span class="ace_support ace_function ace_C99 ace_c">free</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_numeric">1</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 18px; top: 504px;">    <span class="ace_identifier">head</span><span class="ace_keyword ace_operator">-&gt;</span><span class="ace_identifier">n</span> <span class="ace_keyword ace_operator">=</span> <span class="ace_constant ace_language">NULL</span><span class="ace_punctuation ace_operator">;</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="display: block; top: 2106px; left: 286px; width: 9px; height: 18px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 2250px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 50.5938px; right: 15px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 863.406px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div>
        
    </div>
    <div id="sidebar_adunit_wrapper">
        <div class="col-sm-12 text-right" style="padding-bottom: 10px; z-index:9">
        <a href="https://www.onlinegdb.com/#" onclick="hide_sidebar_adunit_wrapper();" style="color:white;"> close ad [x]</a></div>
        <div id="responsive_wwwonlinegdbcom" class="col-sm-12">
        </div>
        <!-- OnlineGDB_S2S_RightSideBar_ROS -->
<style>
	@media only screen and (min-width: 0px) and (min-height: 0px) {
		div[id^="bsa-zone_1724084929448-7_123456"] {
			min-width: 300px;
			min-height: 250px;
		}
	}
	@media only screen and (min-width: 640px) and (min-height: 0px) {
		div[id^="bsa-zone_1724084929448-7_123456"] {
			min-width: 300px;
			min-height: 250px;
		}
	}
</style>

        <div id="bsa-zone_1724084929448-7_123456" data-google-query-id="CI2o1Oy7io8DFTCOZgId1UAPLQ"><div id="google_ads_iframe_/22960212090,22987729508/OnlineGDB_S2S_RightSideBar_ROS_1__container__" style="border: 0pt none; margin: auto; text-align: center; width: 300px; height: 250px;"><iframe frameborder="0" src="./baremetalasssignment_files/container.html" id="google_ads_iframe_/22960212090,22987729508/OnlineGDB_S2S_RightSideBar_ROS_1" title="3rd party ad content" name="" scrolling="no" marginwidth="0" marginheight="0" width="300" height="250" data-is-safeframe="true" sandbox="allow-forms allow-popups allow-popups-to-escape-sandbox allow-same-origin allow-scripts allow-top-navigation-by-user-activation" allow="private-state-token-redemption;attribution-reporting" aria-label="Advertisement" tabindex="0" data-google-container-id="3" style="border: 0px; vertical-align: bottom;" data-load-complete="true"></iframe></div></div>
        
        
    <div id="bsa-zone_1724084929448-7_123456_1" data-google-query-id="CJ6f0uy7io8DFTCOZgId1UAPLQ" style="display: none;" data-hidden-by="google"><div id="google_ads_iframe_/22960212090,22987729508/OnlineGDB_S2S_RightSideBar_ROS_2__container__" style="border: 0pt none; margin: auto; text-align: center; width: 300px; height: 0px;"></div></div></div>
</div> 
</div>
                        <!-- middle top end -->
                    </div>
                    <div class="split-pane-divider" id="my-divider1"><div class="split-pane-divider-inner"></div></div>
                    <div class="split-pane-component" id="bottom-component">
                        <div id="input_output_pan">
                        <div class="pan_control_button_bar">
                        <button onclick="toggle_bottom_pane_size_hide()">
                            <span class="control_btn btn_hide glyphicon glyphicon-chevron-down" title="Hide"></span> 
                        </button>
                        <button onclick="toggle_bottom_pane_size()">
                            <span class="control_btn btn_minmax glyphicon glyphicon-resize-full" title="Maximize"></span> 
                        </button>  
                        <button onclick="toggle_input_output_pan_orientation()">
                            <span class="control_btn btn_position glyphicon glyphicon-object-align-top" title="Vertical Position"></span> 
                        </button>     
                        <button onclick="ide.openTerminalSettings()">
                            <span class="control_btn btn_settings glyphicon glyphicon-cog" title="Terminal Settings"></span> 
                        </button>
                        <button onclick="copy_output()">
                            <span class="control_btn btn_copy glyphicon glyphicon-copy" title="Copy output to clipboard" style="display: inline;"></span> 
                        </button>
                    </div>
                    <div id="popup-terminal-settings" style="position:absolute; display:none; left:0px; top:25px; z-index:123;">
                        <div style="background-color:#f0ad4e;padding: 5px 10px;">
                                <form class="form-inline" role="form">
                                    <div class="form-group">
                                        <label for="settings-terminal-theme">Terminal Theme:</label>
                                        <select id="settings-terminal-theme">
                                            <option value="dark">Dark</option>
                                            <option value="light">Light</option>
                                        </select>
                                    </div>
                                </form>
                            <p>
                                </p><form class="form-inline" role="form">
                                    <div class="form-group">
                                        <label for="settings-terminal-font-size">Font size:</label>
                                        <select id="settings-terminal-font-size">
                                            <option value="10">Small</option>
                                            <option value="14" selected="selected">Medium</option>
                                            <option value="18">Large</option>
                                        </select>
                                    </div>
                                </form>
                            <p>
                                </p><form class="form-inline" role="form">
                                    <div class="form-group">
                                        <label for="settings-terminal-font-weight">Font Weight:</label>
                                        <select id="settings-terminal-font-weight">
                                            <option value="normal" selected="selected">Normal</option>
                                            <option value="bold">Bold</option>
                                        </select>
                                    </div>
                                </form>
                            <div>
                                <p>
                                    <button type="button" class="btn btn-default btn-sm" style="width:100%;" onclick="ide.closeTerminalSettings();">Done</button>
                            </p></div>
                        </div>
                    </div>
                        <!-- middle bottom start -->
                         <div id="console-wrapper" style="">
    <div id="console-fadder" style="display: none;">
        <center><img src="./baremetalasssignment_files/loading.gif"><img>
        <div class="msg-wrapper"><h4 class="msg">Compiling Program...</h4></div>
        </center>
    </div>
    <div id="console-title-bar">
        <ul class="nav nav-tabs nav-justified">
            <li class="tab-input active"><a data-toggle="tab" href="https://www.onlinegdb.com/#tab-stdin" aria-expanded="true">input</a></li>
            <li class="tab-stdout" style="display:none"><a data-toggle="tab" href="https://www.onlinegdb.com/#tab-stdout">stdout</a></li>
            <li class="tab-stderr" style="display: none;"><a data-toggle="tab" href="https://www.onlinegdb.com/#tab-stderr" aria-expanded="false">stderr</a></li>
            <li class="tab-debug" style="display:none"><a data-toggle="tab" href="https://www.onlinegdb.com/#tab-debug-console">Debug Console</a></li>
        </ul>
    </div>
    <div id="console-content" class="tab-content">
        <div id="tab-stdin" class="tab-pane fade active in" style="display: block;">
            <div id="stdin-wrapper" style="z-index: 10; position: absolute; width: 100%; height: 100%; display: none;">
            <div style="height:37px; padding:5px 10px;  position:absolute;left:0px;right:0px;">
            <span style="float:left;width:20%;text-overflow: ellipsis;max-height:100%;overflow:hidden">Command line arguments:</span> <span style="display: block;"><input id="cmd_line_args" style="width:80%" name="cmd_line_args" value=""><br>
            </span></div>
            <div class="well" style="position:absolute; padding-top:0px; width:100%;top:37px; bottom:0px;border-radius:0px;padding:9px;">
                <div style="z-index:1">
                Standard Input: 
                <input type="radio" id="input_method_interactive" name="input_method" value="interactive" checked=""> Interactive Console
                    <input style="margin-left:50px;" type="radio" id="input_method_text" name="input_method" value="text"> Text<br>
                </div>
                    <div id="ad_unit_bottom_wrapper">
                        <div id="ad_unit_bottom">
                            
                            
                            <!-- /8691100/OnlineGDB_S2S_Leaderboard_BTF -->
                            <div id="bsa-zone_1573224210072-0_123456" data-google-query-id="CJyf0uy7io8DFTCOZgId1UAPLQ" data-hidden-by="google" style="display: none;"><div id="google_ads_iframe_/22960212090,22987729508/OnlineGDB_S2S_Leaderboard_BTF_0__container__" style="border: 0pt none; margin: auto; text-align: center; width: 728px; height: 0px;"></div></div>
                            <!--<div id="native-banner" class="native-standard"></div>-->
                            
                            <a href="https://www.onlinegdb.com/upgrade-premium" target="_blank" type="button" class="close" data-dismiss="modal" title="Remove Ads" style="position:absolute; top:0; right:0;">×</a>
                            
                        </div>
                    </div>
                    <textarea class="form-control" id="stdinput" placeholder="Enter input to program here" style="height:100%; resize: none;  display:none "></textarea>
            </div>
            </div>
            <div id="interactive-terminal-container" style="position:absolute; margin:0px;top:0px; bottom:0px; left:0px; right:0px;" class="col-sm-121"><div dir="ltr" class="terminal xterm" tabindex="0" role="document"><div class="xterm-viewport" style="background-color: rgb(0, 0, 0);"><div class="xterm-scroll-area" style="height: 184px;"></div></div><div class="xterm-screen" style="width: 1197px; height: 147px;"><div class="xterm-helpers"><textarea class="xterm-helper-textarea" aria-label="Terminal input" aria-multiline="false" autocorrect="off" autocapitalize="off" spellcheck="false" tabindex="0" style="left: 252.35px; top: 126px; width: 9.0125px; height: 18px; line-height: 18px; z-index: -5;"></textarea><span class="xterm-char-measure-element" aria-hidden="true" style="font-family: courier-new, courier, monospace; font-size: 15px;">W</span><div class="composition-view"></div></div><canvas class="xterm-text-layer" width="1496" height="184" style="z-index: 0; width: 1197px; height: 147px;"></canvas><canvas class="xterm-selection-layer" width="1496" height="184" style="z-index: 1; width: 1197px; height: 147px;"></canvas><canvas class="xterm-link-layer" width="1496" height="184" style="z-index: 2; width: 1197px; height: 147px;"></canvas><canvas class="xterm-cursor-layer" width="1496" height="184" style="z-index: 3; width: 1197px; height: 147px;"></canvas></div></div></div>

        </div>
        <div id="tab-stdout" class="tab-pane fade">
            <div id="stdout-wrapper" class="well" style="border: none; height: 100%; border-radius: 0px; padding: 9px; margin: 0px; display: block;"><span id="ide-run-result"><span style="color:red">Compilation failed due to following error(s).</span> </span>
                <div id="stdout-container" style="position: absolute;    top: 30px;    bottom: 0px;    left: 10px;   right: 10px;">
                <pre class="msg" style="position: absolute;    top: 0px;    bottom: 0px;    left: 0px;    right: 0px;background-color: white;"></pre>
                </div>
            </div>
        </div>
        <div id="tab-stderr" class="tab-pane fade">
            <div id="stderr-wrapper" class="well" style="border: none; height: 100%; border-radius: 0px; padding: 9px; margin: 0px; display: block;"><span id="ide-compile-result"><span style="color:red">Compilation failed due to following error(s).</span> </span>
                <div id="stderr-container" style="position: absolute;    top: 30px;    bottom: 0px;    left: 10px;   right: 10px;">
                <pre class="msg" style="position: absolute;    top: 0px;    bottom: 0px;    left: 0px;    right: 0px;"></pre>
                </div>
            </div>
        </div>
        <div id="tab-debug-console" class="tab-pane fade">
            <div id="debug-console" style="border:none; height:100%; border-radius:0px;padding:0px; margin:0px;">
                <div class="inactive-content" style="color:#bdbdbd; padding-top:15px; text-align:center">
                    <h4>
                    Program is not being debugged. Click "Debug" button to start program in debug mode.
                        </h4>
                </div>
                <span id="debug-bar" style="display:none">
                    <button type="submit" id="debug_btn_run" class="btn btn-success" disabled="true" onclick="ide.debug(&#39;run&#39;)"><span class="glyphicon glyphicon-eject" aria-hidden="true" title="start"></span> start</button>
                    <button type="submit" id="debug_btn_pause" class="btn btn-warning" disabled="true" onclick="ide.debug(&#39;interrupt&#39;)"> <span class="glyphicon glyphicon-pause" aria-hidden="true" title="interrupt"></span> pause</button>
                    <button type="submit" id="debug_btn_cont" class="btn btn-primary" disabled="true" onclick="ide.debug(&#39;continue&#39;)"> <span class="glyphicon glyphicon-play" aria-hidden="true" title="continue"></span> continue</button>
                    <button type="submit" id="debug_btn_next" class="btn btn-primary" disabled="true" onclick="ide.debug(&#39;next&#39;)"> <span class="glyphicon glyphicon-step-forward" aria-hidden="true" title="next/step over"></span> step over</button>
                    <button type="submit" id="debug_btn_step" class="btn btn-primary" disabled="true" onclick="ide.debug(&#39;step&#39;)"> <span class="glyphicon glyphicon-forward" aria-hidden="true" title="step into"></span> step into</button>
                    <button type="submit" id="debug_btn_finish" class="btn btn-primary" disabled="true" onclick="ide.debug(&#39;finish&#39;)"> <span class="glyphicon glyphicon-fast-forward" aria-hidden="true" title="finish/step out"></span> step out</button>
                    
                    <a class="btn btn-success" href="https://www.onlinegdb.com/blog/brief-guide-on-how-to-use-onlinegdb-debugger/" target="_blank"> <span class="glyphicon glyphicon-info-sign" aria-hidden="true" title="Help : How to use debugger?"></span> help</a>
                    
                    </span>
                <div class="col-sm-121 active-content" style="position: absolute;    top: 24px;    bottom: 0px;    left: 0px;    right: 0px;">
                <div id="terminal-container" class="col-sm-12"></div>
                </div>

            </div>
        </div>
    </div>

</div>
                        <!-- middle bottom end -->
                        </div>
                    </div>
                </div>
            </div>
            <div class="split-pane-divider" id="my-divider2" style="left: 100%;"><div class="split-pane-divider-inner"></div></div>
            <div class="split-pane-component" id="right-right-component" style="left: 100%;">                
                <!-- right component start -->
                <div class="col-sm-41" id="debug-pan" style="background-color:#bdbdbd">
                    <div class="panel-group">
  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" class="collapse-toggle" href="https://www.onlinegdb.com/#debug_window_call_stack">Call Stack</a>
      </h4>
    </div>
    <div id="debug_window_call_stack" class="collapse in">
        <div class="table-responsive"><div class="JCLRgrips" style="width: 155.4px;"><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip JCLRLastGrip" style="left: 1.40002px; height: 25px;"></div></div><table class="table table-bordered JPadding JColResizer" id="JColResizer1">
       <thead> <tr><th style="width: 33.3%;">#</th><th style="width: 33.3%;">Function</th><th style="width: 33.3%;">File:Line</th></tr></thead>
       <tbody></tbody>
       </table></div>
</div>
  </div>

  <div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" class="collapse-toggle" href="https://www.onlinegdb.com/#debug_window_local_variables">Local Variables</a>
      </h4>
    </div>
    <div id="debug_window_local_variables" class="collapse in">
        <div class="table-responsive"><div class="JCLRgrips" style="width: 111.4px;"><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip JCLRLastGrip" style="left: 1.40002px; height: 25px;"></div></div><table class="table table-bordered JPadding JColResizer" id="JColResizer2">
       <thead> <tr><th style="width: 50%;">Variable</th><th style="width: 50%;">Value</th></tr></thead>
       <tbody></tbody>
       </table></div>
</div>
</div>

<div class="panel panel-default panel-registers">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" class="collapse-toggle" href="https://www.onlinegdb.com/#debug_window_registers">Registers</a>
      </h4>
    </div>
    <div id="debug_window_registers" class="collapse in">
        <div class="table-responsive"><table class="table table-bordered">
       <thead> <tr><th>Register</th><th>Value</th></tr></thead>
       <tbody></tbody>
       </table></div>
</div>
</div>

<div class="panel panel-default panel-display-expression">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" class="collapse-toggle" href="https://www.onlinegdb.com/#debug_window_display_expression">Display Expressions</a>
      </h4>
    </div>
    <div id="debug_window_display_expression" class="collapse in">
    <div class="table-responsive">
        <div class="JCLRgrips" style="width: 146.4px;"><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip JCLRLastGrip" style="left: 1.40002px; height: 25px;"></div></div><table class="table table-bordered JPadding JColResizer" style="margin-bottom:0px" id="JColResizer0">
       <thead><tr><th style="width: 33.3%;">Expression</th><th style="width: 33.3%;">Value</th><th style="width: 33.3%;"></th></tr></thead>
       <tbody>
       </tbody>
       </table>
       <input id="input_watch_expr" class="col-sm-12" placeholder="Enter expression to watch">
    </div>
</div>
</div>

<div class="panel panel-default">
    <div class="panel-heading">
      <h4 class="panel-title">
        <a data-toggle="collapse" class="collapse-toggle" href="https://www.onlinegdb.com/#debug_window_breakpoints">Breakpoints and Watchpoints</a>
      </h4>
    </div>
    <div id="debug_window_breakpoints" class="collapse in">
        <div class="table-responsive"><div class="JCLRgrips" style="width: 138.4px;"><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip" style="left: 1.40002px; height: 25px;"><div class="JColResizer"></div></div><div class="JCLRgrip JCLRLastGrip" style="left: 1.40002px; height: 25px;"></div></div><table class="table table-bordered JPadding JColResizer" id="JColResizer3">
       <thead><tr><th style="width: 25%;"></th><th style="width: 25%;">#</th><th style="width: 25%;">Description</th><th style="width: 25%;"></th></tr></thead>
       <tbody></tbody>
       </table></div>
</div>
</div>

  </div>
</div> 
                <!-- right component end -->
            </div>
        </div>
        <div class="right-sidebar">
            <span id="right-sidebar-close" class="btn btn-info glyphicon glyphicon-menu-right"></span>
                

        </div>
    
    
    <script>
        
        $(document).ready(function() {
            $("#ide-split-pane").on('splitpaneresize', adjustDebugPanSize);
            $(window).on('resize', adjustDebugPanSize);

            Mousetrap.bind('f8', function() { trace_event('Key-F8'); $('#control-btn-debug').click(); return false;});
            Mousetrap.bind("f9", function() { trace_event('Key-F9'); $('#control-btn-run').click(); return false;});
            Mousetrap.bind(['command+s', 'ctrl+s'], function() { trace_event('Key-Ctrl+S'); $('#control-btn-save').click(); return false; });
            Mousetrap.bind(['command+b', 'ctrl+b'], function() { trace_event('Key-Ctrl+B'); $('#control-btn-beautify').click(); return false; });
            Mousetrap.bind(['command+m', 'ctrl+m'], function() { trace_event('Key-Ctrl+M'); $('#control-btn-newfile').click(); return false; });
        
            var editor = $("#multi_editor_container").editor();
            editor.setModeForLang($("#lang-select").val());

            

            
            
            

            editor.addEventListener('breakpoint_set', function (e) { 
                var bp = e.breakpoint;
                ide.setBreakpoint(bp);
            });
            editor.addEventListener('breakpoint_unset', function (e) { 
                var bp = e.breakpoint;
                ide.clearBreakpoint(bp);
            });
            $("#control-btn-newfile").on('click', function(){
                editor.new_editor();
                //track_event('control_menu', 'newfile');
            });

            $("#control-btn-upload").on('click', function(){
                ide.upload_file();
                //track_event('control_menu', 'upload');
            });
            $("#control-btn-save").on('click', function(){
                saveCode({show_dest_folder:true});
                //track_event('control_menu', 'save');
            });  

            ide.editor = editor;    
            //these guys can work after editor is initialized
            enable_btn('control-btn-',['save','share','beautify','download']);      
        });
        
        /*
        ace.require("ace/ext/language_tools");
        var editor = ace.edit("editor1");
        var editor2 = ace.edit("editor2");
        editor.getSession().setTabSize(4);
        editor.setFontSize('medium');
        editor.setTheme("ace/theme/idle_fingers");
        editor.getSession().setMode("ace/mode/c_cpp");
        // enable autocompletion and snippets
        editor.setOptions({
            enableBasicAutocompletion: true,
            enableSnippets: true,
            enableLiveAutocompletion: true
        });
        editor.on("guttermousedown", function(e){ 
           // if(!ide.gdbstarted) return;
            var Range = ace.require('ace/range').Range;

            var target = e.domEvent.target; 
            if (target.className.indexOf("ace_gutter-cell") == -1) 
                return; 

            if (e.clientX > 25 + target.getBoundingClientRect().left) 
                return; 

            var row = e.getDocumentPosition().row 

            if (target.className.indexOf("ace_breakpoint") == -1)
                ide.setBreakpoint(row+1, true);//e.editor.session.setBreakpoint(row)
            else
                ide.clearBreakpoint(row+1, true);//e.editor.session.clearBreakpoint(row)
            e.stop() 
        }); 
        
        editor.addBreakpoint = function(line, breaknumber) {
            if(!editor.breakpointList){
                editor.breakpointList = [];
            }
            editor.breakpointList[breaknumber] = line;
            console.log(editor.breakpointList);
        }
        */
        
        var project_uid = null;
        var project_snippet_type = null;
        
        
    </script>
    
    <script>
        /*_native.init("CK7DC2JE", {
          targetClass: 'native-js'
        });*/
        </script>
<script>
    function track_event(arg1, arg2){
        //if(typeof ga !== 'undefined' && ga) ga('send', 'event', arg1, arg2);
        if(gtag)
        gtag('event', arg2, {
        'event_category': arg1
        });
    }

    function is_mobile(){
        return $('#mobile_test_element').css('display')=='none';
    }
    (function () {
        if(no_ads) return;

        if(screen && screen.width > 1200)
        {
          if(typeof _bsa !== 'undefined' && _bsa) {
            _bsa.init('responsive', 'CW7D627U', 'placement:wwwonlinegdbcom', { target: "#responsive_wwwonlinegdbcom" });
          }
        } else {
            
            ('BSA No Sidebar AdUnit', 'bsa_no_sidebar_adunit');
        }

        if (typeof _bsa !== 'undefined' && _bsa) {
            /*_bsa.init('custom', 'CK7DC2JE', 'placement:onlinegdbcom', {
                target: '#native-inline',
                template: '<a href="##link##" target="_blank" rel="noopener" rel="nofollow"><div class="sponsor">Sponsor</div><div class="native-description">##company## — ##description##</div></a>'
            });*/
            
            if(!is_mobile()) {

            _bsa.init('custom', 'CK7I6K7M', 'placement:onlinegdbcom-top', {
                target: '#native-inline',
                template: `<a href="##link##" target="_blank" rel="noopener" rel="nofollow"><div class="sponsor">Sponsor</div><div class="native-description">##company## — ##description##</div></a>
                <a href="/upgrade-premium" target="_blank" type="button" class="close" data-dismiss="modal" style="color: white;opacity: 1;" title="Remove Ads">×</a>`
            });
            }
            if(!do_fallback_ad_check) {
            _bsa.init('custom', 'CK7DC2JE', 'placement:onlinegdbcom-banner', {
                target: '#native-banner',
                template: `
            <a href="##link##" class="native-banner" style="background: linear-gradient(-30deg, ##backgroundColor##E5, ##backgroundColor##E5 45%, ##backgroundColor## 45%) #fff;">
              <div class="native-main">
                <img class="native-img" img src="##logo##">
                <div class="native-details" style="color: ##textColor##">
                  <span class="native-company">Sponsored by ##company##</span>
                  <span class="native-desc">##description##</span>
                </div>
                <span class="native-cta" style="color: ##ctaTextColor##; background-color: ##ctaBackgroundColor##;">##callToAction##</span>
              </div>
            </a>
            <a class="native-via" href="##adViaLink##">Ads via BuySellAds</a>
            `
            });
            }
        } else {
            track_event('BSA Undefined', 'bsa_undefined');
        }
    })();
</script>

<script>
    /*
    _bsa.init('custom', 'CVADC53U', 'placement:onlinegdbcom', {
        target: '.native-js',
        template: '<a href="##link##" target="_blank" rel="noopener" rel="nofollow"><span class="sponsor">Sponsor</span> ##company## — ##description##</a>'
    });*/

    function fallback_native_top(){
        return false;
        
        var html = '<a href="/contribute" target="_blank" rel="noopener"><div class="sponsor">Contribute</div><div class="native-description">Submit a programming article and win assured Amazon gift voucher!!</div></a>';
        $("#native-inline").html(html);
        return true;
        
    }
    function process_no_bottom_adunit() {
        return;
        if(!do_fallback_ad_check) return;
        var script = document.createElement("script"); 
        script.src = "https://cdn.thisiswaldo.com/static/js/5831.js"; 
        script.type = "text/javascript"; 
        document.getElementById("ad_unit_bottom_wrapper").appendChild(script);
    }
    function display_optimize_ad(){
        // When initializing the web page
        window.optimize = window.optimize || { queue: [] };
        // ...later
        
        //return;
        
        
        var random_boolean = Math.random() < 0.5;
        var video_ad = random_boolean;
        console.log("optimize:", window.optimize, video_ad);
        var ad_tag_id = "bsa-zone_1724084929448-7_123456_1";
        if(video_ad){
            track_event('BSA Push Video Sidebar AdUnit', 'bsa_push_video_sidebar_adunit');
            ad_tag_id = "bsa-zone_1734365016557-4_123456";
        } else {
            track_event('BSA Push Banner Sidebar AdUnit', 'bsa_push_banner_sidebar_adunit');
            ad_tag_id = "bsa-zone_1724084929448-7_123456_1";
        }

        $("#sidebar_adunit_wrapper").append(`<div id="${ad_tag_id}"></div>`)
        window.optimize.queue.push(() => {
            window.optimize.push(ad_tag_id);
        });

    }
    function BSANativeCallback(data) {
        if (data.segment=="placement:onlinegdbcom-top") {
            if((data.ads && data.ads.length > 0) || fallback_native_top())  {
                $("#editor-container").css('top', '37px');
                $("#editor_1").css('top', '57px');
                $("#title-bar").css('padding-top', '5px');
                $("#title-bar").css('padding-bottom', '5px');
                track_event('BSA Top AdUnit', 'bsa_top_adunit');
            } else {
                track_event('BSA No Top AdUnit', 'bsa_no_top_adunit');
            }
        } else if (data.segment=="placement:onlinegdbcom-banner") {
            if(data.ads && data.ads.length > 0) {
                track_event('BSA Bottom AdUnit', 'bsa_bottom_adunit');
            } else {
                process_no_bottom_adunit();
                track_event('BSA No Bottom AdUnit', 'bsa_no_bottom_adunit');
            }
        } else if(data.segment == "placement:wwwonlinegdbcom"){
            if((data.ads && data.ads.length > 0))  {
                show_sidebar_adunit_wrapper();
                $("#responsive_wwwonlinegdbcom").click(function(){
                    console.log("ad is clicked");
                    set_clarity_tag("sidebar_ad_clicked","true");
                });
                track_event('BSA Sidebar AdUnit', 'bsa_sidebar_adunit');
            } else {
                console.log("trying alternative ad");//
                show_sidebar_adunit_wrapper();
                display_optimize_ad();
                //hide_sidebar_adunit_wrapper();
                track_event('BSA No Sidebar AdUnit', 'bsa_no_sidebar_adunit');
            }
        }else{
            track_event('BSA No AdUnit', 'bsa_no_adunit');
        }
    }
</script>

    

<!--<script src="//control.mockingfish.com/js/011503.js"></script>-->



    </div>
</div>
        </div>
    </div>
        </div>

    <!-- Runtime exceeds reason Modal -->
    <div id="runtimeModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Possible reasons for Runtime Exceed error</h4> </div>
                <div class="modal-body">
                    <p>
                    </p><ol>
                        <li>If your program is reading input from standard input and you forgot to provide input via stdin.</li>
                        <li>Your program contains infinite loop, which may never break.</li>
                        <li>Your program contains infinite recursive function calls.</li>
                        <li>May be your program is trying to process large data and it takes much time to process</li>
                    </ol>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">ok</button>
                </div>
            </div>
        </div>
    </div>
    <!-- generic modal -->
    <div id="genericModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close modal-btn-close" data-dismiss="modal">×</button>
                    <h4 class="modal-title"></h4> </div>
                <div class="modal-body">
                </div>
                <div class="modal-footer">
                    <button type="button" class="ok-btn btn btn-default" data-dismiss="modal">Ok</button>
                </div>
            </div>
        </div>
    </div>
    <!-- New Version Available Modal -->
    <div id="newVersionModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">New Version Available</h4> </div>
                <div class="modal-body">
                    <p>
                    New Version of OnlineGDB is available. Please save your data and refresh page to update.
                </p></div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">Ok</button>
                </div>
            </div>
        </div>
    </div>
    <!-- Console Output Modal -->
    <div id="consoleOutputModal" class="modal fade" role="dialog">
        <div class="modal-dialog" style="width:700px; height:90%">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Running Turbo C Project</h4> </div>
                <div class="modal-body">
                    <div class="dosbox-container">
                    <canvas id="jsdos">
                    </canvas>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Code Save Modal -->
    <div id="saveCodeModal" class="modal fade" role="dialog" style="display: none;">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Save Project</h4> </div>
                <div class="modal-body">
                    <div>
                        <form>
                        <div class="form-group">
                            <label for="name" class="name_label">Name of Project:</label>
                            <input type="text" class="form-control" id="project_name" value="">
                        </div>
                        
                        <div class="form-group destination_folder" style="display: none;">
                            <div class="input-group">
                                <span class="input-group-addon"><b>Destination Folder</b></span>
                                
                                <input type="text" class="form-control" id="project_dest_fname" value="My Projects" readonly="">
                                <input type="hidden" class="form-control" id="project_dest_fid" value="">
                                
                                <span class="input-group-addon"><button type="button" onclick="changeProjectDestinationFolder()">Change</button></span>
                            </div>                            
                        </div>

                        <button type="button" class="btn btn-default btn_save">Save</button>
                        <span class="error_message" style="color:red"></span>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Compile Flags Modal -->
    <div id="compilerFlagsModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close hide" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Extra Compiler Flags</h4> </div>
                <div class="modal-body">
                    <div>
                        <form>
                        <div class="form-group">
                            <label for="name" class="name_label"></label>
                            <input type="text" class="form-control" id="compiler_flags" placeholder="You can set extra compiler flags here. Leave this empty if you don&#39;t know about it." value="">
                        </div>
                        <button type="button" class="btn btn-default btn_save" data-dismiss="modal">Ok</button>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Delete file Modal -->
    <div id="deleteFileModal" class="modal fade" role="dialog" style="display: none;">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <center><h4 class="modal-title">Are you sure you want to delete file `<span id="delete_file_name">baremetalassignment.c</span>`?</h4> 
                    </center>
                    </div>
                <div class="modal-body">
                    <center>
                        <button type="button" class="btn btn-default btn-ok">Yes</button>
                        <button type="button" class="btn btn-default" data-dismiss="modal">No</button>
                    </center>
                </div>
            </div>
        </div>
    </div>
    <!-- generic confirm Modal -->
    <div id="confirmModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <center><h4 class="modal-title"></h4></center>
                    </div>
                <div class="modal-body">
                    <center>
                        <button type="button" class="btn btn-default btn-ok">Yes</button>
                        <button type="button" class="btn btn-default" data-dismiss="modal">No</button>
                    </center>
                </div>
            </div>
        </div>
    </div>
     <!-- New file Modal -->
    <div id="newFileModal" class="modal fade" role="dialog" style="display: none;">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">New File</h4> </div>
                <div class="modal-body">
                    <div>
                        <form>
                        <div class="form-group">
                            <label for="name">Name of new file:</label>
                            <input type="text" class="form-control" id="new_file_name" value="untitled">
                        </div>
                        <button type="button" class="btn btn-default btn-ok">ok</button>
                        <span class="error_message"></span>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Rename file Modal -->
    <div id="renameFileModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Rename File</h4> </div>
                <div class="modal-body">
                    <div>
                        <form>
                        <div class="form-group">
                            <label for="name">Name:</label>
                            <input type="text" class="form-control" id="edit_file_name" value="">
                        </div>
                        <button type="button" class="btn btn-default btn-ok">ok</button>
                        <button type="button" class="btn btn-default" data-dismiss="modal">cancel</button>
                        <span class="error_message"></span>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Code Share Modal -->
    <div id="shareCodeModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Share Link</h4> </div>
                <center class="msg">source code is copied to below link.</center>
                <div class="modal-body" style="text-align:center">
                    <p></p>
                </div>
            </div>
        </div>
    </div>
    <!-- Server disconnected Modal -->
    <div id="serverDisconnectedModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Lost connection to server</h4> </div>
                <div class="modal-body">
                    <p>Oops! Connection to server is lost. Please refresh the page to reconnect.</p>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">ok</button>
                </div>
            </div>
        </div>
    </div>
    <script type="text/html" id="datetimepicker_template">
        <input type="hidden" class="date_value" value=""/>
        <div class="form-group">
            <div class='input-group date datetimepicker_template'>
                <input type='text' class="form-control" readonly/>
                <span class="input-group-addon">
                    <span class="glyphicon glyphicon-calendar"></span>
                </span>
            </div>
        </div>
    </script>
    
    
    <!-- Debugging session stopped Modal -->
    <div id="myModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Debug session stopped</h4> </div>
                <div class="modal-body">
                    <p>Debug session is being stopped due to inactivity.</p>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">ok</button>
                </div>
            </div>
        </div>
    </div>
    <!-- Debugging session stopped Modal -->
    <div id="noDebugPythonModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <center>
                    <h4 class="modal-title">Debug mode for <span class="lang">python</span> program is not yet supported.</h4> 
                    </center>
                    </div>
                    
                <div class="modal-footer">
                    <center>
                    <button type="button" class="btn btn-default" data-dismiss="modal">ok</button>
                    </center>
                </div>
            </div>
        </div>
    </div>
    <!-- login form modal -->
    <div id="loginModal" class="modal fade" role="dialog" style="display: none;">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Please login to save snippet to your personal account</h4> </div>
                <div class="modal-body">
                    <div style="width:100%">
                    <div class="omb_login">
                        <h3 class="omb_authTitle">Login with
                            <!--or <a href="#" style="font-size:24px; color:#337ab7">Sign up</a></h3>-->
                            <div class="row omb_row-sm-offset-31 omb_socialButtons">
                                <div class="col-xs-4">
                                    <a href="https://www.onlinegdb.com/#" onclick="login(&#39;googleplus&#39;)" class="btn btn-lg btn-block omb_btn-google">
                                        <i class="fa fa-facebook visible-xs"></i>
                                        <span class="hidden-xs">Google+</span>
                                    </a>
                                </div>
                                <div class="col-xs-4">
                                    <a href="https://www.onlinegdb.com/#" onclick="login(&#39;facebook&#39;)" class="btn btn-lg btn-block omb_btn-facebook">
                                        <i class="fa fa-twitter visible-xs"></i>
                                        <span class="hidden-xs">Facebook</span>
                                    </a>
                                </div>
                                <div class="col-xs-4">
                                    <a href="https://www.onlinegdb.com/#" onclick="login(&#39;github&#39;)" class="btn btn-lg btn-block omb_btn-github">
                                        <i class="fa fa-google-plus visible-xs"></i>
                                        <span class="hidden-xs">Github</span>
                                    </a>
                                </div>
                            </div>
                    </h3></div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    
    <!-- Run session stopped Modal -->
    <div id="myModalRun" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Run Console session stopped</h4> </div>
                <div class="modal-body">
                    <p>Run Console is being stopped due to inactivity.</p>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">ok</button>
                </div>
            </div>
        </div>
    </div>
    <!-- Add University Modal -->
    <div class="modal fade" id="myModalAddUniversity" role="dialog">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
        <h4 class="modal-title" id="myModalLabel">Add School/University/Institute</h4>
      </div>
      <form method="post" action="https://www.onlinegdb.com/university">
      <div class="modal-body">
	   <div class="form-group">
		   <label for="university_name">School/University/Institute Name<span class="text-danger">*</span></label>
            <input type="text" class="form-control" name="university_name" id="university_name" placeholder="Enter university" required="">
          </div>
	  <div class="form-group">
		  <label for="state">State<span class="text-danger">*</span></label>
            <input type="text" class="form-control" name="state" id="state" placeholder="State" required="">
          </div>
	  <div class="form-group">
      	            <label for="country">Country<span class="text-danger">*</span></label>
		  <div class="btn-group bootstrap-select border rounded form-control h-50" style="width: 100%;"><button type="button" class="btn dropdown-toggle bs-placeholder btn-default" data-toggle="dropdown" role="button" title="Select Country"><span class="filter-option pull-left">Select Country</span>&nbsp;<span class="bs-caret"><span class="caret"></span></span></button><div class="dropdown-menu open" role="combobox"><div class="bs-searchbox"><input type="text" class="form-control" autocomplete="off" role="textbox" aria-label="Search"></div><ul class="dropdown-menu inner" role="listbox" aria-expanded="false"><li class="hidden is-hidden selected" data-original-index="0"><a tabindex="0" class="" data-tokens="null" role="option" aria-disabled="false" aria-selected="true"><span class="text">Select Country</span><span class="glyphicon glyphicon-ok check-mark"></span></a></li></ul></div><select class="selectpicker border rounded form-control h-50" name="country" data-width="100%" data-show-subtext="true" data-live-search="true" required="" tabindex="-98">
			  <option data-hidden="true" value="">Select Country</option>
			
                        </select></div>
	</div>
      </div>

      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        <button type="button" class="btn btn-success" onclick="addNewUniversity()">Submit</button>
      </div>
      </form>
    </div>
  </div>
</div>
    <!-- Editor Info Modal -->
    <div id="infoModal" class="modal fade" role="dialog">
        <div class="modal-dialog">
            <!-- Modal content-->
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Keyboard Shortcuts</h4> </div>
                <div class="modal-body"> <pre><b>IDE Shortcuts:</b>
New file : Ctrl-M
Run Code : F9
Debug Code : F8
Save Project : Ctrl-S
Beautify Code : Ctrl-B
Settings Menu : Ctrl-Shift-S
Info : Ctrl-I

<b>Editor Shortcuts:</b>
showSettingsMenu : Ctrl-,
goToNextError : Alt-E
goToPreviousError : Alt-Shift-E
selectall : Ctrl-A
gotoline : Ctrl-L
fold : Alt-L|Ctrl-F1
unfold : Alt-Shift-L|Ctrl-Shift-F1
toggleFoldWidget : F2
toggleParentFoldWidget : Alt-F2
foldOther : Alt-0
unfoldall : Alt-Shift-0
findnext : Ctrl-K
findprevious : Ctrl-Shift-K
selectOrFindNext : Alt-K
selectOrFindPrevious : Alt-Shift-K
find : Ctrl-F
overwrite : Insert
selecttostart : Ctrl-Shift-Home
gotostart : Ctrl-Home
selectup : Shift-Up
golineup : Up
selecttoend : Ctrl-Shift-End
gotoend : Ctrl-End
selectdown : Shift-Down
golinedown : Down
selectwordleft : Ctrl-Shift-Left
gotowordleft : Ctrl-Left
selecttolinestart : Alt-Shift-Left
gotolinestart : Alt-Left|Home
selectleft : Shift-Left
gotoleft : Left
selectwordright : Ctrl-Shift-Right
gotowordright : Ctrl-Right
selecttolineend : Alt-Shift-Right
gotolineend : Alt-Right|End
selectright : Shift-Right
gotoright : Right
selectpagedown : Shift-Pagedown
gotopagedown : Pagedown
selectpageup : Shift-Pageup
gotopageup : Pageup
scrollup : Ctrl-Up
scrolldown : Ctrl-Down
selectlinestart : Shift-Home
selectlineend : Shift-End
togglerecording : Ctrl-Alt-E
replaymacro : Ctrl-Shift-E
jumptomatching : Ctrl-P
selecttomatching : Ctrl-Shift-P
expandToMatching : Ctrl-Shift-M
removeline : Ctrl-D
duplicateSelection : Ctrl-Shift-D
sortlines : Ctrl-Alt-S
togglecomment : Ctrl-/
toggleBlockComment : Ctrl-Shift-/
modifyNumberUp : Ctrl-Shift-Up
modifyNumberDown : Ctrl-Shift-Down
replace : Ctrl-H
undo : Ctrl-Z
redo : Ctrl-Shift-Z|Ctrl-Y
copylinesup : Alt-Shift-Up
movelinesup : Alt-Up
copylinesdown : Alt-Shift-Down
movelinesdown : Alt-Down
del : Delete
backspace : Shift-Backspace|Backspace
cut_or_delete : Shift-Delete
removetolinestart : Alt-Backspace
removetolineend : Alt-Delete
removewordleft : Ctrl-Backspace
removewordright : Ctrl-Delete
outdent : Shift-Tab
indent : Tab
blockoutdent : Ctrl-[
blockindent : Ctrl-]
transposeletters : Ctrl-T
touppercase : Ctrl-U
tolowercase : Ctrl-Shift-U
expandtoline : Ctrl-Shift-L
addCursorAbove : Ctrl-Alt-Up
addCursorBelow : Ctrl-Alt-Down
addCursorAboveSkipCurrent : Ctrl-Alt-Shift-Up
addCursorBelowSkipCurrent : Ctrl-Alt-Shift-Down
selectMoreBefore : Ctrl-Alt-Left
selectMoreAfter : Ctrl-Alt-Right
selectNextBefore : Ctrl-Alt-Shift-Left
selectNextAfter : Ctrl-Alt-Shift-Right
splitIntoLines : Ctrl-Alt-L
alignCursors : Ctrl-Alt-A
findAll : Ctrl-Alt-K
showKeyboardShortcuts : Ctrl-Alt-H
          </pre> </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
                </div>
            </div>
        </div>
    </div>
    <script>
    
    var server_channel = 'IN';
    
    var isLoggedIn =  false;
    var isTinyide =  false; 
    var isStudentSubmission =  false ;

    function track_event(arg1, arg2, arg3){
        //if(ga) ga('send', 'event', arg1, arg2, arg3);
        if(gtag)
        gtag('event', arg2, {
        'event_category': arg1,
        'event_label': arg3
        });
    }
    var check_fallback_ad_timer = null;
    function repalce_fallback_ad(){
    
        track_event('Dynamic Fallback Ad', 'fallback_ad');
        var html = `<div id="carbonads">
        <span>
        <span class="carbon-wrap">
            <a target="_blank" href="https://shareasale.com/r.cfm?b=2183718&u=1574209&m=132199&urllink=&afftrack=" rel="nofollow">Learn Python with KodeKloud</a>
        </span>
        </span>
        </div>`;
        $("#ad_wrapper").html(html);
    
    }
    function check_fallback_ad_helper(){
        var ad_text = $("#ad_wrapper").text();
        //track_event('Check Fallback Ad', 'check_fallback_ad');


        //if(ad_text.indexOf("ads via")>-1){// ad is loaded
        if($("#carbonads").length == 1){ // ad is loaded

            if(ad_text.indexOf("Have fun taking surveys and get paid!")>-1){// fallback ad 

                repalce_fallback_ad();
            }
            clearInterval(check_fallback_ad_timer);
        }
    }
    function check_fallback_ad(){
        check_fallback_ad_timer = setInterval(check_fallback_ad_helper, 2000); // check every 2 seconds
    }
    function update_snippet_datetime(){
        
    }
    function render_ogdb_dates(){
        $( ".ogdb-local-date" ).each(function( index ) {
        var ogdb_date = $(this).attr('ogdb-local-date');
        if(ogdb_date!='')
            ogdb_date = new Date(ogdb_date).toLocaleString([], { hour12: true});
        else
            ogdb_date = "Invalid Date";
        $(this).text(ogdb_date);
        });
        $( ".ogdb-local-date-unix" ).each(function( index ) {
            var ogdb_date = $(this).attr('ogdb-local-date-unix');
            try {
                ogdb_date = Number(ogdb_date);
                ogdb_date = new Date(ogdb_date).toLocaleString([], { hour12: true});
            }catch(e){
                ogdb_date = "Invalid Date";
            }
            $(this).text(ogdb_date);
        });
        $(document).trigger("ogdb_local_date_updated");
    }
    $(document).ready(function() {
        $('div.split-pane').splitPane();
        if(do_fallback_ad_check)
            check_fallback_ad();
        update_snippet_datetime();

        render_ogdb_dates();
    });
    </script>
    
    <!-- Global site tag (gtag.js) - Google Analytics -->
     <!--
<script async src="https://www.googletagmanager.com/gtag/js?id=G-6LBEGBJ3W0"></script>
-->
<script>
  window.dataLayer = window.dataLayer || [];
  
  <!--

  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  
  gtag('config', 'G-6LBEGBJ3W0');

  
  -->
</script>





<!--Start of Tawk.to Script-->

<!--End of Tawk.to Script-->

<!--<script async defer src="https://tools.luckyorange.com/core/lo.js?site-id=ebc1d580"></script>-->

<!--
   <script src="https://cdn.ravenjs.com/3.14.2/raven.min.js" crossorigin="anonymous"></script>
    <script>Raven.config('https://33e437c2b49247e2995f75c8bde618e1@sentry.io/164141').install();</script>
-->

<script type="text/javascript">
    $(document).ready(function () {
        if(is_mobile())
            fold_left_bar();

        
    });
</script>
<!-- Google Tag Manager (noscript) -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-NT5F6VL"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) -->
<script>(function(){function c(){var b=a.contentDocument||a.contentWindow.document;if(b){var d=b.createElement('script');d.innerHTML="window.__CF$cv$params={r:'96f0ff0b5e443e2e',t:'MTc1NTE4MDIxMy4wMDAwMDA='};var a=document.createElement('script');a.nonce='';a.src='/cdn-cgi/challenge-platform/scripts/jsd/main.js';document.getElementsByTagName('head')[0].appendChild(a);";b.getElementsByTagName('head')[0].appendChild(d)}}if(document.body){var a=document.createElement('iframe');a.height=1;a.width=1;a.style.position='absolute';a.style.top=0;a.style.left=0;a.style.border='none';a.style.visibility='hidden';document.body.appendChild(a);if('loading'!==document.readyState)c();else if(window.addEventListener)document.addEventListener('DOMContentLoaded',c);else{var e=document.onreadystatechange||function(){};document.onreadystatechange=function(b){e(b);'loading'!==document.readyState&&(document.onreadystatechange=e,c())}}}})();</script><iframe height="1" width="1" style="position: absolute; top: 0px; left: 0px; border: none; visibility: hidden;" src="./baremetalasssignment_files/saved_resource.html"></iframe>


<script type="text/javascript" id="" charset="">(function(a,e,b,f,g,c,d){a[b]=a[b]||function(){(a[b].q=a[b].q||[]).push(arguments)};c=e.createElement(f);c.async=1;c.src="https://www.clarity.ms/tag/"+g;d=e.getElementsByTagName(f)[0];d.parentNode.insertBefore(c,d)})(window,document,"clarity","script","ew6y4c1gqd");</script><iframe marginwidth="0" marginheight="0" scrolling="no" frameborder="0" id="1674fb0e09a2f1" width="0" height="0" src="./baremetalasssignment_files/saved_resource(3).html" name="__pb_locator__" style="display: none; height: 0px; width: 0px; border: 0px;"></iframe><img src="./baremetalasssignment_files/px.gif" style="display: none !important; width: 1px !important; height: 1px !important;"><img src="./baremetalasssignment_files/favicon.ico" style="display: none !important; width: 1px !important; height: 1px !important;"><img src="./baremetalasssignment_files/px(1).gif" style="display: none !important; width: 1px !important; height: 1px !important;"><iframe name="googlefcPresent" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;" src="./baremetalasssignment_files/saved_resource(4).html"></iframe><iframe name="__tcfapiLocator" src="./baremetalasssignment_files/saved_resource(5).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe name="googlefcInactive" src="./baremetalasssignment_files/saved_resource(6).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe name="googlefcLoaded" src="./baremetalasssignment_files/saved_resource(7).html" style="display: none; width: 0px; height: 0px; border: none; z-index: -1000; left: -1000px; top: -1000px;"></iframe><iframe src="./baremetalasssignment_files/aframe.html" width="0" height="0" style="display: none;"></iframe><div class=" ace_editor ace_autocomplete ace_dark ace-idle-fingers" style="font-size: medium; top: 512px; left: 717.466px; height: 176px; display: none;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; font-size: 1px; top: 0px; left: -100px;"></textarea><div class="ace_gutter" aria-hidden="true" style="display: none; left: 0px; width: 42px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 0px; left: 0px; width: 42px;"><div class="ace_gutter-cell " style="height: 22px; top: 0px;">1<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 22px;">2<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 44px;">3<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 66px;">4<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 88px;">5<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 110px;">6<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 132px;">7<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 154px;">8<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 22px; top: 176px;">9<span style="display: none;"></span></div></div></div><div class="ace_scroller" style="line-height: 22px; left: 0px; right: 15px; bottom: 0px;"><div class="ace_content" style="cursor: default; top: 0px; left: 0px; width: 283px; height: 220px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 708px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 22px; top: 0px; left: 0px; right: 0px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line ace_selected" style="height: 22px; top: 0px;"><span class="ace_completion-highlight">n</span><span class="ace_">-</span><span class="ace_completion-meta">local</span></div><div class="ace_line" style="height: 22px; top: 22px;"><span class="ace_completion-highlight">n</span><span class="ace_">ext</span><span class="ace_completion-meta">local</span></div><div class="ace_line" style="height: 22px; top: 44px;"><span class="ace_completion-highlight">N</span><span class="ace_">ULL</span><span class="ace_completion-meta">local</span></div><div class="ace_line" style="height: 22px; top: 66px;"><span class="ace_completion-highlight">n</span><span class="ace_">b</span><span class="ace_completion-meta">local</span></div><div class="ace_line" style="height: 22px; top: 88px;"><span class="ace_completion-highlight">n</span><span class="ace_">b-</span><span class="ace_completion-meta">local</span></div><div class="ace_line" style="height: 22px; top: 110px;"><span class="ace_completion-highlight">N</span><span class="ace_">ext</span><span class="ace_completion-meta">local</span></div><div class="ace_line" style="height: 22px; top: 132px;"><span class="ace_completion-highlight">n</span><span class="ace_">amespace</span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" style="height: 22px; top: 154px;"><span class="ace_completion-highlight">n</span><span class="ace_">ew</span><span class="ace_completion-meta">keyword</span></div><div class="ace_line" style="height: 22px; top: 176px;"><span class="ace_completion-highlight">n</span><span class="ace_">oexcept</span><span class="ace_completion-meta">keyword</span></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors" style="opacity: 0;"><div class="ace_cursor" style="display: block; top: 0px; left: 4px; width: 9px; height: 22px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 1408px;">&nbsp;</div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 0px; right: 15px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 298px;">&nbsp;</div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; font-optical-sizing: inherit; font-size-adjust: inherit; font-kerning: inherit; font-feature-settings: inherit; font-variation-settings: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div></body><iframe name="goog_topics_frame" src="./baremetalasssignment_files/topics_frame.html" style="display: none;"></iframe><iframe sandbox="allow-scripts allow-same-origin" id="137e8a50219b00508" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/checksync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="138d3529bae309758" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/ixmatch.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="1393a7840031f88f" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/saved_resource(8).html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="14044c8255bc514d8" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/saved_resource(9).html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="141100854dd701d98" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/sync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="142ebccad7e19ed38" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/user_sync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="14342cef77214e61" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/syncframe.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="144ed673288ca7828" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/async_usersync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="145aa16fe0b7ed838" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/CookieSync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="146125624aa4f977" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/saved_resource(10).html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="147de3bc4ccf6849" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/iFrameSyncer.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="148b48eaef1c65128" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/isync.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="14918fdf2e4915b58" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/pd.html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="15056ef7bf538e3b8" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/sync(1).html">
    </iframe><iframe sandbox="allow-scripts allow-same-origin" id="15167b39e534260b8" frameborder="0" allowtransparency="true" marginheight="0" marginwidth="0" width="0" hspace="0" vspace="0" height="0" style="height:0px;width:0px;display:none;" scrolling="no" src="./baremetalasssignment_files/saved_resource(11).html">
    </iframe></html>