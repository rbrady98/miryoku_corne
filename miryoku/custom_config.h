// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


/*remove the mouse layer, replace with symbol layer*/
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MEDIA  5
#define U_NUM    6
#define U_SYM    7
#define U_FUN    8

#define U_MOUSE U_SYM

/*use pascal getreur symbol layer
* ../ -> ?
* :: -> _
* ? -> ;
*/
#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
&kp SQT,           &kp LT,      &kp GT,     &kp DQT,      &kp DOT,              &kp AMPS,     &kp UNDER,      &kp LBKT,       &kp RBKT,       &kp PRCNT,      \
&kp EXCL,          &kp MINUS,   &kp PLUS,   &kp EQUAL,    &kp HASH,             &kp PIPE,     &kp COLON,      &kp LPAR,       &kp RPAR,       &kp SEMI,       \
&kp CARET,         &kp FSLH,    &kp STAR,   &kp BSLH,     &kp QMARK,            &kp TILDE,    &kp DLLR,       &kp LBRC,       &kp RBRC,       &kp AT,         \
U_NP,              U_NP,        U_NA,       U_NA,         U_NA,                 U_NA,         U_NA,           U_NA,           U_NP,           U_NP
