#include<iostream>
using namespace std;
int main()
{
    cout<<" start3ed \n";
    string s;
    cin>>s;

    int sum=s[0]-'0';
    cout<<sum<<" "<<s.size()<<endl;

    for(int i=1;i<s.size();i++)
    {
        sum=sum*10+(s[i]-'0');
    }
    cout<<sum<<" "<<3*sum<<endl;
}