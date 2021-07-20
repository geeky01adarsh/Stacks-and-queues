// For a sentence let's say 
// Hey, how are you doing?
// doing? you are how Hey,


#include <bits/stdc++.h>

using namespace std;

void reverse(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string word ="";
        while (s[i]!=' ' && i<s.length())
        {
            /* code */
            word+=s[i]; i++;
        }
        st.push(word);
        
    }
    while (!st.empty())
    {
        /* code */
        cout<<st.top()<<" ";
        st.pop();
    }
    
}

int main(){
    string s ="Hey, how are you doing?";
    reverse(s);
}