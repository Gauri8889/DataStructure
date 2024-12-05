#include<iostream>
using namespace std;
#include<queue>//fifo-:first in first out
#include<stack>//lifo-:last in last out
int main()
{
    queue<int>q;
    q.push(101);
     q.push(340);
      q.push(200);
       q.push(400);
       while(!q.empty())
       {
           cout<<q.front()<<"\t";
           q.pop();
       }

}
