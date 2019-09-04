#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int i, n, j, A[105], B[105];
    bool p = true;
    cin >> n;
    for (i = 0; i < n; ++ i) cin >> A[i];
    for (i = 0; i < n; ++ i) cin >> B[i];
    for (i = 0; i < n-1 && B[i] <= B[i+1]; ++ i);
    for (j = i+1; j < n && A[j] == B[j]; ++ j);
    if (j == n) {
        cout << "Insertion Sort\n";
        sort(A, A+i+2);
    }
    else {
        cout << "Merge Sort\n";
        int k = 1;
        while (p) {
            for (j=0; A[j] == B[j] && j<n; j++);
                if (j == n)
                    p = false;
            k *= 2;
            for (i = 0; i < n/k; ++ i)
                sort (A+i*k, A+(i+1)*k);
            sort (A+n/k*k, A+n);
        }
    }
    cout << A[0];
    for (i = 1; i < n; ++ i) cout << ' ' << A[i];
    return 0;
}
