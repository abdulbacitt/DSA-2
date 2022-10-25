#include<iostream>
using namespace std;
void set_powers(int arr[], int len=5, int m=2)
{
    arr[0]=1;
    for(int i=1;i<len;i++)
    {
        arr[i]=m*arr[i-1];
        
    }
    return;
}
int main()
{
    cout<<" Started \n";

    const int N=100;
    int arr[N];
    set_powers(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" \t "<<endl;
    }
    return 0;

}