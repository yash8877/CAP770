#include<iostream>
using namespace std;

//creation of node
class Node{
    public:
    int data;
    Node* next;

    //constructor to inistalization
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


 void InsertAtbegning(Node* &head, int d){
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
 }

 void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
 }


int main(){
    Node* node1 = new Node(101);
    Node* node2 = new Node(102);
    cout<<node1->data<<endl;
    cout<<node2->data<<endl;
    cout<<node2->next;
    return 0;

}