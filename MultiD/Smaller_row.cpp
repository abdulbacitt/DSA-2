#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";

    int arr[3][5]{1,5,2,9,17,2,3,8,6,18,11,12,4,10,19};
    

    for(int i=0;i<=3;i++)
    {
        int r1,r2;
        cin>>r1>>r2;
        int j=0;
        for(;j<4;j++)
        {
            if(arr[r1-1][j]>arr[r2-1][j])
            {
                break;
            }
        }
        if(j==4)
        {
            cout<<" YES\n";
        }
        else
        cout<<" NO \n";
    }
    return 0;
}