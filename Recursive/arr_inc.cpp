#include<iostream>
using namespace std;
void arr_inc(int arr[],int len)
{
    arr[len-1]=arr[len-1]+len-1;
    if(len==1)
    return;

    arr_inc(arr,len-1);
}
int main()
{
    cout<<" Started \n";

    int arr[]{1,2,5,3};
    arr_inc(arr,4);

    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}