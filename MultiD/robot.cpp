#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";

    int R,C, dir, steps;
    cin>>R>>C;

    int ni[]{-1,0,1,0};
    int nj[]{0,1,0,-1};

    int k;
    cin>>k;
    int Ni=0,Nj=0;
    while(k--)
    {
        cin>>dir>>steps;

        dir--;
        int res1=Ni,res2=Nj;
         Ni=Ni+ni[dir];
         Nj=Nj+nj[dir];
       
        for(int k=1;k<steps;k++)
        {
            Ni+=ni[dir];
            Nj+=nj[dir];
        }
        if(Ni<0||Ni>=R||Nj<0||Nj>=C)
        {
            Ni=res1;
            Nj=res2;
            
        }
        
        cout<<Ni<<" "<<Nj<<endl;
    }
}