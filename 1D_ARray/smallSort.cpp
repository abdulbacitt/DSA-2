#include<iostream>
using namespace std;

int main()
{
    cout<<" started \n";
    int num[9]={2,3,5,1,1,6,4,7,8};

    for(int i=0;i<9;i++)
    {
        num[i];
        for(int j=i;j<9;j++)
        {
            if(num[j]<num[i])
            {
            int temp;
            temp=num[j];
            num[j]=num[i];
            num[i]=num[j];
            }
        }
    }
    cout<<" Started \n";
    for(int i=0;i<9;i++)
    {
        cout<<num[i]<<" ";
    }
}