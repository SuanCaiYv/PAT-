#include <stdio.h>
struct student {
    char name[11];
    char number[11];
    int score;
};
int main ()
{
    int m, n, i, j, v;
    scanf ("%d", &n);
    getchar ();
    struct student test[n];
    for (i = 0; i < n; i ++) {
        j = 0;
        while ((test[i].name[j] = getchar ()) != ' ') j ++;
        test[i].name[j] = '\0';
        //puts (test[i].name);
        j = 0;
        while ((test[i].number[j] = getchar ()) != ' ') j ++;
        test[i].number[j] = '\0';
        //puts (test[i].number);
        scanf ("%d", &test[i].score);
        //printf ("%d\n", test[i].score);
        getchar ();
    }
    //printf ("\n");
    v = test[0].score;
    for (i = 0; i < n; i ++) if (test[i].score > v) v = test[i].score;
    for (i = 0; i < n; i ++) if (test[i].score == v) printf ("%s %s\n", test[i].name, test[i].number);
    v = test[0].score;
    for (i = 0; i < n; i ++) if (test[i].score < v) v = test[i].score;
    for (i = 0; i < n; i ++) if (test[i].score == v) printf ("%s %s", test[i].name, test[i].number);
    return 0;
}