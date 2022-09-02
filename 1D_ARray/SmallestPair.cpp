#include<iostream>
#include<climits>

using namespace std;

int main()
{
    cout<<" Started \n";
    const int N=200;
    int num[200];

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    int minS=INT_MAX;

    for(int j=1;j<n;j++)
    {
        for(int i=0;i<j;i++)
        {
            if((num[i]+num[j]+j-i)<minS)
            minS=(num[i]+num[j]+j-i);
        }
    }
    cout<<minS<<endl;
}