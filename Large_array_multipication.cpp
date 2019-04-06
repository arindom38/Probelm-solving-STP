#include<bits/stdc++.h>
using namespace std;
void multiply(string s1, string s2)
{
   int n1,n2,carry = 0,sum = 0,inp;
   n1 = s1.size();
    n2 = s2.size();

    if(n1== 0 || n2 == 0)
        cout<<"0"<<endl;

     vector<int> result(n1+n2,0);
     int ith_1=0,jth_1 = 0;
      for(int i = n1-1; i >=0 ; i--)
      {
          int in1,in2;
          in1 = s1[i] - '0';
          carry = 0;
          jth_1 = 0;
          for(int j = n2-1; j >=0 ; j--)
          {
              in2 = s2[j] - '0';
            //cout<<in1<<"  "<<in2<<endl;
              sum = in1 * in2 + result[ith_1 + jth_1] + carry;
              inp = sum%10;
              carry = sum /10;

              result[ith_1 + jth_1] = inp;

              jth_1++;
          }

          if(carry > 0)
            result[ith_1 + jth_1] += carry;

          ith_1++;
      }
  int k = 0,i = n1+n2-1;
  while(result[i] == 0) // removing 0 at the begin
  {
      k++;
      i--;
  }

    for(int i = result.size()-k-1; i>=0; i--) //print value in reverse order (right order)
        cout<<result[i];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if((s1.at(0) == '-' || s2.at(0) == '-') && s1.at(0) != '-' || s2.at(0) != '-') // handling case for minus (+ - ) = - or (- +) = -
        cout<<"-";

  if(s1.at(0) == '-' && s2.at(0) != '-')
    s1 = s1.substr(1);
  else if(s2.at(0) == '-' && s1.at(0) != '-')
    s2 = s2.substr(1);
  else if(s1.at(0) == '-' && s2.at(0) == '-')
  {
    s1 = s1.substr(1);
    s2 = s2.substr(1);
  }
  else
  {
    s1 = s1;
    s2 = s2;
  }

    multiply(s1,s2);


return 0;

}
