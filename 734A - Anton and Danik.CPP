/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include <iostream>
using namespace std;

int main ()
{
    int n,i,a,d;
    char A;

    while (cin >> n)
    {
        a = 0;
        d = 0;

        for (i=1; i<=n; i++)
        {
            cin >> A;

            if (A == 'A')
                a = a + 1;
            else
                d = d + 1;
        }

        if (a > d)
            cout << "Anton" << endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }

    return 0;
}
