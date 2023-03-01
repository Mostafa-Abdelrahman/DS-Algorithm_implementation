#include <iostream>//work 
using namespace std;
/*first we choose a pivot (last elemnt in arr ) and 
sort it as all smaller element in left the pivot and 
all larger in right the pivot using partion 
partion style: i -> stand in smallest elemnt and ++ and swap  when j<pivot and skip if larger */

void showList(int arr[],int size)
{
    
    cout<<"content of array :";
    for(int j=0;j<size-1;j++)
    {
        cout<<arr[j]<<" ,";
    }
    cout<<arr[size-1]<<endl;

}

int partion(int arr[],int low ,int high)//we put the pivot in right place and return his index
{
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);//put the pivot in his place 
    return (i+1);//return the current index of pivot 
}

void quieck(int arr[],int low,int high)//give the place of the partion and then divide the problem
{
if(low<high)//break when the smallest sumbe problem is two elemnt and it already sorted by partion
{
    int pi=partion(arr,low,high); //return the place of pivot 
    quieck(arr,low,pi-1);//divide the left elemnt 
    quieck (arr,pi+1,high);//divide the right elemnt 
}
}




int main()
{
    int arr[]={10,50,20,70,23,11,5,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    showList(arr,size);
    quieck(arr,0,size-1);
    showList(arr,size);
}