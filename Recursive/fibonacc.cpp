#include<iostream>
using namespace std;
int fib_ncc(int n)
{
    if(n==1||n==2)
    return 1;

    return (fib_ncc(n-1)+fib_ncc(n-2));

}
int main()
{
    cout<<" Started \n";

    int n=6;
    cout<<fib_ncc(n);
    return 0;
}