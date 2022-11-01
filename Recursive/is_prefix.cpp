#include<iostream>
using namespace std;
bool is_prefix(string input,string prefix, int s_p=0)
{
    if(s_p==prefix.size())
    return true;
    bool sub_res=(input[s_p]==prefix[s_p]);
    return (sub_res&&is_prefix(input,prefix,s_p+1));
}
int main()
{
    string input="account";
    string prefix="acc";

    cout<<is_prefix(input,prefix);
    return 0;
}