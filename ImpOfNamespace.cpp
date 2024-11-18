#include<iostream>
 using namespace std;
 namespace cybrom
 {
     int age =21;
     void show()
     {
         cout<<"\n Example of namespace \n";
     }
     class student
     {
         public:void hello()
         {
             cout<<"\n hellow function \n";
         }
     }p;
 }
 int main()
 {
     cout<<cybrom::age<<"\n";
     cybrom::show();
     cybrom::student s;
     s.hello();
     using namespace cybrom;
     p.hello();
 }
