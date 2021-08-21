#include<iostream>
#include<cmath>
using namespace std;
void jumpsearch(int a[],int k,int n )
{
    int jmp=sqrt(n);
    int left=0,right=jmp,flag=0,comparison=0;
    while(a[right]<=k && right<n)
    {
        left=right;
        right=right+jmp;
        comparison=comparison+1;
       if(right>n-1)
      {
         right=n;
      }
      
    }  
    for(int j=left;j<right;j++)
    {   comparison=comparison+1;
        if(a[j]==k)
        flag=1;
    }
    if(flag==1)
    {
        cout<<"Present "<<comparison<<endl;
    }
    else cout<<"Not Present "<<endl;
}
int main()
{
    int t,key;
    cout<<"Enter no. of test cases "<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter array size "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter array elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the key "<<endl;
        cin>>key;
        jumpsearch(arr,key,n);
    }
    return 0;
}
    