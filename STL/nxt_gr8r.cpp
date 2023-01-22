#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector <int> nxt_greater_pos( vector <int> &v){
    stack <int> st;

    for(int i = 0; i < (int)v.size(); i++){
        while(!st.empty() && v[i] > v[st.top()]) {
            v[st.top()] = v[i], st.pop();

        }
        st.push(i);
    }

    while(!st.empty()){
        v[st.top()] = -1, st.pop();
    }

    return v;
}

int main() {
    vector <int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(7);
    v.push_back(15);
    v.push_back(11);

    v = nxt_greater_pos(v);

    for(auto i : v){
        cout << i <<" ";
    }
    return 0;

}