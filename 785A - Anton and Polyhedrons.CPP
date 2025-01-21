/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : MD Aftab uddin bhuiyan
            Department of CSE, dhaka international University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;
int main (void)
{
    int n,sum;
    string s;

    while (cin >> n)
    {
        sum = 0;

        while (n--)
        {
            cin >> s;

            if (s == "Tetrahedron")
                sum += 4;
            else if (s == "Cube")
                sum += 6;
            else if (s == "Octahedron")
                sum += 8;
            else if (s == "Dodecahedron")
                sum += 12;
            else if (s == "Icosahedron")
                sum += 20;
        }

        cout << sum << endl;
    }

    return 0;
}
