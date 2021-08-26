#include<iostream>
using namespace std;
void selections(int arr[],int n)
{   
    int shift=0,comparison=0;
    for(int i=0;i<(n-1);i++)
    {
        shift++;
        int j;
        for(j=i+1;j<n;j++)
        comparison++;   
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }    
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"comparisons: "<<comparison<<endl;
    cout<<"Shifts: "<<shift<<endl;
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
        selections(arr,size);
    }
}