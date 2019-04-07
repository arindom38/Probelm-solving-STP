//Time complexity O(n*log(log(n)))
//The Sieve of Eratosthenes looks good, but consider
//the situation when n is large, the Simple Sieve faces following issues.
//An array of size Θ(n) may not fit in memory
//The simple Sieve is not cache friendly even for slightly bigger n.
//The algorithm traverses the array without locality of reference
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool position[n+1];
    memset(position, true,sizeof(position));

    for(int p = 2 ; p*p<=n ; p++ )
    {

        if(position[p] == true)
        {

            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for(int i = p*p; i <=n ;i += p )
                position[i] = false;

        }
    }

    for(int i = 2 ; i <=n; i++)
    {
        if(position[i] == true)
            cout<<i<<" ";
    }


    return 0;
}
