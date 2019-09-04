#include <stdio.h>
int main ()
{
	int n, i, j, ss, cnt, flag;
	cnt = 0;
	scanf ("%d", &n);
	getchar ();
	int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char s[n][20];
	char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
	for (i = 0; i < n; i ++) gets (s[i]);
	for (i = 0; i < n; i ++) {
		ss = 0;
		flag = 0;
		for (j = 0; j < 17; j ++) {
			if (s[i][j] > '9' || s[i][j] < '0') {
				puts (s[i]);
				cnt ++;
				flag = 1;
				break;
			}
			ss += a[j]*(s[i][j]-48);
		}
		if (flag) continue;
		ss = ss%11;
		if (m[ss] != s[i][17]) {
			cnt ++;
			puts (s[i]);
		}
	}
	if (cnt == 0) printf ("All passed");
	return 0;
}