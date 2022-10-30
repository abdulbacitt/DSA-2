#include<iostream>
using namespace std;
int main()
{
    cout<<" Started \n";
    const int N=3;
    int mat[N][N]{0};
    int rs[2*N+2]{0},cs[2*N+2]{0},dr[2*N+2]{0},dc[2*N+2]{0};
    int cnt=0;
    for(int i=0;i<N;i++)
    {   
        rs[i]=cnt;
        dc[i]=1;
        cnt++;
        }
      cnt=0;
    for(int i=N;i<2*N;i++)
    {   
        cs[i]=cnt;
        dr[i]=1;
        cnt++;
        } 
    cs[2*N+1]=N-1;
    dr[2*N]=1;
    dc[2*N]=1;
    dr[2*N+1]=1;
    dc[2*N+1]=-1;
    int r,c,turn=0;
    int steps=0;
    for(int k=0;k<N*N+1;k++)
    {
        if(steps==N*N)
        cout<<" a tie";
        cin>>r>>c;
        r--,c--;
        if(r>=N||c>=N||mat[r][c]!=0)
        {
            cout<<" Invalid input \n";
            turn=!turn;
        
        }
        mat[r][c]=turn+1;
        for(int l=0;l<N;l++)
        {
            for(int m=0;m<N;m++)
            {
                if(mat[l][m]==1)
                cout<<"x\t";
                else if(mat[l][m]==2)
                cout<<"o\t";
                else
                cout<<".\t";
            }
            cout<<"\n";
            
        }
        for(int i=0;i<2*N+2;i++)
        {
            int rt=rs[i], ct=cs[i];
            
            if(mat[rs[i]][cs[i]]==mat[r][c])
            {
                bool check=true;
                
                for(int s=0;s<N;s++)
                {
                    
                    if(mat[r][c]!=mat[rt][ct])
                    {
                        check=false;
                        break;
                    }
                    rt+=dr[i];
                    ct+=dc[i];
                    
                }
                cout<<" \n ";
                if(check)
                {
                    if(mat[r][c]==1)
                    cout<<" x won ";
                    else
                    cout<<" o won ";
                    return 0;
                }
            }
            
        }
        steps++;
        turn=!turn;
    }
    return 0;

}