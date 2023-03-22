#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a function-like macro
 * ABS(x) that compiles the absolute value of num x.
 * Header file guarded to avoid double inclusion.
 */

#define ABS(x) ((x) < 0 ? (-(x)) : (x))

#endif
