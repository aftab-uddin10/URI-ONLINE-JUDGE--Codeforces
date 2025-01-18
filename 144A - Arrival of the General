/***
            Bismillahir Rahmanir Rahim
            Start with the name of Allah, who created you!!!
            Author : MD Aftab Uddin Bhuiyan
            Department of CSE, Dhaka international University, Bangladesh.
***/

#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    int min1(a), max1(a), min2(0), max2(0);
    for (int i = 1; i < n; ++i)
    {
        cin >> a;
        if (a > max1)
        {
            max1 = a;
            max2 = i;
        }
        if (a <= min1)
        {
            min1 = a;
            min2 = i;
        }
    }
    cout << max2 + (n - 1 - min2) - (min2 < max2 ? 1 : 0) << endl;
    return 0;
}
