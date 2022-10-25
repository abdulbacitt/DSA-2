#include<iostream>
using namespace std;
void Is_Pal(int arr[],int size)
{
    bool is_pal=true;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=arr[size-1-i])
        {
            is_pal=false;
            break;
        }
        

    }
    if(is_pal)
        {
            cout<<" Yes";

        }
        else
        cout<<" No";
}


int main()
{
    int arr[199];
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    Is_Pal(arr,N);
    return 0;
}

