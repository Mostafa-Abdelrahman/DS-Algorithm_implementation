#include <iostream>
using namespace std;
void sort(int arr[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 &&  arr[j]>key)//to turn from asc to desc swich < key
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
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
int arr[]={80,90,60,30,50,70,40};
int size=sizeof(arr)/sizeof(arr[0]);
display(arr,size);
sort(arr,size);
display(arr,size);
}