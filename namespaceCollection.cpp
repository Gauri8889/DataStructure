#include<iostream>
#include<stack>
using namespace std;
bool Naaz(string &s, int l)
{
  stack<char>st;
  bool ans=true;
  for(int i=0; i<l; i++)
  {
   if(s[i]=='{'||s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]=='}')
                {
                if(!st.empty() && st.top()=='{')
                    {
                        st.pop();
                    }
                    else{
                        ans=false;
                        break;
                    }
               }
               else if(s[i]==']')
                {
                if(!st.empty() && st.top()=='[')
                    {
                        st.pop();
                    }
                    else{
                        ans=false;
                        break;
                    }
               }
               else if(s[i]==')')
                {
                if(!st.empty() && st.top()=='(')
                    {
                        st.pop();
                    }
                    else{
                        ans=false;
                        break;
                    }
               }
  }
  return ans;
}
int main()
{
 string s="[}" ;
 bool i=Naaz(s,s.length()) ;
 if(i)
 {
     cout<<"VALID";
 }
 else{
    cout<<"INVALID";
 }
}
