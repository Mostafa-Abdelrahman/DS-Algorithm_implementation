#include <iostream>
using namespace std;

void merge(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr3[k]=arr1[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr3[k]=arr2[j];
        j++;k++;
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
    int arr1[]={1,3,4,6,8,12,15};
    int arr2[]={2,4,5,10,20};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=size1+size2;
    int arr3[size3]={};
    merge(arr1,size1,arr2,size2,arr3);
    display(arr3,size3);
}