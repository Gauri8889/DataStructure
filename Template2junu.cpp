#include<iostream>
using namespace std;
template<typename cyb1,typename cyb2>
class Bhopal
{
    cyb1 a;
    cyb2 b;
    public:Bhopal(cyb1 x,cyb2 y)
    {
        a=x;
        b=y;
        cout<<a+b;
    }
};
int main()
{
    Bhopal<int,double>obj(6,8.9);
}
