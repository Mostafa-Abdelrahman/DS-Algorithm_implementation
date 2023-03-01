#include <iostream>//want to implement another partition
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int partition(int arr[],int i,int j)
{
    int pivot=i;
    int size=7;

    while(true)
    {
        while(arr[pivot]<=arr[j]&& pivot!=j)
            j--;
        
        if(pivot==j)
        
            break;
        else if(arr[pivot]>arr[j])
        {
            swap(arr[j],arr[pivot]);
            pivot=j;
        }
        while(arr[pivot]>=arr[i]&&pivot!=i)
            i++;
        
        if(pivot==i)
            break;
        else if (arr[pivot]<arr[i])
        {
            swap(arr[i],arr[pivot]);
            pivot=i;
        }
    }
    return pivot;
}

void sort(int arr[],int begin,int end)
{
    if(begin<end)
    {
        int pivot=partition(arr,begin,end);
        sort(arr,begin,pivot-1);
        sort(arr,pivot+1,end);
    }
}

int main()
{
    int arr[]={60,50,40,30,20,100,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,0,size-1);
    display(arr,size);

}