#include<iostream>
using namespace std;
bool starts_with(string input, string pattern, int pos)
{
    int j=0;
    for(int i=pos;i<pos+pattern.size();i++)
    {
        if(input[i]!=pattern[j])
        {
            
        return false;
        }
        j++;

    
    }
    
    return true;
}
string rep_str(string input, string pattern,string to)
{
    string new_str=" ";
    for(int i=0;i<input.size();i++)
    {
        if(starts_with(input,pattern,i))
        {
            new_str+=to;
            i+=pattern.size()-1;
        }
        else
        new_str+=input[i];
    }
    return new_str;
}
int main()
{
    cout<<" Started \n";

    string input;
    cin>>input;

    string pattern;
    cin>>pattern;

    string to;
    cin>>to;

    cout<<" the modified string will be : "<<rep_str(input,pattern,to);
    return 0;

}