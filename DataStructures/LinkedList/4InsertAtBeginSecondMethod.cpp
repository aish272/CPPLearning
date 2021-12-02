#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    int createbegin2(struct node** headcopy);
    node* head = (node*) new node();
    head->data = 78;
    head->next = NULL;
    node* current = (node*) new node();
    current->data = 88;
    current->next = NULL;
    head->next = current;
    createbegin2(&head);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }

    return 0;
}

int createbegin2(struct node** headcopy)
{
    node* temp = new node();
    temp->data = 56;
    temp->next = *headcopy;
    *headcopy = temp;
    return 0;
}