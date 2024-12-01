// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 // lambda function
 cout<<[](int a){if(a>0) return true;}(3)<<"\n";
 cout<<[](int a, int b){if(a>b) return a; else return b;}(32,2);


}


/*#include<iostream>
using namespace std;
#include<forword-list>
int main()
{
    forword-list<int>11{9,4,2,1,5,3};
    forword-list<int>12{20,13,44,6,24,7};
    cout<<"data of 11\n";
    for(auto p:11)
    {
        cout<<p<<"\t";
    }
    cout<<"\n data of 12\n";
    for(auto p:12)
    {
        cout<<"\t";
    }
    11.sort();
    12.sort();
    11.merge(12);
    cout<<"\n after merging 11 & 12 data will be \n";
    for(auto p:11)
    {
        cout<<p<<"\t";
    }
    cout<<"\n after marging 12 data will be \n";
    for(auto p:12)
    {
        cout<<p<<"\t";
    }

}*/
