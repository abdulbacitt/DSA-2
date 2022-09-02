#include<iostream>
using namespace std;
int main()
{
    int q{5};
    while(q--)
    {
        if(q==2)
        continue;
        cout<<q<<endl;
    }
}