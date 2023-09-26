// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// class SinglyLinkedList{
//     public:
//     Node *head;
//     SinglyLinkedList(){
//         head = NULL;
//     }
//     bool isEmpty(){ // check empty function
//         return head == NULL;
//     }
//     //insertion
//     void insertHead(int val){ // insert head
//          Node* newNode = new Node(val);
//         if(head == NULL){
//             head = newNode;
//             return;
//         }
//         newNode->next = head;
//         head = newNode;
//     }
//     void insertTail(int val){ // insert tail
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next!=NULL){
//             temp = temp->next;
//         }
//         temp->next = newNode;
        
//     }
    
//     void insertK(int k,int val){ //insert K
//         Node* newNode = new Node(val);
//         if(k<=0) return;
//         if(k==1){
//             newNode->next = head;
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         int i=1;
//         while(i<k-1){
//             if(temp == NULL) return;
//             i++;
//             temp = temp -> next;
//         }
//         if(temp == NULL )return;
//         if(temp->next == NULL){
//             temp->next = newNode;
//             return;
//         }
//         Node*t = temp->next;
//         temp->next = newNode;
//         newNode->next = t;
//     }
//     //deletion
//     void deleteHead() { // delete head
//         if(head == NULL) return;
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }
//     void deleteTail(){ // delete tail
//         if(head== NULL) return;
//         Node* temp = head;
//         while(temp->next->next != NULL){
//             temp = temp -> next;
//         }
//         Node* t = temp->next;
//         temp->next = NULL;
//         delete t;
        
//     }
//     void deleteK(int k){ //delete K
//     if(head==NULL) return;
//         if(k<=0) return;
//         if(k==1){
//             Node* t = head;
//             head = head->next;
//             delete t;
//             return;
//         }
        
//         int i=1;
//         Node* temp = head;
//         while(i<k-1){
//             if(temp == NULL) return;
//             temp = temp->next;
//             i++;
//         }
//         if(temp == NULL) return;
//         if(temp->next == NULL){
//             return;
//         }
//         Node* t = temp->next;
//         temp->next = temp->next->next;
//         delete t;
//     }
//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
    
//     };
    
// int main(){
//     SinglyLinkedList *l1 = new SinglyLinkedList();
//     l1->insertHead(1);
//     l1->insertHead(2);
//     l1->insertHead(3);
//     l1->insertHead(4);
//     l1->insertHead(5);
//     l1->deleteK(10);
       

    
//     l1->display();
// }