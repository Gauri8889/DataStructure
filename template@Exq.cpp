#include<iostream>
using namespace std;

    template<typename a,typename b>
    a grt(a a1,b b1)//template function
    {
        if(a1>b1)
        {
            return a1;
        }
        else
        {
            return b1;
        }
    }
    int main()
    {
        cout<<grt(50,300);
    }

