#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";

    const int I=100,J=100;

    int arr[I][J];
    int r,c;

    cin>>r>>c;

    for(int i=0;i<r;++i)      
        {
            for(int j=0;j<c;++j)
       {
        cin>>arr[i][j];
       }
       cout<<" \n";
        }

       int max=arr[0][0];
       int max_i=0,max_j=0;
       
    for(int i=0;i<r;i++)
       for(int j=0;j<c;++j)
       {
        if(max<arr[i][j])
        {
            max=arr[i][j];
            max_i=i;
            max_j=j;
        }
       }

       cout<<" \n "<<max<<endl;
       

      
}