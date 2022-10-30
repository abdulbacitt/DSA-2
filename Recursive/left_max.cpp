#include<iostream>
using namespace std;
int max_arr(int arr[], int len)
{
    int max=arr[0];
    for(int i=1;i<len;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;

}
void left_max(int arr[],int len)
{
    if(len==1)
    return ;
    arr[len-1]=max(arr[len-1],max_arr(arr,len));
    left_max(arr,len-1);
}
int main()
{
    cout<<" Started \n";
    int arr[]{1,0,-1,3,2,0,5,1};
    left_max(arr,8);
    
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}