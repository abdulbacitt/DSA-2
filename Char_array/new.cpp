#include<iostream>
using namespace std;

int main()
{
    cout<<"Started\n";
     const int N=1000;
    string names[N];
    int age[N];
    char gen[N];
    double salary[N];
    int count=0;

    while(true)
    {
        int n=-1;
        cout<<"Enter your choice:"<<endl;
        cout<<"1) Add new employee"<<endl;
        cout<<"2) Print all employee"<<endl;
        cout<<"3) Delete by age"<<endl;
        cout<<"4) Update the salary"<<endl;
        
        cin>>n;
        if(n==1)
        {
            cout<<"Enter the name: ";
            cin>>names[count];
            cout<<"\nEnter the age:  ";
            cin>>age[count];
            cout<<"\nEnter the salary: ";
            cin>>salary[count];
            cout<<"\nEnter the gender: ";
            cin>>gen[count];
            count++;
        }else if(n==2) {
        
       
            for(int i=0;i<count;++i)
            {
                if(age[i]!=-1)
                {
                    cout<<names[i]<<" "<<age[i]<<" "<<salary[i]<<" "<<gen[i]<<endl;
                }
            }
        }else if(n==3){
        
        
            cout<<"\nEnter start and end age"<<endl;
            int start,end;
            cin>>start>>end;
            for(int i=0;i<count;i++)
            {
                if(start<=age[i]&&age[i]<=end)
                {
                    age[i]=-1;
                }

            }


        }
        else
        {
            cout<<" Enter name to be updated:\n";
            string naam;
            cin>>naam;

            bool is_fond=false;

            for(int i=0;i<count;++i)
            {
                if(names[i]==naam&&age[i]!=-1)
                {
                    is_fond=true;
                    cout<<"Found";
                    cin>>salary[i];
                    break;

                }
                if(!is_fond)
                cout<<"No this name is not present there";
            }
            


        }
    }

return 0;
}