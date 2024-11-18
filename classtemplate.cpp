#include<iostream>
using namespace std;
template<typename c1,typename c2>
class student
{
    c1 age;
    c2 salary;
    public:student(c1 a,c2 s)
    {
        age=a;
        salary=s;
    }
    void show()
    {
        cout<<"age="<<age<<"\n";
        cout<<"salary="<<salary<<"\n";
    }
};
int main()
{
    student<int,double>obj(21,32000.9);
    obj.show();
}

