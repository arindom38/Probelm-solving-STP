/* Divide a large integer with an divisor using string*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
        string num1,res,c;
        int divisor,tmp = 0,indx = 0;
        cin>>num1>>divisor;

        if(divisor > num1.size())
            cout<<"0";

        tmp = num1[indx] - '0';

        while(tmp < divisor)
            tmp = tmp *10 + (num1[++indx] - '0');

        while(num1.size() > indx)
        {
            res += (tmp/divisor)+'0'; //adding the division value to string as type casting int to string

            tmp = (tmp%divisor)*10 +  num1[++indx] - '0'; //taking next number after each division
        }
        cout<<res;
        return 0;
}
