#include <stdio.h>
int main ()
{
	int i, j, cnt, m, n;
	char s[81];
	char c;
	int a[81];
	c = ' ';
	cnt = 0;
	a[0] = -1;
	i = 1;
	while ((c = getchar ()) != '\n') {
		if (c == ' ') {
			a[i] = cnt;
			i ++;
		}
		s[cnt] = c;
		cnt ++;
	}
	s[cnt] = '\0';
	a[i] = cnt;
	m = i+1;
	n = cnt;
	//for (i = 0; i < m; i ++) printf ("%d ", a[i]);
	for (i = m-1; i >= 2; i --) {
		for (j = a[i-1]+1; j < a[i]; j ++) printf ("%c", s[j]);
		printf (" ");
	}
	for (j = 0; j < a[1]; j ++) printf ("%c", s[j]);
	return 0;
}
