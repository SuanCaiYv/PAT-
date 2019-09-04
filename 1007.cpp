#include <stdio.h>
int f (int n)
{
	int i, m;
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (n == 3) return 1;
	for (i = 2; i*i <= n; i ++) {
		if (n%i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main ()
{
	int i, n, cnt;
	cnt = 0;
	scanf ("%d", &n);
	for (i = 5; i <= n; i +=2) {
		if (f (i-2)) if (f (i)) cnt ++;
	}
	printf ("%d", cnt);
	return 0;
}
