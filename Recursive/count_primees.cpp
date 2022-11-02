#include<iostream>
using namespace std;
bool is_prime(int num, int curr_tst_no=3)
{
    if(num==2)
    return true;
    if(num%2==0)
    return false;

    if(num==curr_tst_no)
    return true;
     
    if(num%curr_tst_no==0)
    return false;

    return ( is_prime(num, curr_tst_no+1)); 
}
int count_primes(int start, int end)
{
    if(start>end)
    return 0;

    int result=count_primes(start+1,end);
    if(is_prime(start))
    result+=1;

    return result;
}
int main()
{
    cout<<" Started \n";
    int start=10,end=5000000;
    cout<<count_primes(start,end);
    return 0;

}