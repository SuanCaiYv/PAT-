#include <stdio.h>
int main ()
{
	int n, i;
	scanf ("%d", &n);
	long long a[n];
	long long b[n];
	long long c[n];
	int p[n];
	for (i = 0; i < n; i ++) 
	{
		scanf ("%ld %ld %ld", &a[i], &b[i], &c[i]);
		if (a[i]+b[i] > c[i]) p[i] = 1;
		else p[i] = 0;
	}
	for (i = 0; i < n; i ++)
	{
		if (p[i] == 1) printf ("Case #%d: true\n", i+1);
		else printf ("Case #%d: false\n", i+1);
	}
	return 0;
}
