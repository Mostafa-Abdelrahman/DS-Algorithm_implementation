#include <iostream>
using namespace std;

class Queue
{
    private:
        int maxSize=10;
        int front,rear,count;
        int array[10];
    public:
        Queue(int size):front(0),count(0),rear(maxSize-1){}
        bool isFull()
        {
            return count==maxSize;
        } 
        bool isEmpty()
        {
            return count==0;
        }
        void enQueue(int item)
        {
            if(isFull())
                cout<<"the queue is full"<<endl;
            else
            {
                rear=(rear+1)%maxSize;
                array[rear]=item;
                count+=1;
            }
            
        }
        void deQueue()
        {
            if(isEmpty())
                cout<<"the stack is empty."<<endl;
            else
                array[front]=0;
                front=(front+1)%maxSize;
                count-=1;
        }
        int getFront()
        {
            return array[front];
        }
        int getREar()
        {
            return array[rear];
        }
        int getSize()
        {
            return count;
        }
        void display()
        {
            cout<<"the elemnt of the Queue is : ";
            for(int i=front;i!=rear;i=(i+1)%maxSize)
            {
                cout<<array[i]<<" -> ";
            }
            cout<<array[rear]<<endl;
            
        }
};

int main()
{
    Queue list(10);

    cout<<list.isEmpty()<<endl;
    cout<<list.isFull()<<endl;
    list.enQueue(1);
    list.enQueue(2);
    list.enQueue(3);
    list.enQueue(4);
    list.enQueue(5);
    list.enQueue(6);
    list.deQueue();
    list.deQueue();
    list.enQueue(7);
    list.enQueue(8);
    list.enQueue(9);
    list.enQueue(10);
    list.enQueue(11);
    list.enQueue(12);
    list.enQueue(13);
    cout<<list.isFull()<<endl;
    cout<<list.getSize()<<endl;
   

    list.display();
    
  
}