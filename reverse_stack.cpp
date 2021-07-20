#include <bits/stdc++.h>

using namespace std;

void insertAtButtom(stack<int> &st, int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtButtom(st,ele);
    st.push(topele);
}

void reverse(stack<int> &st){
    if(st.empty()) return;
    int ele=st.top();
    // st.pop();
    st.pop();
    reverse(st);
    insertAtButtom(st,ele);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);
    for(int i=0; i<4; i++){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return 0;
}