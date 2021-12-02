#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    node* head = (node*) new node();
    node* reverse(node* headcopy);
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
    head = reverse(head);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}

 node* reverse(node* headcopy)
{
    node* ptr;
    node* traverse = headcopy;
    if(traverse->next==NULL)
    {
       headcopy= traverse;
       return traverse;
    }
    else 
    {
    ptr = reverse(traverse->next); //recursive calling
    node* set = traverse->next;
    set->next = traverse;
    traverse->next = NULL;
    return headcopy;
    }
    



}