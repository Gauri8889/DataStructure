#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" values\n";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n output \n";
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
