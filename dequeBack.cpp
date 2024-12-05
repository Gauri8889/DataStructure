#include<iostream>
using namespace std;
#include<queue>//fifo-:first in first out
#include<stack>//lifo-:last in last out
int main()
{
    deque<int>q;
    q.push_front(100);
     q.push_back(300);
      q.push_back(200);
       q.push_back(400);
       // 400 100 200 300
       while(!q.empty())
       {
           cout<<q.back()<<"\t";//300 200 100 400
           q.pop_back();
       }

}

