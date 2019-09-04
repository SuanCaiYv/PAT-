#include<stdio.h>
int main ()
{
    int n, c1;
    c1 = 0;
    scanf ("%d", &n);
    while (n != 1) {
        if ( n % 2 == 0) {
            n = n / 2;
            c1 ++;
        }
        else {
            n = (3 * n + 1) / 2;
            c1 ++;
        }
    }
    printf ("%d", c1);
    return 0;
}