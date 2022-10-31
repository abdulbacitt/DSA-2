#include<iostream>
using namespace std;
int pref_sum(int arr[],int len,int sum_nos)
{
    if(sum_nos==1)
    return arr[0];
    return ( arr[0]+pref_sum(arr+1,len,sum_nos-1));
}
int main()
{
    cout<<" Started \n";

    int aray[]{1,2,4,3,4};
    cout<<pref_sum(aray,5,3);
    return 0;
}