#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void insertBeginning(node **head,int value){
    node* newnode= new node;
    newnode->data=value;
    newnode->next=*head;
    *head=newnode;
}

void insertend(node **head,int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->next=nullptr;
    if(*head==nullptr){
        *head=newnode;
        return;
    }
    node* temp=*head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
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
    int value,endval,begins;
    cin>>value;
    insertBeginning(&head,value);
    cin>>begins;
    insertBeginning(&head,begins);
    print(head);
    cin>>endval;
    insertend(&head,endval);
    print(head);

    return 0;
}
