#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    bool flag= true;int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=false;
            }
            c++;
        }
        if(flag)
            break;
    }
    cout<<"# times of round is : "<<c<<endl;
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
int arr[]={1,2,3,4,5,6,7};
int size=sizeof(arr)/sizeof(arr[0]);
display(arr,size);
sort(arr,size);
display(arr,size);
}