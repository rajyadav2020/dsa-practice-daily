#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node*next;

  Node(int val){
    data = val;
    next = nullptr;
  }

};

int main(){
  Node*head = new Node(1);

  Node*newnode = new Node(2);
  head->next = newnode; //establishing a connection

  Node*thirdnode = new Node(3);
  newnode->next = thirdnode;

  //printing the linkedlist or iterate the linkedlist
  Node*temp = head;

  while(temp != nullptr){

    cout << temp->data<<" ";
    temp = temp->next;
  }
}