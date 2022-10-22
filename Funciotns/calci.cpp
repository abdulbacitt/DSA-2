#include<iostream>
using namespace std;
int count;
int menu()
{
    int choice=0;
    cout<< "Select\n 1:  addition \n 2: subtraction\n 3: division\n 4: multiplication \n 5: End the P"<<endl;
    cin>>choice;
    return choice;
}
double add(double &a ,double &b)
{
    count++;
    return (a+b);
}
long double mult(double &a, double &b)
{
    count++;
    return(a*b);
}
double sub( double &a, double &b)
{
    count++;
    return(a-b);
}
double div(double &a, double &b)
{
    count++;
    return(a/b);
}
int calc( double &a , double &b)
{
    
    double res;
    while(true)
    {
        int choice=menu();
        if(choice==1)
        {
            res=add(a, b);
            
        }
        if(choice==4)
        {
            res=mult(a, b);
        }
        if(choice==2)
        {
            res=sub(a, b);
        }
        if(choice==3)
        {
            res=div(a, b);
        }
        if(choice==5)
        {
            cout<< " \n "<<count<<endl;
            return 0;

        }
        cout<< " The result of the operation is : "<<res<<endl;
    }
}
int main()
{
    cout<< " Started \n";
    double a, b;
    cin>>a>>b;

    calc(a,b);
    return 0;
}

