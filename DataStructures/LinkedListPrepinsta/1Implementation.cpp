#include <iostream>
using namespace std; 
class node
{
    public:
    int data;
    node* next;
};
void create(node** head, int data1)
{
    node* newnode =  new node();
    newnode->data = data1;
    newnode->next = NULL;
    *head = newnode;

}
void addAtBegin(node** head, int data1)
{
    node* newnode = new node();
    newnode->data = data1;
    newnode->next = *head;
    *head = newnode;
}
void addAtEnd(node** head, int data1)
{
    node* newnode = new node();
    newnode->data = data1;
    newnode->next = NULL;
    if(*head==NULL)
    {
        *head = newnode;
        return;
    }
    node* temp = *head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
int calcSize(node* headcopy)
{
    int size = 0;
    while(headcopy!=NULL)
    {
        size++;
        headcopy = headcopy->next;
    }
    return size;
}
void addAtPos(node** head, int pos, int data1)
{
    //calcSize(*head)+1 if there are 5 nodes and user wants to add at 6th pos then we'll have to add 1 to the size. If pos exceeds even this then we'll return. (*head)----> this will pass the address of the first node which will be used to traverse the list. (head)----> this means address of head variable.

    int size = calcSize(*head);
    
    if (pos<1 ||  size+1<pos)  
        return;
    if(pos==1)
        addAtBegin(head,data1);
    pos--;
    node* temp = *head;
    while(pos>1)
    {
        temp = temp->next;
        //cout<<pos<<endl;
        pos--;
        
    }
    node*  newnode = new node();
    newnode->data = data1;
    newnode->next = temp->next;
    temp->next = newnode;

}
void display(node* headcopy)
{
    while(headcopy!=NULL)
    {
        cout<<headcopy->data<<endl;
        headcopy = headcopy->next;
    }
}
int main(void)
{
    node* head = NULL;
    create(&head,8);
    addAtBegin(&head,90);  
    addAtBegin(&head,78);
    addAtEnd(&head,34);
    //cout<<"pos"<<endl;
    addAtPos(&head,4,45); //inserting at last pos.
    addAtPos(&head,2,65);
    display(head);             //78 65 90 8 45 34



    return 0;
}