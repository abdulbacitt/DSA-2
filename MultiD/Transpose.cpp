#include<iostream>
using namespace std;
int main()
{
    const int rows=3, cols=4;

    int arr[rows][cols]{ 1,3, 2, 4
                        ,5,6, 15,7
                        ,7,21,19,8  };
    int trr[cols][rows];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            trr[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<trr[i][j]<<"\t";
        }
        cout<<"\n";
    }  
    return 0;                  
}