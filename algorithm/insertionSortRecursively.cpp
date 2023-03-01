#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    if(n<=1)// base case to break the recursive
        return;
    
    sort(arr,n-1); //recursive the array with condtion n-1

    int last=arr[n-1];
    int j=n-2;
    while(j>0 && arr[j]>last)//insert last element at its correct postion in sorted array
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
        int arr[] = {12, 11, 13, 5, 6};
        int n = sizeof(arr)/sizeof(arr[0]);
    
        sort(arr, n);
        display(arr, n);
    
        return 0;
}