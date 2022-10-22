#include<iostream>
using namespace std;
string rev_str( const string &str)
{
    
    char rev_str[100];
    cout<<str.size()<<endl;
    for(int i=0;i<str.size();i++)
    {
        rev_str[i]=str[str.size()-1-i];
    }
    cout<<" The last element of reversed array will be : "<<rev_str[str.size()]<<endl;
    return rev_str;
}
int main()
{
    cout<<" Started \n";

    string brr;
    cin>>brr;
    cout<<" Reverse will be : "<<rev_str(brr)<<endl;
    return 0;
}