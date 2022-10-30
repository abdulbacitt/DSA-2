#include<iostream>
using namespace std;
int sum(int arr[],int len)
{
    if(len==1)
    return arr[0];

    return ( arr[len-1]+sum(arr,len-1));
}
int main()
{
    cout<<" started \n";
    int aray[]{1,3,4,2,3,5};
    
    cout<<sum(aray,6);

}