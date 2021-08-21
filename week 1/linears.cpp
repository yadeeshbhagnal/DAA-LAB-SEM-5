#include<iostream>
using namespace std;
void linearsearch(int a[],int size,int n)
{
    int temp=0;
    for(int k=0;k<size;k++)
    {
        if(a[k]==n)
        {
            cout<<"Present "<<k+1<<endl;
            temp =1;
        }
    }
    if(temp==0)
    {
        cout<<"Not Present "<<endl;
    }
}

int main()
{
    int n,key;
    cout<<"Enter no. of test cases "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int size;
        cin>>size;
        int array[size];
        for(int j=0;j<size;j++)
        {
            cin>>array[j];
        }
        cin>>key;
        linearsearch(array,size,key);
    }
}