//Pangram means a sentence/ string which contains all 26 letters
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
int main()
{
    string s;
    getline(cin,s);
    bool present[MAX_CHAR] = {false}; // set all values to false in present

    for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            present[s[i] -'a'] = true; // set the present character visited
        else if(s[i] >= 'A' && s[i] <= 'Z')
            present[s[i]- 'A'] = true;
        else
            continue;
    }
    string res;
    for(int i = 0 ; i < MAX_CHAR; i++)
    {
        if(present[i] == false)
            res += (char)(i + 'a');
    }

cout <<res;


    return 0;
}
