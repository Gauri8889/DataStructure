#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,2,1,9,80,20},n;
    int s=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";

    }
    cout<<"\n Enter data u wanna search\n";
    cin>>n;//9
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
