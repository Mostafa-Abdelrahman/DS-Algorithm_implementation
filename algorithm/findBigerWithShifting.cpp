#include <iostream>
using namespace std;

int findBiger(int arr[],int first,int last){

    if(first==last)
        return arr[first];
    

    int mid=first+(last-first)/2;
    if(mid==0 && arr[mid+1]<arr[mid])
        return arr[mid];
    
    if(mid<last && mid>0 && arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        return arr[mid];
    if(arr[first]<arr[mid])
        return findBiger(arr,mid,last);
    else
        return findBiger(arr,first,mid);
    

}

int main()
{
    int arr[]={29,35,42,100,5,15,27};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<findBiger(arr,0,size-1)<<endl;
}