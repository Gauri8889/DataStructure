#include<iostream>
using namespace std;
void insrt(int arr[],int l)
{
    for(int i=1;i<l;i++)
    {
        int mn=i;
        while(mn>0 && arr[mn]<arr[mn-1])
        {
            int tmp;
            tmp=arr[mn];
            arr[mn]=arr[mn-1];
            arr[mn-1]=tmp;
            mn--;
        }
    }
    for(int i=0;i<l;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[]={8,2,1,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"After applying insertion sort\n";
    insrt(arr,len);
}
