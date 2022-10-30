#include<iostream>
#include<algorithm>
using namespace std;
int arr_max(int arr[],int len)
{if(len==1)
return arr[0];
int var=arr[len-1];
int sub_res=arr_max(arr,len-1);
int max=var;
if(sub_res>max)
max=sub_res;
return max;
}
int main()
{
  cout<<" Started \n";

  int aray[]{1,5,3,4,10,1,5,3,42,4,23,452,234};
  cout<<arr_max(aray,13);
  return 0;
}