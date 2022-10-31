#include<iostream>
using namespace std;
void arr_acc(int arr[],int len)
{
    if(len==1)
    return;
   arr_acc(arr,len-1);
   arr[len-1]+=arr[len-2];
}
int main()
{
    cout<<"started \n";
    int aray[]{2,3,4,2,4};
    arr_acc(aray,5);
    for(int i=0;i<5;i++)
    {
        cout<<aray[i]<<" ";
    }
    return 0;
}