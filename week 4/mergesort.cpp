#include<iostream>
using namespace std;
int inv=0,con=0;
void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {   if(a[i]<=b[j])
        {
            inv++;
            arr[k]=a[i];
            k++; i++;
        }
        else
        {
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        con++;
         arr[k]=a[i];
         k++; i++;   
    }
    while(j<n2)
    {
        con++;
        arr[k]=b[j];
        k++;j++;   
    }
}
void mergesort(int arr[],int l,int r)
{
   if(l<r)
   {
        int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
   }

}
void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
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
        mergesort(arr,0,size-1);
        printarr(arr,size);
        cout<<"Conversion: "<<con<<endl;
        cout<<"Inversion: "<<inv<<endl;
    }
}