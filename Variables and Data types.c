#include<stdio.h>
int main () {
    int a = 27;
    double b = 12.545634223;
    unsigned int d = 9;
    printf("Integer value of a is %d\n", a);
    printf("Octal value of a is %o\n", a);
    printf("Hexa value of a is %x\n", a);
    printf("Unsigned value d = %u\n", d);
    printf("Upto 4 digits double value is %0.4lf", b); //precision
}


//int and unsigned int are two distinct integer types. (int can also be referred to as
//signed int, or just signed; unsigned int can also be referred to as unsigned.)
//
//As the names imply, int is a signed integer type, and unsigned int is an unsigned integer
//type. That means that int is able to represent negative values, and unsigned int can
//represent only non-negative values.
//
//The C language imposes some requirements on the ranges of these types.
//The range of int must be at least -32767 .. +32767, and the range of unsigned int must be
//at least 0 .. 65535. This implies that both types must be at least 16 bits.
//They're 32 bits on many systems, or even 64 bits on some. int typically has an extra negative
//value due to the two's-complement representation used by most modern systems.
//
//Perhaps the most important difference is the behavior of signed vs. unsigned arithmetic.
//For signed int, overflow has undefined behavior. For unsigned int, there is no overflow;
//any operation that yields a value outside the range of the type wraps around, so for example UINT_MAX + 1U == 0U.
//
//Any integer type, either signed or unsigned, models a subrange of the infinite set of
//mathematical integers. As long as you're working with values within the range of a type,
//everything works. When you approach the lower or upper bound of a type, you encounter a discontinuity,
//and you can get unexpected results. For signed integer types, the problems occur only for very large
//negative and positive values, exceeding INT_MIN and INT_MAX. For unsigned integer types, problems occur
//for very large positive values and at zero. This can be a source of bugs. For example, this is an infinite loop:
//
//for (unsigned int i = 10; i >= 0; i --) {
//    printf("%u\n", i);
//}
//because i is always greater than or equal to zero; that's the nature of unsigned types.
//(Inside the loop, when i is zero, i-- sets its value to UINT_MAX.)
