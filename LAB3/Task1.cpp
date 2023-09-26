// #include<iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// Node(int val){
//   data = val;
//   next = NULL;
// }
// };
// class LinkedList{
// public:
// Node* head;
// LinkedList(){
//   head = NULL;
// }

// void insertHead(int v){
//   Node* newNode = new Node(v);
//   newNode -> next = head;
//   head = newNode;
// }

// void insertAtThird(int v){
//   Node* newNode = new Node(v);
//   Node* temp = head;
//   if(temp == NULL || temp->next == NULL || temp->next->next == NULL){
//     return cout<<"\nInvalid Command\n";
//   }
//   Node* t = temp->next->next;
//   temp=temp->next;
//   temp->next = newNode;
//   newNode->next = t;
//   return cout<<"\nSuccessfully Inserted at 3\n";

// }

// void display(){
//   Node* temp = head;
//   while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp = temp->next;
//   }
// }

// void deleteNode(){
//   int index;
//   cout<<endl<<"\nWhich Node do you want to delete. Name the index \n";
//   cin>>index;
//   int i = 0;
//   if(index<0){
//     return cout<<"\nInvalid Index\n";
//   }
//   if(index == 0){
//     Node* p = head;
//     head = head -> next;
//     delete p;
//   }
//   Node* temp = head;
//   while(temp!=NULL){
    
//     if(i==index-1) break;
//     temp = temp->next;
//     i++;
    
//   }
//   if(temp == NULL){
//     return cout<<"\nInvalid Index\n";
//   }
//   Node* d = temp->next;
//   temp->next = temp->next->next;
//   delete d;
//   cout<<"\nSuccessfully Deleted\n";
  
  
// }

// int count(){
//   int i=0;
//   Node* temp = head;
//   while(temp != NULL){
//     temp = temp->next;
//     i++;
//   }
//   return i;
// }

// };

// int main() {
//     LinkedList myList;
//     int choice;

//     while (true) {
//         cout << "Menu:" << endl;
//         cout << "1. Insert at Head" << endl;
//         cout << "2. Insert at Third Position" << endl;
//         cout << "3. Display List" << endl;
//         cout << "4. Delete Node" << endl;
//         cout << "5. Count Nodes" << endl;
//         cout << "6. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: {
//                 int value;
//                 cout << "Enter value to insert: ";
//                 cin >> value;
//                 myList.insertHead(value);
//                 break;
//             }
//             case 2: {
//                 int value;
//                 cout << "Enter value to insert: ";
//                 cin >> value;
//                 myList.insertAtThird(value);
//                 break;
//             }
//             case 3:
//                 cout << "Linked List: ";
//                 myList.display();
//                 cout << endl;
//                 break;
//             case 4:
//                 myList.deleteNode();
//                 break;
//             case 5:
//                 cout << "Number of nodes: " << myList.count() << endl;
//                 break;
//             case 6:
//                 return 0;  // Exit the program
//             default:
//                 cout << "Invalid choice" << endl;
//         }
//     }

//     return 0;
// }
