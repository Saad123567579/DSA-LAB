// #include<iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// Node(int val){
// data = val;
// next = NULL;
// }
// };
// class Queue{
// private:
// Node* head;
// Node* tail;
// public:
// Queue(){
//   head = NULL;
//   tail = NULL;
// }
// void enqueue(int val){
//   Node* newNode = new Node(val);
//   if(head == NULL){
//     head = newNode;
//     tail = newNode;
//     return;
//   }
//   tail->next = newNode;
//   tail = newNode;
//   return;
// }
// void dequeue(){
//   if(head == NULL){
//     cout<<"Underflow"<<endl;
//     return;
//   }
//   Node* temp = head;
//   head = head->next;
//   delete temp;
//   return;
// }

// void front(){
//   if(head == NULL){
//     cout << "Queue is empty" << endl;
//   } else {
//     cout << head->data << endl;
//   }
// }


// bool isEmpty(){
//   return head==NULL;
// }


// };
// int main(){

//   Queue *q1 = new Queue();
//   q1->front();
  
//   q1->enqueue(5);
//   q1->front();
//   q1->dequeue();
//   q1->enqueue(6);
//   q1->front();


  
// }