#include<iostream>
using namespace std;
void diff(int arr[],int size, int key)
{   int temp=0;
    for(int j=0;j<size;j++)
    {
        for(int k=j+1;k<size;k++)
        {
            if(arr[j]-arr[k]==key|| arr[k]-arr[j]==key)
            {
                temp=temp+1;
            }
        }
    }
    cout<<temp<<endl;
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
        diff(arr,size,key);
    }
}