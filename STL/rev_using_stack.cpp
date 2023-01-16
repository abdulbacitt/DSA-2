#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int rev_num(int num) {
    stack<int> st;

    while(num) {
        int i = num % 10;

        num /=10;

        st.push(i);
    }

    int size = st.size();
    int namber = 0;
    int tens = 1;

    for(int i = 0; i < size; i++) {
      namber += st.top() * tens, tens*=10, st.pop();    
    }
    return namber;
}
int main() {
    int num = 1235;

    cout << rev_num(num);
    return 0;
}

