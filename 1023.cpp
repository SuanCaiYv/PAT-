#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> A;
    int i;
    for (i = 0; i < 10; ++ i) {
        int v;
        cin >> v;
        A.push_back(v);
    }
    for (i = 1; i < 10; ++ i) {
        if (A[i] != 0) break;
    }
    cout << i;
    -- A[i];
    vector<int>::iterator p;
    int k = 0;
    for (p = A.begin(); p != A.end(); ++ p) {
        for (i = 0; i < *p; ++ i) cout << k;
        ++ k;
    }
    return 0;
}

