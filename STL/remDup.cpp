#include<iostream>
#include <stack>
using namespace std;

string remDuplkt(string s) {
    stack <char> st;
    int size = s.size();

    for(int i = size -1; i>=0; i--) {
        if(st.empty()){
            st.push(s[i]);
        }
        else if(s[i]==st.top())
        st.pop();
        else
        st.push(s[i]);

    }

    string str ="";
    while(!st.empty()) {
        str += st.top();
        st.pop();
    }

    return str;


}

int main() {

    string s = "abbaca";

    cout << remDuplkt(s) << endl;
	
	return 0;
}
