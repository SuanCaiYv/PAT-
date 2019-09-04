#include <stdio.h>
int main ()
{
    int m, n, i, j, cnt, v;
    scanf ("%d", &n);
    int a[101];
    int b[101];
    int c[101];
    for (i = 0; i < n; i ++) {
        scanf ("%d", &a[i]);
        b[i] = a[i];
    }
    for (i = 0; i < n; i ++) {
        while (a[i] != 1) {
            if (a[i]%2 == 0) {
                a[i] = a[i]/2;
                for (j = 0; j < n; j ++) {
                    if (a[i] == b[j]) b[j] = 0;
                }
            }
            else {
                a[i] = (3*a[i]+1)/2;
                for (j = 0; j < n; j ++) {
                    if (a[i] == b[j]) b[j] = 0;
                }
            }
        }
    }
    for (i = 0; i < n; i ++) if (b[i] != 0) {
            c[cnt] = b[i];
            cnt ++;
        }
    for (i = cnt-1; i > 0; i --) for (j = i; j < cnt; j ++) if (c[j-1] < c[j]) {
                m = c[j];
                c[j] = c[j-1];
                c[j-1] = m;
            }
    for (i = 0; i < cnt-1; i ++) printf ("%d ", c[i]);
    printf ("%d", c[cnt-1]);
    return 0;
}
