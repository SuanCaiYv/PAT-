#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string s;
    int v, n, i, j, m, sum;
    cin >> s >> v;
    n = s.size();
    if (n == 1) {
        m = (s[0]-48);
        cout << m/v << ' ' << m%v;
        return 0;
    }
    char ss[n+1];
    j = 0, m = 0;
    for (i = 0; i < n; i ++) {
        sum = 10*m+s[i]-48;
        if (sum/v == 0 && s[i] >= 48+v) {
            sum = 10*sum+s[i+1]-48;
            i ++;
        }
        m = sum%v;
        ss[j] = sum/v+48;
        j ++;
    }
    i = 0;
    if (ss[0] == 48 && j > 1) i = 1;
    for (i; i < j; i ++) {
        cout << ss[i];
    }
cout << ' ' << m;
    return 0;
}
//123456789050987654321 7
//1763668415014193474 3
//17636684150141093474 3
//17636684150141093474 3

