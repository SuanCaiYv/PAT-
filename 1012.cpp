#include <stdio.h>
int main ()
{
    int flag, n, i, j, a1, a2, a3, v, cnt, m, flag1, flag2;
    double ave, a4;
    a1 = 0, a2 = 0, a3 = 0, a4 = 0, j = 0, flag = 1, cnt ++, flag1 = 0, flag2 = 0, cnt = 0;
    scanf ("%d", &n);
    int a[n];
    for (i = 0; i < n; i ++) {
        scanf ("%d", &v);
        if (v%5 == 0 && v%2 == 0) {
            flag1 = 1;
            a1 += v;
        }
        if (v%5 == 1) {
            a2 += v*flag;
            flag = -flag;
            flag2 = 1;
        }
        if (v%5 == 2) a3 ++;
        if (v%5 == 3) {
            cnt ++;
            a4 += v;
        }
        if (v%5 == 4) {
            a[j] = v;
            j ++;
        }
    }
    m = j;
    v = a[0];
    for (i = 0; i < m; i ++) if (a[i] > v) v = a[i];
    if (flag1) printf ("%d ", a1);
    else printf ("N ");
    if (flag2) printf ("%d ", a2);
    else printf ("N ");
    if (a3) printf ("%d ", a3);
    else printf ("N ");
    if (cnt) {
        ave = a4/cnt;
        printf ("%.1lf ", ave);
    }
    else printf ("N ");
    if (j) printf ("%d", v);
    else printf ("N");
    return 0;
}

