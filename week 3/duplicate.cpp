#include<iostream>
using namespace std;
void duplicate(int arr[], int n)
{
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int n;
    cout<<"Enter no. of test cases: "<<endl;
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
        duplicate(array,size);
    }
}