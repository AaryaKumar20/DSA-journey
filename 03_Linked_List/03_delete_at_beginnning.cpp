#include <iostream>
using namespace std;
struct node{
    int data;
    node*next;
};

void deletebeg(node **head){
    if(*head==nullptr){
        return;
    }
    if((*head)->next==nullptr){
        delete *head;
        *head==nullptr;
        return;
    }
    node * todelete= *head;
    *head = (*head)->next;
    delete todelete;
}

void insertend(node **head,int val){
    node *newnode= new node;
    newnode->data=val;
    newnode->next=nullptr;

    if(*head==nullptr){
        *head = newnode;
        return;
    }

    node* temp= *head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void print(node *head){
    node* temp= head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node*head=nullptr;
    insertend(&head,10);
    insertend(&head,20);
    insertend(&head,30);
    insertend(&head,40);
    deletebeg(&head);
    print(head);
    return 0;
}
