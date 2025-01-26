#include <bits/stdc++.h>
using namespace std;
int priority(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}
void infixToPostfix(string s)
{
    stack<char> st;
    int n = s.size();
    string ans;
    for (int i = 0; i < n; i++)
    {
        //! operands
        //! open bracket (assuming only circular brackets)
        //! close bracket
        //! operators
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
            ans += s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            char c = '(';
            while(st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && priority(st.top()) >= priority(s[i])){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << ans << endl;
}
int main()
{
    string s;
    cin >> s;
    //* asuming valid infix expression is given
    infixToPostfix(s);
}