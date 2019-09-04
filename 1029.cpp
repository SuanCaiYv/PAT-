#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<int> A;
    vector<int> B;
    vector<int> C;
    vector<int>::iterator p;
    string s;
    char c, cc;
    int i, n, x, k, xx;
    bool flag;
    getline(cin, s);
    n = s.size();
    i = 0;
    cc = s[i];
    for (++ i; i < n; ++ i) {
        if (s[i] == '.') break;
        A.push_back(s[i]-48);
    }
    k = 0;
    for (++ i; i < n; ++ i) {
        if (s[i] == 'E') break;
        B.push_back(s[i]-48);
        ++ k;
    }
    c = s[++ i];
    x = 0;
    for (++ i; i < n; ++ i) x = 10*x+s[i]-48;
    xx = x;
    if (k <= x) flag = true;
    else flag = false;

    if (c == '-') {
        for (int j = 0; j < x-1; ++ j) {
            C.push_back(0);
        }
        p = A.begin();
        while (p != A.end()) {
            C.push_back(*p);
            ++ p;
        }
        p = B.begin();
        while (p != B.end()) {
            C.push_back(*p);
            ++ p;
        }
        if (cc == '-') cout << '-';
        cout << "0.";
        p = C.begin();
        while (p != C.end()) {
            cout << *p;
            ++ p;
        }
    }
    else {
        p = A.begin();
        while (p != A.end()) {
            C.push_back(*p);
            ++ p;
        }
        p = B.begin();
        while (p != B.end()) {
            C.push_back(*p);
            ++ p;
            -- x;
        }
        for (int j = 0; j < x; ++ j) {
            C.push_back(0);
        }#include <iostream>
#include <string>
#define N 81
using namespace std;
int main ()
{
    string s1, s2;
    char s[81];
    int i, j, k, n;
    getline(cin, s1);
    getline(cin, s2);
    for (i = 0; i < s1.size(); i ++) if (islower(s1[i])) s1[i] = toupper(s1[i]);
    for (i = 0; i < s2.size(); i ++) if (islower(s2[i])) s2[i] = toupper(s2[i]);
    k = 0;
    for (i = 0; i < s1.size(); i ++) {
        for (j = 0; j < s2.size(); j ++) {
            if (s1[i] == s2[j]) break;
        }
        if (j == s2.size()) {
            s[k] = s1[i];
            k ++;
        }
    }
    int hash[200] = {0};
    for (i = 0; i < k; i ++) {
        if(!hash[s[i]]) cout << s[i];
        hash[s[i]] = 1;
    }
}

        if (flag) {
            if (cc == '-' ) cout << '-';
            p = C.begin();
            while (p != C.end()) {
                cout << *p;
                ++ p;
            }
        }
        else {
            int j;
            if (cc == '-') cout << '-';
            for (p = C.begin(), j = 0; j < xx+1; ++ j, ++ p) {
                cout << *p;
            }
            cout << '.';
            for (p; p != C.end(); ++ p) {
                cout << *p;
            }
        }
    }

    return 0;
}
