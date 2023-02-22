#include<stdio.h>
int main ()
{
    int a, b, c;
    a = -7;
    c = ~a; //~(tilt)=-(x+1) . it's the NOT of bitwise operator.
    //works maintaining two's compliment.
    printf("%d \n", c);

    ///BIT SHIFTING : left shift
    ///every bit's value will move by 1 to the left
    int d;
    d = c<<1; // so, in binary, this will be the double of c.
    // suppose decimal 6's binary is 110. left shift will be 100. and it's the
    // double of 110
    //for right shift, 110 will be 011.
    printf("%d \n", d);
    d = d<<2;// it will be multiplied by 4
    printf("%d \n", d);

    d = d<<32;
    printf("%d \n", d);

    ///RIGHT shift
    d = d>>1;
    printf("%d \n", d);
    return 0;
}


//MSB AND LSB
//                   1 0 1 1
//weight of the bits:8,4,2,1

//most left 1 is the msb(most,8) and right most 1 is the lsb(least significant bit)
//imagine you have a bank account. you have $7962.00 in your account.
//so, if I reduce the 7 to 3, you would be pretty angry with this. you have
//lost 4k bucks! but if I reduce the 2 to 0, you wouldn't be that much angry.
