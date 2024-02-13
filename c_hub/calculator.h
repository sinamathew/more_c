#ifndef CAlCULATOR_H
#define CALCULATOR_H


/* HEADER FILES */
#include <stdio.h>
#include <stdarg.h>


/* DEFINITIONS */
#define IS_INT(x) (sizeof(x) == sizeof(int));
#define PI 3.142


/* PROTOTYPES */
int add(int num , ...);
int sub(int big_num, int num);
int mul(int num, ...);
float div(float num, float den) 
int pow(int num, int index);
int fib(int num);
float log(int num, int base);
float sin(int num);
float tan(int num);
float cos(int num);
float area(char type);
float isin(int num);
float icos(int num);
float itan(int num);
float sqrt(int num);
float cbrt(int num);
float root(int num, int rot);

#endif /*CALCULATOR_H*/
