/***
 digit std lib
***/
#ifndef DIGIT_H_INCLUDED
#include "bool.h"
#define DIGIT_H_INCLUDED

/***
    check digit is repeat ? true means repeat
***/
bool dig_is_repeat(int nums);

/***
    return digits of digit
***/
int dig_get_digits(int nums);

/***
    reverse the arr
***/
void dig_reverse_arr(int *arr, int len);

/***
    print the arr
***/
void dig_print_arr(int *a,int size);

#endif // DIGIT_H_INCLUDED
