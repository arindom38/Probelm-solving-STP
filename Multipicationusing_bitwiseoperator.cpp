/*using Russian peasant algorithm with bitwise operator */
// x << n is equal to x * 2^n
// x >> n is equal to x  / 2^n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0 ,a,b;

    cin>>a>>b;

    while(b > 0)
    {
        if(b & 1) // if b is odd same as (b%2 != 0)
            res = res + a;

        a = a<<1; // double the value of a
        b = b >> 1; //halve the value of b
    }

    cout << res<<endl;

    return 0;
}
