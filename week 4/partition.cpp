#include <iostream>
using namespace std;
int comparison=0,swaps=0;

void printArray(int* arr, int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

void swap(int* arr, int i, int j){
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
    swaps++;
}

int part(int* arr, int l, int h){
    int pivot_ele = arr[l],i=l-1;
    for(int j=l; j <=h-1 ; j++){
        if(arr[j]<pivot_ele){
            i++;
            swap(arr,i,j);
        }
        comparison++;
    }
    swap(arr,i+1,h);
    return (i+1);
}

void Sort(int* arr, int l,int h){
    if(l<h){
        int p = part(arr,l,h);
        Sort(arr,l,p-1);
        Sort(arr,p+1,h);
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
        comparison=0,swaps=0;
        Sort(arr,0,size-1);
        printArray(arr,size);
        cout<<"Conversion: "<<comparison<<endl;
        cout<<"Inversion: "<<swaps<<endl;
    }
    return 0;
}

