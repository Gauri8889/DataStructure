
#include<iostream>
using namespace std;
void bubble(int arr[],int s)
{
    int c=0;//counter
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            int tmp;
            if(arr[j]<arr[j+1])
            {
                tmp=arr[j+1];
                arr[j]=arr[j];
                arr[j]=tmp;
            }
            c++;
        }

    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<"c="<<c;
}
int main()
{
    int arr[]={1,2,3,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n after applying bubble sort \n";
    bubble(arr,s);
}
