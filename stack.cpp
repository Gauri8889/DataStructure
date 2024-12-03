#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int>s;
    s.push(21);
    s.push(4);
    s.push(5);
    s.push(4);
    if(s.empty())
    {
        cout<<"\n it is empty\n";
    }
    else
    {
        cout<<"\n it is not empty\n";
    }
    while(!s.empty())
    {
        cout<<s.top()<<"\t";
        s.pop();
    }
    if(s.empty())
    {
        cout<<"\n it is empty\n";
    }
    else
    {
        cout<<"\n it is not empty\n";
    }
}
