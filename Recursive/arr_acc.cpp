#include<iostream>
using namespace std;
void arr_acc(int arr[], int len)
{
    if(len==1)
    return;

    for(int i=0;i<len-1;i++)
    {
        arr[len-1]+=arr[i];
    }
    arr_acc(arr,len-1);
}
int main()
{
    cout<<" Started \n";
    int arr[]{1,2,3,4};
    arr_acc(arr,4);
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}