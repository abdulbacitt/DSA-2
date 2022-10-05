#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";
    int n;
    cin>>n;

    int num[901];
     
    for(int i=0;i<n;i++)
    {
        cin>>num[i];

    }

    int freq_arr[501]={0};
    

    for(int i=0;i<n;i++)
    {
        freq_arr[num[i]]++;
    }
    for(int i=0;i<501;i++)
    {
        if(freq_arr[i]!=0)
        {
            while(freq_arr[i])
            {
                cout<<i;
                freq_arr[i]--;

            }
        }
    }
    return 0;

    

}