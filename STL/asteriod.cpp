#include<iostream>
#include<stack>

using namespace std;

int main() {
    int arr[]{5,10,-5};

    stack <int> st;

    for(auto i : arr) {
        if(st.empty() || i > 0) {
            st.push(i);
        }else {
            while(true) {
                if(st.top() > -i) {
                    break;
                }
                if(st.top() == -i) {
                    st.pop();
                    break;
                }
                if(st.top() < -i) {
                    st.pop();
                    if(st.empty()) {
                        st.push(i);
                        break;
                    }
                }
            }
        }
        
    }
    int new_arr[st.size()];
    for(int i = st.size()-1; i >= 0; i--) {
        new_arr[i] = st.top();
        st.pop();
    }
    for(auto i : new_arr)
    cout << i <<" ";

    return 0;
    
}