#include<iostream>

using namespace std;
int binarysearch(int a[],int left,int right,int k)
{   int comparison=0,flag=0;
    while(left<=right)
    {   comparison=comparison+1;
        int mid=left+(right-left)/2;
        if(a[mid]==k)
        {flag=1;
        break;}
        else if (a[mid]<k)
        {left= mid+1;}
        else right= mid-1;
    }
    if(flag==1)
        cout<<"Present "<<comparison<<endl;
    else cout<<"Not Present "<<endl;     
}
int main()
{
    int t,key;
    cout<<"Enter no. of test cases: "<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter size of array "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter array elements "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"enter the key "<<endl;
        cin>>key;
        binarysearch(arr,0,n,key);
    }  
    return 0;
}
