#include<iostream>
using namespace std; 
struct node
{
    int data;
    node* next;
};


int main(void)
{
    int create_list(node* headcopy);
    node* head = (node*)new node();
    head->data = 11;
    head->next = NULL;
    create_list(head);
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return 0;
}

int create_list(node* headcopy)
{
    int input, ipdata, i;
    struct node* current;
    cout<<"Enter the number of nodes you want to add: ";
    cin>>input;
    cout<<endl;
    for(i=0;i<input;i++)
    {
        cout <<"Enter the data for the "<<i<<" node. "<<endl;
        cin>>ipdata;
        cout<<endl;
        current = (node*) new node();
        current->data = ipdata;
        current->next = NULL;
        headcopy->next = current;
        headcopy = current;


    }
}

