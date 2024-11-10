#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,6,7},n;
    int sorted,tmp;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        sorted=i;
        while(sorted>0 && arr[sorted]<arr[sorted-1])
        {
            tmp=arr[sorted-1];
            arr[sorted-1]=arr[sorted];
            arr[sorted]=tmp;
            sorted--;
        }
    }
    cout<<"\n after insertion sort \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
