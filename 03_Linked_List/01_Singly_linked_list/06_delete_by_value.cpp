#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void insertend(node**head,int val){
    node* newnode=new node;
    newnode->data=val;
    newnode->next=nullptr;
    if(*head==nullptr){
        *head=newnode;
        return;
    }
    node*temp= *head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void deletebyvalue(node**head,int value){
    if(*head==nullptr){
        return;
    }
    if((*head)->data==value){
        node* todelete= *head;
        (*head)=(*head)->next;
        delete todelete;
        return;
    }
    node*temp= *head;
    while(temp->next!=nullptr&& temp->next->data!=value){
        temp=temp->next;
    }
    if(temp==nullptr||temp->next==nullptr){
        cout<<"No such value"<<endl;
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
    node*head=nullptr;
    insertend(&head,10);
    insertend(&head,20);
    insertend(&head,30);
    insertend(&head,40);
    print(head);
    int value;
    cout<<"Value to delete: ";
    cin>>value;
    deletebyvalue(&head,value);
    print(head);
    return 0;
}
