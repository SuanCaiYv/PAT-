#include <stdio.h>
int main ()
{
	int n, i, j, k, m, x, y, z;
	scanf ("%d", &n);
	x = 0;
	y = 0;
	z = 0;
	if (n < 10) z = n;
	else if (n < 100) {
		z = n%10;
		y = n/10;
	}
	else if (n < 1000) {
		z = n%10;
		y = (n/10)%10;
		x = n/100;
	}
	for (i = 1; i <= x; i ++) printf ("B");
	for (j = 1; j <= y; j ++) printf ("S");
	for (k = 1; k <= z; k ++) printf ("%d", k);
	return 0;
}
