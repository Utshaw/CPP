#include <iostream>
#include <bits/stdc++.h>
#include "../utshaw.h"

using namespace std;

#define endl '\n'

int getGCD(int a, int b)
{

    int big, small;
    if (a == b)
        return b;

    if (a > b)
    {
        big = a;
        small = b;
    }
    else
    {
        big = b;
        small = a;
    }
    if (!(big % small))
        return small;

    while (1)
    {
        int diff = big - small;
        if (diff < small)
        {
            big = small;
            small = diff;
        }
        else if (diff == small)
        {
            return small;
        }
        else
        {
            big = diff;
        }

        if (!(big % small))
            return small;
    }
}

int main()
{

    cout << getGCD(9, 21) << endl;

    return 0;
}