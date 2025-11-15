#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void insertend(node** head,int val){
    node* newnode= new node;
    newnode->data=val;
    newnode->next=nullptr;
    if(*head==nullptr){
        *head =newnode;
        return;
    }
    node* temp= *head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}
void deleteatposition(node ** head,int pos){
    if(*head == nullptr){
        return;
    }

    if(pos==1){
        node* todelete= *head;
        *head= (*head)->next;
        delete todelete;
        return;
    }
    node* temp= *head;
    int countt=1;
    while(temp!=nullptr&&countt<pos-1){
        temp=temp->next;
        countt++;
    }
    if(temp == nullptr || temp->next == nullptr){
    cout<<"Position out of bounds"<<endl;
    return;
    }
    node* todelete=temp->next;
    temp->next=todelete->next;
    delete todelete;
}

void print(node* head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=nullptr;
    insertend(&head,10);
    insertend(&head,20);
    insertend(&head,30);
    insertend(&head,40);
    print(head);
    int pos;
    cout<<"Enter position to delete at: ";
    cin>>pos;
    deleteatposition(&head,pos);
    print(head);

    return 0;
}
