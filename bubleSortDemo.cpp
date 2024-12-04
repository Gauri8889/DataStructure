#include<iostream>
using namespace std;
int sum(int arr[],int t)
{
    int s=0;
    for(int i=0;i<t;i++)
    {
        s=s+arr[i];
    }
    return s;
}
int main()
{
    int arr[]={2,3,4,5,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,s);
}
