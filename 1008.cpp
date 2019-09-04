#include <stdio.h>
int main ()
{
	int m, n, i, j, v;
	scanf ("%d%d", &n, &m);
	m = m%n;
	v = n-m;
	int a[2*n];
	for (i = 0; i < n; i ++) scanf ("%d", &a[i]);
	for (i = 0; i < n; i ++) {
		a[i+n] = a[i];
	}
	for (i = v; i < v+n-1; i ++) printf ("%d ", a[i]);
	printf ("%d", a[n+v-1]);
	return 0; 
} 
