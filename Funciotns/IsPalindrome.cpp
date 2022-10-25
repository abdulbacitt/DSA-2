#include<iostream>
using namespace std;
void Is_Pal(int arr[],int size)
{
    bool is_pal=true;
    
    int st=0,en=size-1;
    while(st<en)
    {
        if(arr[st]!=arr[en])
        {
            is_pal=false;
            break;
        }
        st++,en--;

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

