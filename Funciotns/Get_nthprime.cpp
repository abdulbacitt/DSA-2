#include<iostream>
using namespace std;
bool is_prime(int n)
{
    bool primeset=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            primeset=false;
            break;
        }
    }
    return primeset;
}
int nth_prime(int n)
{
    int count=1;
    for(int i=1;i<=n;)
    {
        count++;
        bool itisprime=is_prime(count);
      
        

        if(itisprime)
        {
            i++;
        }
        
    }
    return count;
}
int main()
{
    cout<<" Started \n";
    int n;
    cin>>n;
    cout<<" The" <<n<<"th prime is "<<nth_prime(n)<<endl;
}