#include<iostream>
using namespace std;
void right_max(int arr[], int len, int s_p=0)
{
    if(s_p==len-1)
    return;

    right_max(arr,len,s_p+1);
    arr[s_p]=max(arr[s_p],arr[s_p+1]);

}
int main()
{
    cout<<" started \n";

    int aray[]{ 1,2,6,5,3,2};
    right_max(aray,6);

    for(int i=0;i<6;i++)
    {
        cout<<aray[i];
    }
    return 0;
}