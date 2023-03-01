#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
class stack_list
{
    private:
        node* top;
    public:
    
        stack_list():top(NULL){}
        void push(int item)
        {
            node* newnode=new node();
            newnode->data=item;

            if(!top)
            {
                top=newnode;
            }
            else
            {
                newnode->next=top;
                top=newnode;
            }
        }
        bool isEmpty()
        {
            return !top;
        } 

        void pop()
        {
            if(isEmpty())
                cout<<"the stack is empty ."<<endl;
            else
            {
                node* temp=top;
                top=top->next;
                delete temp;
            }
        }

        int peek()
        {   
            if(isEmpty())
                cout<<"the stack is empty."<<endl;
            return top->data;
        }
        void display()
        {
            node *temp=top;
            cout<<"the elemnt of the stack : [";
            while(temp)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<"]"<<endl;
        }
};
int main()
{
    stack_list list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);
    list.display();
    list.pop();
    list.display();
    cout<<"last elemnt-> "<<list.peek()<<endl;
}

