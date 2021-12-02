#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    int deletefirst(struct node** head);
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
    deletefirst(&head);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}

int deletefirst(struct node** head)
{
    if (head==NULL)
        cout<<"List is empty"<<endl;
    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
         node* temp = *head;
         *head = temp->next;
         free(temp);
         temp = NULL;

    }
   
}