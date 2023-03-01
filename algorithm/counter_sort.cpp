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
        arr[i]=rand()%5;
    }
}

void counter(int arr[],int size){
    int list[size]={0};
    for(int i=0;i<size;i++){
        list[arr[i]]++;
    }
    for(int i=0;i<size;i++){
       while (list[i]>0)
       {
        cout<<i<<" ";
        list[i]--;
       }
    }
}

int main()
{
    int what=10;
    int array[what];
    fill_rand(array,what);
    print(array,what);
    cout<<endl;
    counter(array,what);
}
