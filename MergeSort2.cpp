#include<iostream>
using namespace std;
void merges(int A[],int low,int mid,int high)
{
    int i,j,k,B[high+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            i++;
        }
        else
        {
            B[k]=A[j];
            j++;
        }
        k++;
    }

    while(i<=mid)
    {
        B[k]=A[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        A[i]=B[i];
    }
}
void divide(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        divide(A,mid+1,high);
        divide(A,low,mid);
        merges(A,low,mid,high);
    }
    }
    void printarr(int A[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            cout<<A[i]<<"\t";
        }
        cout<<"\n";
    }
    int main()
    {
        int A[]={3,5,2,13,12,10,6};
        int n=7;
        printarr(A,n);
        divide(A,0,n-1);
        cout<<"--------After Merge Sort--------\n";
        printarr(A,n);
    }



