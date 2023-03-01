#include <iostream>
#include <array>
using namespace std;

class stack{
    private:
        const int size=1000;
        int array[1000];
        int top;
    public:
        stack():top(-1){}
        bool isFull()
        {
            return top>=size-1;
        }
        bool isEmpty()
        {
            return top<0;
        }
        void push(int item)
        {
            if(isFull())
                cout<<"the stack is full ."<<endl;
            else
                array[++top]=item;
        }
        void pop()
        {
            if(isEmpty())
                cout<<"the stack is empty."<<endl;
            else
            {
                array[top]=0;
                top--;
            }
            
        }
        int get_pop()
        {   
            if(isEmpty())
                return NULL;
            return array[top--];
        }
        void peek()
        {   
            if(isEmpty())
                cout<<"the stack is empty."<<endl;
            else   
                cout<<"the top is : "<<top<<endl;
        }
        int get_peek()
        {   
            if(isEmpty())
                return NULL;
            return array[top];
        }
        void printStack()
        {
            for(int i=top;i>=0;i--)
            {
                cout<<array[i]<<"->";
            }
        }
};

int main(){
    stack  list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);
    list.push(6);
    list.push(7);
    list.printStack();
    
}