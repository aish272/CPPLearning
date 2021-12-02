#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    node* insertbegin(node* headcopy);
    node* head = (node*) new node();
    head->data  = 89;
    head->next  = NULL;
    node* current  = (node*) new node();
    current->data= 99;
    current->next = NULL;
    head->next = current;
    head = insertbegin(head);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}

node* insertbegin(node* headcopy)
{
    node* temp;
    temp->data = 56;
    temp->next = headcopy;
    return temp;

}