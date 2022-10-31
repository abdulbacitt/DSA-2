#include<iostream>
using namespace std;
bool is_pal(int arr[],int sp, int len)
{
    bool sub_check;
    sub_check=(arr[sp]==arr[len-1]);
    if(sp==len-1)
    return sub_check;
    if(sp>len-1)
    return true;
    return ( sub_check&&is_pal(arr,sp+1,len-1));
}
int main()
{
    cout<<" Started \n";

    int aray[]{1,2,3,1};
    cout<<is_pal(aray,0,4);
    return 0;
}