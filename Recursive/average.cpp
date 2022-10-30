#include<iostream>
using namespace std;
double average(int arr[],int len)
{
    static double divr=len;
    if(len==1)
    return (double)arr[0]/divr;

    return ((double)(arr[len-1]/divr)+average(arr,len-1));
    
}
int main()
{
    cout<<" Started \n";
    int aray[]{1,2,4,5,2};
    cout<<average(aray,5);
}