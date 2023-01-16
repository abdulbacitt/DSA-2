#include<iostream>
#include<queue>


using namespace std;

struct OurStak {
    queue <int> q;

    void push(int val) {
        q.push(val);
        while(!q.empty()) {
            q.push(q.front());
            q.pop();

        }
    }
    void pop() {
        if(!q.empty()) {
            q.pop();
        }
    }
    int empty() {
        return q.empty();
    }

    int top() {
        return q.front();
        
    }

    int size() {
        return q.size();
    }

};
int main() {
    OurStak Os;
    Os.push(1);
    Os.push(2);
    Os.push(3);
    Os.pop();
    while(!Os.empty()) {
        cout << Os.top() << endl;
        Os.pop();
    }

    return 0;
}

