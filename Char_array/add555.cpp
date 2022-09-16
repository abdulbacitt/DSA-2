#include<iostream>
using namespace std;
int main ()
{
    cout<<" started\n";

    string num,s={"5555"};
    
    cin>>num;

    int carr=0;

    for(int i=num.size()-1;i>=num.size()-4;--i)
    {
        int res=0;

        res=('5'-'0')+(num[i]-'0');

        num[i]=(res%10+carr)+'0';
        carr=res/10;

        

        if(i==num.size()-4&&carr!=0)
        num[i+1]=carr+num[i+1];
    }
    
    cout<<num<<endl;



}