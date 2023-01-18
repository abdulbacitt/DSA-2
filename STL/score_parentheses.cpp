#include<iostream>
#include<stack>

using namespace std;

int score_of_parenth(string s) {
    stack <int> st;

    for(auto c: s) {
        if(c == '('){
            st.push(-1);
         }else {
            if(st.top() == -1) {
                st.pop(),st.push(1);
            }else {
                int val = 0;

                while(!(st.top() == -1)) {
                    val += st.top();
                    st.pop();
                    cout << st.top() << endl;
                }
              

                st.pop();
                st.push(2*val);
                
            }
         }

    }
    int sum = 0;
    while ( !st.empty()) {
        sum += st.top();
        st.pop();
    }
    return sum;
}
int main() {
    cout << score_of_parenth("()(()(()))") <<endl;
    return 0;
}
