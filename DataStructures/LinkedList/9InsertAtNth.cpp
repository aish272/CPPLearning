#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};
int main(void)
{
    int insertatnth(node* headcopy,int pos);
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
    int pos = 2;
    insertatnth(head,pos);  
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}
int insertatnth(node* headcopy,int pos)
{
    node* temp = new node();
    temp->data = 444;
    temp->next = NULL;
    pos -= 1;
    while(pos>1)
    {
        headcopy = headcopy->next;
        pos--;
    }
    temp->next = headcopy->next;
    headcopy->next = temp;


}