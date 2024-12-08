#include<iostream>
using namespace std;
#include<stack>

bool valid(string &s, int len)
{
    stack<char> stk;
    for (int i = 0; i < len; i++) {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
            stk.push(s[i]);
        }
        else if (s[i] == '}') {
            if (!stk.empty() && stk.top() == '{') {
                stk.pop();
            } else {
                return false;  // Invalid closing bracket
            }
        }
        else if (s[i] == ')') {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
            } else {
                return false;  // Invalid closing bracket
            }
        }
        else if (s[i] == ']') {
            if (!stk.empty() && stk.top() == '[') {
                stk.pop();
            } else {
                return false;  // Invalid closing bracket
            }
        }
    }

    // If stack is empty, it means all brackets are matched
    return stk.empty();
}

int main()
{
    string s = "[{}]";
    bool i = valid(s, s.length());
    if (i) {
        cout << "valid";
    } else {
        cout << "invalid";
    }
    return 0;
}
