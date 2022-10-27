#include<iostream>
using namespace std;
int len_3pp(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n%2==0)
    {
        return 1+len_3pp(n/2);
    }
    else
    return 1+len_3pp(3*n+1);
}
int main()
{
    cout<<" Started \n";

    int n;
    cin>>n;

    int len;
    len=len_3pp(n);
    cout<<len;
}