#include<iostream>
using namespace std;
int my_pow(int value,int p)
{
    if(p==1)
    {
        return value;
    }
    return value*my_pow(value,p-1);
}
int main()
{
    cout<<" Started \n";
    int n;
    cin>>n;
    int pow3;
    pow3=my_pow(n,3);
    cout<<pow3<<endl;
    return 0;
}