// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(int x){
//         data = x;
//         next = NULL;
//         prev = NULL;
//     }
    
// };
// class DoublyLinkedList{
//     public:
//     Node *head;
//     Node *tail;
//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }
//     void insertHead(int val){
//         Node *newNode = new Node(val);
//         if(head==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             newNode->next = head;
//             head->prev = newNode;
//             head = newNode;
//         }
//     }
//     void insertTail(int val){
//         Node* newNode = new Node(val);
//         if(tail==NULL){
//             head = newNode;
//             tail = newNode;
//         }
//         else{
//             tail->next = newNode;
//             newNode->prev = tail;
//             tail = newNode;
//         }
//     }
//     void deleteHead(){
//         if(head==NULL) return;
//         if(head==tail){
//             delete head;
//             head = NULL;
//             tail = NULL;
//             return;
//         }
//         if(head && head->next){
//             Node* temp = head;
//             head = head->next;
//             head->prev = NULL;
//             delete temp;
//             return;
//         }
        
       
//     }
//     void deleteTail(){
//         if(tail==NULL) return;
//         if(head == tail){
//             delete head;
//             head = NULL;
//             tail = NULL;
//             return;
//         }
        
//             Node* temp = tail;
//             tail = tail->prev;
//             tail->next = NULL;
//             delete temp;
//             return;
        
        
//     }
    
//     bool isEmpty(){
//         return head == NULL;
//     }
//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//     }
// };

// int main(){
//     DoublyLinkedList *l1 = new DoublyLinkedList();
//     l1->insertHead(1);
//     l1->insertHead(2);
//     l1->insertHead(3);
//     l1->insertHead(4);
//     l1->display();

    
    
//     return 0;
// }



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int v){
        data = v;
        next = NULL;
        prev = NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head ;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
        
    }
    
void insertHead(int x) {
    Node* newNode = new Node(x);
    if(head == NULL && tail == NULL){
        head = newNode;
        tail = newNode;
        head->next = tail;
        
        tail->prev = head;
        tail->next = head;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    tail->next = head;
}

void insertTail(int x) {
    Node* newNode = new Node(x);
    if(head == NULL && tail == NULL){
        head = newNode;
        tail = newNode;
        head->next = tail;
        tail->prev = head;
           tail->next = head;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
    tail = newNode;
   
}

void display(){
    Node* temp = head;
    while(temp ){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}
    
};

int main(){
     DoublyLinkedList *list = new DoublyLinkedList ;
    list->insertHead(1);
    list->insertHead(2);
      list->insertHead(3);
        list->insertHead(4);
          list->insertHead(5);
    
    list->display();
}