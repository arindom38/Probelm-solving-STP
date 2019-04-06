//given a paragraph print all the lines separately;
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;
ifstream f("data.in");
ofstream o("data.out");
int main()
{
        int lines = 0,pos = 0;

        string s,sr;

        while(getline(f,sr))
        {
            s += sr;
        }
        cout<<s<<endl;
        for(int i = 0 ; i <s.length(); i++)
        {

            if(s[i] == '.')
            {
                lines++;
              o<<'.'<<endl; //full-stop is replaced by new line so it is again inserted
            }
            else
                o<<s[i]; //print until a full-stop encountered

        }

        cout<<lines<<endl;
        return 0;
}
