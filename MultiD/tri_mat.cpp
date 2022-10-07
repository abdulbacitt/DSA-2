#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";

    int arr[3][3]{8,16,9,3,15,27,14,25,29 };

    int su=0,sl=0;

    int start=0;

    for(int i=0;i<3;i++)
    {
        for(int j=start;j<3;j++)
        {
            su+=arr[i][j];
        }
        start++;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sl+=arr[i][j];
        }
    }
    cout<<" Upper triangle sum : "<<su<<" Lower triangle sum : "<<sl<<endl;
}