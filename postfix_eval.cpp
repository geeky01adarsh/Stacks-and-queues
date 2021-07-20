#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int prefixEval(string s){
    stack<int> st;
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            if(s[i]=='+')
            st.push(op1+op2);
            else if(s[i]=='-')
            st.push(op1-op2);
            else if(s[i]=='*')
            st.push(op1*op2);
            else if(s[i]=='/')
            st.push(op1/op2);
            else if(s[i]=='%')
            st.push(op1%op2);
            else if(s[i]=='^')
            st.push(pow(op1,op2));

        }
    }
    // cout<<st.top()<<endl;
    return st.top();
}
int main(){
    cout<<prefixEval("46+2/5*7+")<<endl;
    return 0;
}