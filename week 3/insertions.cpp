#include<iostream>
using namespace std;
void insertions(int a[],int n)
{   
    int shift=0,comparison=0;
    for(int k=1;k<n;k++)
    {   shift++;
        int temp=a[k];
        int b=k-1;
        while(b>=0 && a[b]>temp)
        {
            a[b+1]=a[b];
            b--;
            comparison++;
            shift++;
        }
        a[b+1]=temp;
    }   
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl<<"comparisons: "<<comparison<<endl;
    cout<<"shifts: "<<shift<<endl;
}
int main()
{
    int n;
    cout<<"Enter no. of test cases "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        insertions(arr,size);
    }
}