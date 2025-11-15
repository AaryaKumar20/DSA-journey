#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void insertBeginning(node **head,int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->next= *head;
    *head=newnode;
}

void insertmiddle(node** head,int pos,int val){
    node* newnode=new node;
    newnode->data=val;
    newnode->next=nullptr;
    if(pos==1){
        newnode->next= *head;
        *head=newnode;
        return;
    }
    node* temp= *head;
    int count=1;
    while(temp!=nullptr&&count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp==nullptr){
        cout<<"Out of index"<<endl;
        delete newnode;
        return;
    }
    newnode->next=temp->next;
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
    insertBeginning(&head,40);
    insertBeginning(&head,30);
    insertBeginning(&head,20);
    insertBeginning(&head,10);
    insertmiddle(&head,3,100);
    print(head);
    return 0;
}
