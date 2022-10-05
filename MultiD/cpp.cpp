#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello, Georgie"<<endl;

    int dr[]{1,-1,0,0,-1,1,-1,1};
    int dc[]{0,0,-1,1,-1,-1,1,1};

    int i=5,j=3;
    char arr[]{'d','u','l','r','t','b','R','L'};

    for(int k=0;k<8;++k)
    {
        int nd=i+dr[k];
        int md=j+dc[k];
        cout<< arr[k]<<" : "<<nd<<" "<<md<<endl;
    }
}