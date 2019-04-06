//We have a number n. We need to find whether number n can be represented by the sum of two squares.
//Examples :
//Input  : n = 17
//Output : Yes
//4^2 + 1^2 = 17
//Input  : n = 169
//Output : Yes
//5^2 + 12^2 = 169

///Binary search approach O(sqrt(n)log n)
#include<bits/stdc++.h>
using namespace std;

bool Binarysearch(int left , int right , int x)
{
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;

        if(x == mid)
            return true;
        else if(x > mid)
            left = mid+1;
        else
            right = mid -1 ;
    }

    return false;
}

int main()
{
    int n,b,root;
    float a,tmp;
    bool flag = false;
    cin>>n;
    root = sqrt(n); //square root value of n
    //a^2 + b^2 = n so must be (a,b) <= sqrt (n)
    // a = sqrt(n - b^2) and 1<= b < sqrt(n)
    for(b = 1; b<root; b++)
    {
        a = sqrt(n - pow(b,2));  // a = sqrt(n - b^2)
        if(Binarysearch(1,root,a) && pow(a,2)+pow(b,2) == n)
        {
            flag = true;
            break;
        }
    }

    if(flag)
        cout<<"Find value : "<<a<<"^2 + "<<b<<"^2 = "<<n<<endl;
    else
        cout<<"Not found";



    return 0;

}
