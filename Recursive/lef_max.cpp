#include<iostream>
using namespace std;
void lef_max(int arr[], int len)
{
    if(len==1)
    return;
    lef_max(arr,len-1);
    arr[len-1]=max(arr[len-1],arr[len-2]);
}
int main()
{
    cout<<" Started \n";

    int aray[]{2,3,4,3,5,1,9,8,10};
    lef_max( aray , 9);
    for(int i=0;i<9;i++)
    {
        cout<<aray[i]<<" ";
    }
    return 0;
}