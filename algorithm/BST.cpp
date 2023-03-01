#include <iostream> //not work yet
#include <cassert>
using namespace std;

struct node
{
    int item;
    node* left;
    node* right;
};

class BST
{
    private:
        node* root;
        void clear(node *&p);
        void inorder(node *p);
        void preorder(node *p);
        void postorder(node *p);
        int height(node *p);
        int max(int x,int y);
        int nodeCount(node *p);
        int leavesCount(node *p);
        void deleteFromTree(node* &p);
        bool searchRecPriv(node *,int);
    public:
        bool isEmpty();
        bool search(int);
        bool searchRec(int);
        void insert(int);
        void remove(int);
        void inorderTraversal();
        void preorderTraversal();
        void postorderTraversal();
        int treeHeight();
        int TreeNodeCount();
        int TreeLeavesCount();
        void clearTree();
        BST();
        ~BST();
};

BST::BST():root(NULL){}

bool BST::isEmpty()
{
    return (root==NULL);
}

void BST::inorderTraversal()
{
    inorder(root);
}

void BST::preorderTraversal()
{
    preorder(root);
}

void BST::postorderTraversal()
{
    postorder(root);
}

int BST::treeHeight()
{
    return height(root);
}

int BST::TreeNodeCount()
{
    return nodeCount(root);
}

int BST::TreeLeavesCount()
{
    return leavesCount(root);
}

void BST::inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->item<<" ";
        inorder(p->right);
    }cout<<endl;
}

void BST::preorder(node *p)
{
    if(p!=NULL)
    {
        cout<<p->item<<" ";
        preorder(p->left);
        preorder(p->right);
    }cout<<endl;
}

void BST::postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->item<<" ";
    }cout<<endl;
}

void BST::clear(node* &p)
{
    if(p !=NULL)
    {
        clear(p->left);
        clear(p->right);
        delete p;
        p = NULL;
    }
}
void BST::clearTree()
{
    clear(root);
}

BST::~BST()
{
    clear(root);
}

int BST::height(node* p)
{
    if(p ==NULL)
        return 0;
    else    
        return 1+ max(height(p->left),height(p->right));
}

int BST::max(int x,int y)
{
    if(x>=y)
        return x;
    else
        return y;
}
int BST::nodeCount(node*p)
{
    if(p==NULL)
        return 0;
    else 
        return 1+nodeCount(p->left)+nodeCount(p->right);
}
int BST::leavesCount(node *p)
{
    if(p ==NULL)
        return 0;
    else if(p->left==NULL&&p->right==NULL)
        return 1;
    else
        return leavesCount(p->left)+leavesCount(p->right);
}

bool BST::search(int data)
{
    node * current= root;

    while(current!=NULL)
    {
        if(current->item==data)
            return true;
        else if(current->item>data)
            current =current->left;
        else
            current =current->right;
    }

    return false;
}

bool BST::searchRec(int item)
{
    return searchRecPriv(root,item);
}

bool BST::searchRecPriv(node* p,int data)
{
    if(p==NULL)
        return false;
    else if (p->item==data) 
        return true;
    else if(p->item>data)
        return searchRecPriv(p->left,data);
    else    
        return searchRecPriv(p->right,data);
}

void BST::insert(int data)
{
    node* current;//point to traverse the tree
    node* tailCurrent;//pointer to behind current
    node* newNode;//pointer to create the node

    newNode=new node;
    assert(newNode!=NULL);
    newNode->item=data;
    newNode->left=NULL;
    newNode->right=NULL;

    if(root ==NULL)
        root=newNode;
    else
    {
        current=root;

        while(current !=NULL)
        {
            tailCurrent=current;
            if(current->item==data)
            {
                cout<<"the insert item is already in the list --";
                cout<<"duplicates are not allowed."<<endl;
                return;
            }
            else
                if(current->item>data)
                    current=current->left;
                else
                    current=current->right;

        }//end while

        
    }
}