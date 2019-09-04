#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include <cstdio>
using namespace std;
int main ()
{
    int i, n, j, m;
    char c;
    cin >> n >> c;
    m = (int)(n+1)/2;
    string s[m][n];
    for (i = 0; i < m; i ++) for (j = 0; j < n; j ++) s[i][j] = ' ';
    for (i = 0; i < n; i ++) {
        s[0][i] = c;
        s[m-1][i] = c;
    }
    for (i = 0; i < m; i ++) {
        s[i][0] = c;
        s[i][n-1] = c;
    }
    for (i = 0; i < m; i ++) {
        for (j = 0; j < n; j ++) cout << s[i][j];
        cout << endl;
    }
    return 0;
}
