#include<iostream>
using namespace std;
int main()
{
    cout<<" Started\n";
    string s;
    cin>>s;
    int count =1;

    for(int i=1;i<s.size();i++)
    {
        
         if(s[i]==s[i-1])
         {
            count++;
           
            }
         else
         {
            
            cout<<s[i-1]<<count<<"_";
            
            cout<<"_";
            count =1;
            

         }
         if(i==s.size()-1)
         {
            cout<<s[i]<<count;
         }
    }
}