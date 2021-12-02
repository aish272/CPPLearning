#include<iostream>
using namespace std; 
struct node{
    int data;
    node* next;
};
int main(void)
{
    node* head;
    node* temp;
    node* current;
    head = (node*) new node();
    temp = head;
    head->data = 6;
    head->next = NULL;

    current = (node*) new node();
    temp->next = current;

    current->data = 7;
    current->next = NULL;

    temp  = current;

    current = (node*) new node();
    temp->next = current;

    current->data = 69;
    current->next = NULL;

    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
        
    }


    return 0;
}