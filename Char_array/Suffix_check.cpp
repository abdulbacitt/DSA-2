#include<iostream>
using namespace std;
int main()
{
    cout<<" Started\n";

    string s1,s2;

    cin>>s1>>s2;

    int siz1=s1.size(),siz2=s2.size();

    int i=siz1-siz2;

    for(int j=0;i<siz1,j<siz2;i++,j++)
    {
        if(s1[i]!=s2[j])
        break;
    }
    if(i==siz1)
    {
        cout<<" Yaess";
    }
    else
    {
        cout<<" Noooooo";
    }
    return 0;
}