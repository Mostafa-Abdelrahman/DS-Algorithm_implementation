#include <iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void fill_rand(int arr[],int size){
    srand(time(NULL));
    for(int i=0;i<size;i++){
        arr[i]=rand()%100;
    }
}

int getMax(int arr[],int size){
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>largest)
            largest=arr[i];
    }
    return largest;
}

void bucket(int arr[],int size){
    int listSize=getMax(arr,size);
    int list[listSize]={0};
    for(int i=0;i<size;i++){
        list[arr[i]]=1;
    }
    for(int i=0;i<listSize;i++){
        if(list[i])
            cout<<i<<" ";
    }
}

int main()
{
    int what=10;
    int array[what];
    fill_rand(array,what);
    cout<<endl<<getMax(array,what)<<endl;
    bucket(array,what);
}
