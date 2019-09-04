#include <stdio.h>
int main ()
{
    char s[5][62];
    gets(s[0]);
    gets(s[1]);
    gets(s[2]);
    gets(s[3]);
    int i, j, flag, flag1, v;
    flag = 0, flag1 = 0;
    char *ss[8] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    for (i = 0; ; i ++) {
        if (flag == 0 && s[0][i] == s[0][i] && s[0][i] <= 'G' && s[0][i] >= 'A') {
            flag = 1;
            printf("%s ", ss[s[0][i]-65]);
            continue;
        }
        if (flag && s[0][i] == s[1][i]) {
            if (s[0][i] <= '9' && s[0][i] >= '0') {
                v = s[0][i]-48;
                if (v < 10) printf ("0%d:", v);
                else printf ("%d:", v);
                flag1 = 1;
            }
            if (s[0][i] <= 'N' && s[0][i] >= 'A') {
                v = s[0][i]-55;
                if (v < 10) printf("0%d:", v);
                else printf("%d:", v);
                flag1 = 1;
            }
        }
        if (flag1) break;
    }
    for (i = 0; ; i ++) {
        if (s[2][i] == s[3][i] && (s[2][i] <= 'z' && s[2][i] >= 'a' || s[2][i] >= 'A' && s[2][i] <= 'Z')) {
            v = i;
            if (v < 10) printf("0%d", v);
            else printf("%d", v);
            break;
        }
    }
    return 0;
}

