#include <iostream>
#include <string>
using namespace std;//1 5 / 2 5 / 3 5 /
void Solve(string str)
{
    long long cnt = 0, cnt1 = 0, result = 0;
    int i, j, k, n;
    n = str.size();
    for (i = 0; i < n; ++ i) if (str[i] == 'T') ++ cnt;
    for (k = 0; k < n; ++ k) {
        if (str[k] == 'P') ++ cnt1;
        if (str[k] == 'T') -- cnt;
        if (str[k] == 'A') result = (result + (cnt * cnt1) % 1000000007) % 1000000007;
    }
    cout << result;
}
int main()
{
    string str;
    getline(cin, str);
    Solve(str);
    return 0;
}
