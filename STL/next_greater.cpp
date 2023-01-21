#include<iostream>
#include<stack>

using namespace std;

int main(){
    int arr[]{3, 15, 10, 13, 12, 20};

    stack <int> st;

    for(int i = 0; i <= 5; i++ ){
        
            while((!st.empty()) && arr[i] > arr[st.top()]){
             arr[st.top()] = arr[i],st.pop();
          
        }
        st.push(i);
    }

    while(!st.empty()) {
        arr[st.top()] = -1;
        st.pop();
    }
    for(auto i: arr)
    cout << i <<" ";

    return 0;
}