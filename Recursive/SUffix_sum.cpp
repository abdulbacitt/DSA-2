#include<iostream>
using namespace std;
int suf_sum(int arr[],int len,int sum_nos)
{
    if(sum_nos==1)
    return arr[len-1];
    return (arr[len-1]+suf_sum(arr,len-1,sum_nos-1));
}
int main()
{
    cout<<" Started \n";
    int arr[]{1,3,4,334,23,2};
    cout<<suf_sum(arr,6,3);
    return 0;
}