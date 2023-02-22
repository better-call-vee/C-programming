#include<stdio.h>
int main () {
    int n, th, odd, out;
    scanf("%d %d", &n, &th);
    if (n%2==0) odd=n/2;
    else odd=n/2+1;
    if (th<=odd) out=2*odd-1;
    else {
        out=(th-odd)*2;
    }
    printf("%d", out);
    return 0;
}

//you can enter two inputs. one is the number range. other one is the th number
//you have to find. suppose, 10. so the numbers will be arranged as odds first then
//even. 1,3,5,7,9,2,4,6,8,10. so if the th input is 7, the answer will be 4.
