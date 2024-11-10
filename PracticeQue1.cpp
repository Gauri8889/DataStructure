#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,5,6,7,8},n;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"Enter data u wanna search\n";
    cin>>n;
    bool f=false;
    for(int j=0;j<s;j++)
    {
       if(arr[j]==n)
       {
         f=true;
            break;
       }
    }
            if(f==true)
            {
                cout<<"found";
            }
            else
            {
                cout<<"not found";
            }
    }


