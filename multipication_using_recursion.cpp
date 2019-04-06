#include<bits/stdc++.h>
using namespace std;
int res;
int multiply(int x, int y)
{

    if(x == 0 || y == 0)
        return res;
    if(y > 0)
    res = x + multiply(x,y-1);

    if(y < 0) // for handling negative numbers
        res = -multiply(x,-y);
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<multiply(a,b);

    return 0;
}
