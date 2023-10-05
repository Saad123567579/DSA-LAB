// #include<iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;

// Node(int x){
//   data = x;
//   next = NULL;
// }
// };
// class Stack{
// private:
// Node* head;
// public:
// Stack(){
//   head = NULL;
// }
// void push(int x){
//     Node* newNode = new Node(x);
//   if(head == NULL){
//     head = newNode;
//     return;
//   }
//   newNode->next = head;
//   head = newNode;
//   return;
// }

// void pop(){
//   if(head == NULL){
//     cout<<endl<<"UnderFlow Error"<<endl;
//     return;
//   }
//   Node* t = head;
//   head = head->next;
//   delete t;
//   return;
// }

// int top(){
//   if(head==NULL){
//     return -1;
//   }
//   return head->data;
// }


// };

// int main(){
//   Stack *s1 = new Stack();
  
//  s1->pop();
//   cout<<s1->top();

// }