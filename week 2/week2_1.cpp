#include<iostream>
using namespace std;
void dupele(int arr[],int size,int key)
{   int temp=0;
    for(int k=0;k<size;k++)
    {
        if(arr[k]==key)
        {
            temp=temp+1;
        }
      
    }   
      cout<<key<<" - "<<temp<<endl;
     if(temp==0)
     {
         cout<<"Element not present"<<endl;
     }
}
int main()
{
    int n,key;
    cout<<"enter no. of test cases"<<endl;
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
        cin>>key;
        dupele(arr,size,key);
    }
}