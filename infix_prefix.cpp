#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string operator_change(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')
        s[i]=')';
        else if(s[i]==')')
        s[i]='(';
    }
    return s;

}
string infix_postfix(string s)
{
    stack<char> st;
    reverse(s.begin(), s.end());
    string res = "";
    s = operator_change(s);
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
                st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return (res);
}

int main()
{
    cout << infix_postfix("(a-b/c)*(a/k-l)");
    return 0;
}