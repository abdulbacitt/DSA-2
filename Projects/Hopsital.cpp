#include<iostream>
using namespace std;
int counter[20];
string spec_wise[20][5];
int urgen_mat[20][5];
void patient_entry(int j,string name,int urgency)
{
    if(counter[--j]>=5)
    {
        cout<<" No vacancy!"<<endl;
        return ;
    }
    spec_wise[j][counter[j]]=name;
    urgen_mat[j][counter[j]]=urgency;
    ++counter[j];
    cout<<spec_wise[j][counter[j]]<<endl;
}
void print_patients()
{
    for(int I=0;I<20;I++)
    cout<<"***";
    cout<<" \n ";
   for(int i=0;i<20;i++)
     {
        if(counter[i]!=0)
        {
            cout<<" There are "<<counter[i]<<" patients in specialization "<<i+1<<endl;

            for(int j=counter[i]-1;j>=0;j--)
            {
                if(urgen_mat[i][j]==2)
            cout<<spec_wise[i][j]<<" : emergency"<<endl;
            }
            for(int k=0;k<counter[i];k++)
            {
                if(urgen_mat[i][k]==1)
                cout<<spec_wise[i][k]<<" : regular"<<endl;
            }
            
        }
        cout<<" \n";
     }
}
void getpatient()
{
 cout<<" Enter the specialisation : ";
 int spec;
 cin>>spec;
 --spec;
 for(int i=4;i>=0;i--)
 {
    if(urgen_mat[spec][i]==2)
    {
        cout<<spec_wise[spec][i]<<", please go with the doctor"<<endl;
        urgen_mat[spec][i]=0;
        counter[spec]--;
        break;
    }
    
 }
 for(int i=0;i<5;i++)
 {
    if(urgen_mat[spec][i]==1)
    {
        cout<<spec_wise[spec][i]<<", please go with the doctor"<<endl;
       
    }
 }
}
void menu()
{
    cout<<"Enter your choice : \n1) Add new patient \n2) Print all patients \n 3)Get new Patient";
    int i;
    cin>>i;
    if(i==1)
   { 
    cout<<" enter specialisaction, naem, status";
    int j,urgency;
    string name;   
    cin>>j>>name>>urgency;
    patient_entry(j,name,urgency);
    }
    if(i==2)
    print_patients();

    if(i==3)
    getpatient();

}

int main()
{
    cout<<" Started \n";
    while(true)
    {
        menu();
    }

    return 0;

}