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
    void print(node* headcopy);
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
    print(head);
    return 0;
}

void print(node* headcopy)
{
    if(headcopy==NULL)
    return;
    print(headcopy->next); //recursive calling
    cout<<headcopy->data<<endl;


}