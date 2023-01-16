#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void rev_Q(queue<int> &q) {
    stack<int> st;

   while(!q.empty()) {
    int i = q.front();
    st.push(i);
    q.pop();
   }
   while(!st.empty()) {
    int i = st.top();
    q.push(i);
    st.pop();
   }
}

struct Ourstack {
    queue<int> q;

    void push(int val) {
        rev_Q( q );
        q.push(val);
        rev_Q( q );

    }
    
    void pop() {
        if(!q.empty())
         q.pop();
    }

    int top() {
        return q.front();
    }
    bool empty() {
        return q.empty();
    }
};
int main() {
    Ourstack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()) {
        cout << s.top() << " ", s.pop();

        
    }

    return 0;
}