#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
            if(arr[min]>arr[j])
                min=j;
        swap(arr[i],arr[min]);
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
int arr[]={60,50,40,30,20,100,10};
int size=sizeof(arr)/sizeof(arr[0]);
display(arr,size);
sort(arr,size);
display(arr,size);
}