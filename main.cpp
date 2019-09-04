#include <string.h>
#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin >> s;



        size_t p = s.find_first_not_of("A");

        if ((p == string::npos) || (s[p] != 'P'))

        {

            cout << "NO" << endl;
            continue;

        }



        size_t t = s.find_first_not_of("A", p + 1);

        if ((t == string::npos) || (t == p + 1) || (s[t] != 'T'))

        {

            cout << "NO" << endl;

            continue;

        }



        size_t n = s.find_first_not_of("A", t + 1);

        if (n != string::npos)

        {

            cout << "NO" << endl;

            continue;

        }



        if ((s.length() - t - 1) == p * (t - p - 1))

        {

            cout << "YES" << endl;

        }

        else

        {

            cout << "NO" << endl;

        }

    }



    return 0;

}