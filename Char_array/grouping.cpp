#include<iostream>
using namespace std;

int main()
{
    cout<<" Started \n";

    string s;
    cin>>s;

    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        cout<<s[i];
        else
        {
            cout<<" ";
            cout<<s[i];

        }
    }
    return 0;
}