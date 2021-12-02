#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    node* deletelist(node* headcopy);
    int createlist(node* current, int reqNodes);
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
    head = deletelist(head);
    if(head==NULL)
    cout<<"Complete list deleted."<<endl;
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

node* deletelist(node* headcopy)
{
    if (headcopy==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        node* nextnode = headcopy;
        while(nextnode!=NULL)
        {
            nextnode = nextnode->next;
            free(headcopy);
            headcopy = nextnode;

        }
    }
    return headcopy;
}