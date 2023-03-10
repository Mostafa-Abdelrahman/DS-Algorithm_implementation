#include <iostream>
using namespace std;

struct node
{
int data;
node *next;
};

class linkedList
{
    private:
        node *root;
    public:
    linkedList():root(NULL){}
    bool isempty()
    {
        return !root;
    }
    void insert_f(int item)
    {
        node *newnode= new node();
        newnode->data=item;
        if(!root)
            root=newnode;
        else{
            newnode->next=root;
            root=newnode;
        }

    }
    void delete_f()
    {
        if(isempty())
        {
            cout<<"no node to delete ...the list is empty"<<endl;
            return;
        }
        node *dnode=root;
        root=root->next;
        delete dnode;
    }
    void insert_l(int item){
        node* newnode=new node();
        newnode->data=item;
        if(!root)
            root=newnode;
        else{
            node* temp=root;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        
    }
    void delete_l()
    {
        if(isempty())
        {
            cout<<"no node to delete ...the list is empty"<<endl;
            return;
        }
        if(!root->next)
            delete_f();
        else
        {
            node *temp=root;
            while(temp->next)
            {
                temp=temp->next;
            }
            delete temp;
        }
    }
    void index_update(int index,int item)
    {
        if(isempty())
        {
            cout<<"no node to update ...the list is empty"<<endl;
            return;
        }
        node* temp=root;
        for(int i=0;i<index;i++)
            temp=temp->next;
        temp->data=item;
    }
    void value_update(int value,int item)
    {
        if(isempty())
        {
            cout<<"no node to update ...the list is empty"<<endl;
            return;
        }
        node* temp=root;
        while(!temp)
        {
            if(temp->data==value)
                temp->data=item;
            temp=temp->next;
        }
    }
    bool exist_search(int item)
    {
        if(isempty())
        {
            cout<<"no node to search ...the list is empty"<<endl;
            return 0;
        }
        node* temp=root;
        while(!temp)
        {
            if(temp->data==item)
                return true;
            temp=temp->next;
        }
        return false;
    }
    int index_search(int item)
    {
        if(isempty())
        {
            cout<<"no node to search ...the list is empty"<<endl;
            return 0;
        }
        node* temp=root;
        int i=0;
        while(!temp)
        {
            if(temp->data==item)
                return i;
            temp=temp->next;
            i++;
        }
    }
    void insert_index(int ind,int item)
    {
        if(ind>list_num())
        {
            cout<<"out of index.. you enter index not insered yet"<<endl;
            return;
        }
        if(ind==0)
            insert_f(item);
        else{
        node* temp=root;
        for(int i=0;i<ind-1;i++)
        {
            temp=temp->next;
        }
        node *newnode= new node();
        newnode->data=item;
        newnode->next=temp->next;
        temp->next=newnode;
        }

    }
    int list_num()
    {
        node* temp=root;
        int i=0;
        while(temp)
        {
            i++;
            temp=temp->next;
        }
        return i;
    }
    void printList()
    {
        if(isempty())
        {
            cout<<"no node to print ...the list is empty"<<endl;
            return;
        }
        node* temp=root;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
    
};

int main(){
    linkedList list;
    list.insert_f(4);
    list.insert_f(6);
    list.insert_f(7);
    list.insert_f(2);
    list.insert_f(1);
    list.insert_f(9);
    list.insert_l(1);
    list.insert_l(122);
    list.printList();
    list.insert_index(8,1);
    list.insert_index(0,2);
    list.printList();
    cout<<list.list_num()<<endl;
}