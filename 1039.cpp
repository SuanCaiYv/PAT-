#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string str1, str2;
    int i, j, m, n;
    int cnt1 = 0, cnt2 = 0;
    map<char, int> M;
    map<char, int> P;
    bool flag = true;
    cin >> str1 >> str2;
    cnt1 = m = str1.size(), n = str2.size();
    for (i = 0; i < m; ++ i) ++ M[str1[i]];
    for (i = 0; i < n; ++ i) ++ P[str2[i]];
    for (auto p = P.begin(); p != P.end(); ++ p) {
        if (M[p->first] >= P[p->first]) {
            cnt1 -= P[p->first];
        }
        else {
            flag = false;
            cnt2 += P[p->first]-M[p->first];
        }
    }
    if (flag) cout << "Yes " << cnt1;
    else cout << "No " << cnt2;
    return 0;
}
