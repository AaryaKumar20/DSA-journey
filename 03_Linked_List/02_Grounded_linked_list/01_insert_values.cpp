#include <iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

node* constructhead(){
    node*head=new node;
    head->data=-1;
    head->next=nullptr;
    return head;
}

void insertvalue(node**head,int val){
    node*newnode=new node;
    newnode->data=val;
    newnode->next=nullptr;
    node*temp= *head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;

}
void insertbeg(node*head,int val){
    node*newnode= new node;
    newnode->data=val;
    newnode->next=head->next;
    head->next=newnode;
}
void insertpos(node*head,int val,int pos){
    node*newnode= new node;
    newnode->data=val;
    newnode->next=nullptr;

    node*temp = head;
    int countt=0;
    while(temp!=nullptr&&countt<pos-1){
        temp=temp->next;
        countt++;
    }
    if(temp==nullptr){
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print(node*head){
    node*temp=head->next;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=constructhead();
    insertvalue(&head,10);
    insertvalue(&head,20);
    insertvalue(&head,30);
    insertvalue(&head,40);
    insertvalue(&head,60);
    print(head);
    insertbeg(head,5);
    print(head);
    insertpos(head,50,6);
    print(head);
    return 0;
}
