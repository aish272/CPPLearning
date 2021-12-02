// works fine on gdb but won't work on codeblocks
#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    int insertatend(struct node* headcopy);
    node* head = (node*) new node();
    head->data = 78;
    head->next = NULL;
    node* current = (node*) new node();
    current->data = 88;
    current->next = NULL;
    head->next = current;
    insertatend(head);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}
 int insertatend(struct node* headcopy)
 {
    node*  temp = (node*) new node();
    temp->data = 111;
    temp->next = NULL;
    while(headcopy->next!=NULL)
    {
        headcopy = headcopy->next;
    }
    headcopy->next = temp;
 }