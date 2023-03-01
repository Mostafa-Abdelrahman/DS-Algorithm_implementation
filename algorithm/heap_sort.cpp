#include <iostream>
using namespace std;

void heapfiy(int arr[],int n,int i)//here we heapfiy the complete tree to turn it to max binary heap tree
{
    int largest=i;//take the main node and make it bigest in the current
    int l=(2*i)+1;//index  the left child of the node
    int r=(2*i)+2;//index the right childl of the node

    if(l<n && arr[l]>arr[largest])
        largest =l;
    if(r<n && arr[r]>arr[largest])
        largest =r;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapfiy(arr,n,largest);
    }
}

void heapSort(int arr[],int n)
{
    //make heapfiy function run into all levels to build complete max heap
    for(int i=n/2-1;i>=0;i--)//  (n/2-1) return first parent from down to up 
       {
         heapfiy(arr,n,i);
       }

    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);//move the largest elemnt (root) to end of array
        heapfiy(arr,i,0);//heapfiy the swithced elemnt we make with root 
    }
}

void showList(int arr[],int size)
{
    
    cout<<"content of array :";
    for(int j=0;j<size-1;j++)
    {
        cout<<arr[j]<<" ,";
    }
    cout<<arr[size-1]<<endl;

}

int main()
{
    int arr[]={10,50,20,70,23,11,5,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    showList(arr,size);
    heapSort(arr,size);
    showList(arr,size);
}