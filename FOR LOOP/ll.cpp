#include<iostream>
using namespace std;
class node {
    public:
    int data ;
    node*next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class list {
node*head;
node*tail;
public:
list(){
    head=NULL;
    tail=NULL;
}
void pusb_back(int val){
    node *newnode=new node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
         newnode->next=head;
         head =newnode;
    }    
}
void print(int pos){
    node *temp=head;
    for(int i=0;i<pos;i++){
        cout <<temp->data<<endl;
        temp=temp->next;
        
    }
}
};
 
int main (){
    list ll;
      ll.pusb_back(24);
       ll.pusb_back(23);
        ll.pusb_back(34);
    ll.pusb_back(2);
    ll.print(2);
    return 0;
}