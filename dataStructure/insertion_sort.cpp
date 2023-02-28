#include <iostream>
using namespace std;

void insertion_sort(int array[],int size)//using iterarion o(n2)
{
 int smallest=array[0];
    for(int i=1;i<size;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(array[j]<array[j-1])
            {
                swap(array[j],array[j-1]);
            }
        }
    }
}

void insertion_sort_rec(int array[],int size)//using recurtion o(n2)
{
    if(size<=1)
        return;

    insertion_sort_rec( array,size-1);

    int j=array[size-1];
    int i=size-2;

    while(i>=0 && array[i]>j)
    {
        array[i+1]=array[i];
        i--;
    }
    array[i+1]=j;

}

int main()
{
    int array[]={5,7,2,37,54,3,7,8,43,25,7,2,4};
    int size=sizeof(array)/sizeof(array[0]);
    insertion_sort( array,size);
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;
}