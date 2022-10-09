#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";

    int arr[4][5]{1,5,3,6,4,
                  15,8,2,6,8,
                  78,54,95,41,8};

    int q,i,j,r,c;
    int count=0;

    cin>>q;

    while(q--)
    {
        cin>>i>>j>>r>>c;

        for(int I=i;I<i+r;I++)
        {
            for(int J=j;J<j+c;J++)
            {
                bool is_prime=true;
                int num=arr[I][J];
                for(int k=2;k<num;k++)
                {
                    if(num%k==0)
                    {
                        is_prime=false; 
                        break;
                    }
                }
                if(is_prime)
                count++;
            }
        }


    }
    cout<<count<<endl;
}