#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    
    int createlist(node* current, int reqNodes);
    node* deleteAtNth(node* headcopy, int pos);
    node* head = new node();
    head->data = 11;
    head->next = NULL;
    node* current = new node();
    current->data  = 22;
    current->next = NULL;
    head->next = current;
    int reqNodes = 4;
    createlist(current,reqNodes);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    cout<<endl;
    int pos = 1;
    head = deleteAtNth(head, pos);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
     cout<<endl;
    pos = 2;
    head = deleteAtNth(head, pos);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
    return 0;
}

int createlist(node* current, int reqNodes)
{
    node* creator;
    while(reqNodes!=0)
    {
        creator = new node();
        creator->data = 33;
        creator->next = NULL;
        current->next = creator;
        current = creator;
        reqNodes--;
    }
    return 0;
}
node* deleteAtNth(node* headcopy, int pos)
{
    if(headcopy==NULL)
    {
        cout<<"List is empty."<<endl;
        return headcopy;
    }
    else if(pos==1)
    {
        node* next = headcopy->next;
        free(headcopy);
        return next;
    }
    else
    {
        pos--;
        node* nexttoTarget;
        node* toTraverse = headcopy;
        while(pos>1)
        {
            toTraverse = toTraverse->next;
            pos--;
        }
        nexttoTarget = toTraverse->next->next;
        free(toTraverse->next);
        toTraverse->next = nexttoTarget;
        return headcopy;
        
    }
}
