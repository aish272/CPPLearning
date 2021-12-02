#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    node* deletelast(node* headcopy);
    node* head = (node*) new node();
    head->data = 11;
    head->next = NULL;
    node* current = (node*) new node();
    current->data = 22;
    current->next = NULL;
    head->next = current;
    current = (node*) new node();
    current->data = 22;
    current->next = NULL;
    head->next->next = current;
    head = deletelast(head);  //we are returning value, so that we can put null value in head if it only contains one node.
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}
//using single pointer
node* deletelast(node* headcopy)
{
    if (headcopy == NULL)
    {
        cout<<"List is empty."<<endl;
    }

    else if (headcopy->next == NULL)
    {
        free(headcopy);
        headcopy = NULL;
    }

    else
    {
        node* lastnodelink =  headcopy;
        
        while(lastnodelink->next->next!=NULL)
        {
            
            lastnodelink = lastnodelink->next;

        }
        free(lastnodelink->next);
        lastnodelink->next = NULL;
        
        

    }
    return headcopy;
} 
