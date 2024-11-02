#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,6};
    int tmp;
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    cout<<"\n after applying bubble sort\n";
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-1;j++)
        {
            if(arr[i]>arr[j+i])
            {
                tmp=arr[j+i];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
