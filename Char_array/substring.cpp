#include<iostream>
using namespace std;
int main()
{
    cout<<" Strated \n";

    string s1,s2;

    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[0])
        {
            int j=i+1;
            int k=1;
            for(;j<i+s2.size();j++)
            {
                
                if(s1[j]!=s2[k])
                break;
                k++;

            }
            if(j==i+s2.size())
            cout<<" Yes";
            else
            cout<<" No";
        }
    }
}