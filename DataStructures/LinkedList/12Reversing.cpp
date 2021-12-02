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
    node* reverse(node* headcopy);
    node* head = new node();
    head->data = 11;
    head->next = NULL;
    node* current = new node();
    current->data  = 22;
    current->next = NULL;
    head->next = current;
    int reqNodes = 2;
    createlist(current,reqNodes);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    cout<<endl;
    head = reverse(head);
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    
    return 0;
}

node* reverse(node* headcopy)
{
    if(headcopy==NULL)
    {
        cout<<"List is empty"<<endl;
        return headcopy;  
    }
    else if(headcopy->next==NULL)
    {
        return headcopy;
    }
    else 
    {
        node* nextnode = NULL;
        node* prevnode = NULL;
        while(headcopy!=NULL)
        {
            nextnode = headcopy->next;
            headcopy->next = prevnode;
            prevnode = headcopy;
            headcopy = nextnode;
           
        }
       
        return prevnode;

    }
    
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
