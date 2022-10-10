#include<iostream>
using namespace std;
int main()
{
    cout<<" Started\n";
    int R,C,D;
    cin>>D>>R>>C;

    int q;
    cin>>q;

    if(q==1)
    {
        int x,y,z;

        cin>>x>>y>>z;
        cout<<" 1D index will be : "<<x*R*C+y*C+z;
    }
    else
    {
        int idx;
        cin>>idx;
        cout<<"depth: "<<idx/(R*C)<<endl<<"row : "<<(idx%(R*C))/C
        <<endl<<" column: "<<(idx%(R*C))%C;
    }
}