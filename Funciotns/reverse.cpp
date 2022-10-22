#include<iostream>
using namespace std;
string rev_str( const string &str)
{
    string ret=str;
    string rev_str;
    int st=0, en=str.size()-1;
    while(st<en)
    {
        char temp=ret[st];
        ret[st]=ret[en];
        ret[en]=temp;
        st++,en--;
    }
    return ret;
    
}
int main()
{
    cout<<" Started \n";

    string brr;
    cin>>brr;
    cout<<" Reverse will be : "<<rev_str(brr)<<endl;
    return 0;
}