#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

bool balanced_parantheses(string s)
{
    stack<char> st;
    st.push('0');
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
                st.pop();
            else
                return 0;
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
                st.pop();
            else
                return 0;
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
                st.pop();
            else
                return 0;
        }
    }
        return 1;
}

int main()
{
    cout << (balanced_parantheses("({[]})")) << endl;
    cout << (balanced_parantheses("({[]}])]")) << endl;

    return 0;
}
