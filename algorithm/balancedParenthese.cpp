#include <iostream>
using namespace std;

struct node
{
    string data;
    node* next;
};
class stack_list
{
    private:
        node* top;
    public:
    
        stack_list():top(NULL){}
        void push(string item)
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

        string peek()
        {   
            if(isEmpty())
                return NULL;
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

bool BP(string word)
{
    stack_list list;
    for(int i=0;i<word.length();i++)
    {
        switch(word[i])
        {
            case '(':
                list.push("(");
                break;
            case '{':
                list.push("{");
                break;
            case '[':
                list.push("[");
                break;
            case ')':
                if(list.peek()=="("|| list.peek()=="")
                    list.pop();
                else
                    return false;
                break;
            case '}':
                if(list.peek()=="{"||list.peek()=="")
                    list.pop();
                else
                    return false;
                break;
            case ']':
                if(list.peek()=="["||list.peek()=="")
                    list.pop();
                else
                    return false;
        }
    }
    if(list.isEmpty())
        return true;
    return false;
}

int main()
{
    string ex="(4+5}";
    if(BP(ex))
        cout<<"the parenthese is balanced"<<endl;
    else   
        cout<<"the parenthese is not balanced"<<endl;

}