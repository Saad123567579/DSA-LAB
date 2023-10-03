// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;
    
//     Node(int v) {
//         data = v;
//         next = NULL;
//         prev = NULL;
//     }
// };

// class DoublyLinkedList {
// public:
//     Node* head;
//     Node* tail;
//     int length ;


//     DoublyLinkedList() {
//         head = NULL;
//         tail = NULL;
//         length = 0;
//     }

//     void insertHead(int x) {
//         Node* newNode = new Node(x);
//         if (head == NULL && tail == NULL) {
//             head = newNode;
//             tail = newNode;
//             head->next = tail;
//             tail->prev = head;
//             tail->next = head;
//             length++;
//             return;
//         }
//         newNode->next = head;
//         head->prev = newNode;
//         head = newNode;
//         tail->next = head;
//         length++;
//     }

//     void insertTail(int x) {
//         Node* newNode = new Node(x);
//         if (head == NULL && tail == NULL) {
//             head = newNode;
//             tail = newNode;
//             head->next = tail;
//             tail->prev = head;
//             tail->next = head;
//             length++;
//             return;
//         }
//         tail->next = newNode;
//         newNode->prev = tail;
//         newNode->next = head;
//         head->prev = newNode;
//         tail = newNode;
//         length++;
//     }
    
//     int getLength(){
//         return length;
//     }

//     void display() {
//         Node* temp = head;
//         cout<<endl;
//         int i = 1;
//         while(i<=length){
//             cout<<" "<<temp->data;
//             temp = temp->next;
//             i++;
//         }
       
//         cout<<endl;
//         return;
//     }

//     void insertK(int index, int val) {
//         Node* newNode = new Node(val);
//         Node* temp = head;
//         if(temp == NULL)  {
//             head = newNode;
//             tail = newNode;
//             head->next = tail;
//             tail->prev = head;
//             tail->next = head;
//             length++;
//             return;
//        }
//        if(index <= 0 || index>length) {cout<<"Invalid Index";return;}
//        if(index == 1){ //insert at start
//            newNode->next = head;
//            head->prev = head;
//            tail->next = newNode;
//            newNode->prev = tail;
//            head = newNode;
//              length++;
//            return;
//        }
//        if(index == length){//insert tail
//            tail->next = newNode;
//            newNode->prev = tail;
//            newNode->next = head;
//            head->prev = newNode;
//            tail = newNode;
//              length++;
//            return;
//        }
//        int i=1;
//        while(i<=index){
           
//            temp=temp->next;
//            i++;
//        }


//        Node* prevNode = temp->prev;
//        Node* nextNode = temp->next;
//        prevNode->next = newNode;
//        newNode->prev = prevNode;
//        newNode->next = temp;
//        temp->prev = newNode;
//        temp->next = nextNode;
//        nextNode->prev = temp;
//         length++;

//        return;
//     }
    
//     void deleteK(int index){
//         Node* temp = head;
//        if(index <= 0 || index>length) {cout<<"Invalid Index";return;}
//        if(temp == NULL)  {cout<<"Empty List";return;}
//        if(index == 1){//delete head
//            Node* t = head->next;
//            tail->next = t;
//            t->prev = tail;
//            head = t;
//            length--;
          
//            return;
//        }
//        if(index == length){//delete tail
//            Node* t = tail->prev;
//            t->next = head;
//            head->prev = t;
//            length--;
//            return;
//        }
//        int i=1;
//        while(i<=index){
//            temp=temp->next;
//            i++;
//        }
//        Node* prevNode = temp->prev;
//        Node* nextNode = temp->next;
//        prevNode->next = nextNode;
//        nextNode->prev = prevNode;
//        length--;
//        return;
       
       
//     }
// };
// int main() {
//     DoublyLinkedList list;

//     int choice;
//     int value, index;

//     while (true) {
//         cout << "Doubly Linked List Menu:" << endl;
//         cout << "1. Insert at Head" << endl;
//         cout << "2. Insert at Tail" << endl;
//         cout << "3. Insert at Index" << endl;
//         cout << "4. Delete at Index" << endl;
//         cout << "5. Display List" << endl;
//         cout << "6. Get Length" << endl;
//         cout << "7. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter value to insert at head: ";
//             cin >> value;
//             list.insertHead(value);
//             break;
//         case 2:
//             cout << "Enter value to insert at tail: ";
//             cin >> value;
//             list.insertTail(value);
//             break;
//         case 3:
//             cout << "Enter index and value to insert at index: ";
//             cin >> index >> value;
//             list.insertK(index, value);
//             break;
//         case 4:
//             cout << "Enter index to delete: ";
//             cin >> index;
//             list.deleteK(index);
//             break;
//         case 5:
//             list.display();
//             break;
//         case 6:
//             cout << "Length of the list: " << list.getLength() << endl;
//             break;
//         case 7:
//             return 0;
//         default:
//             cout << "Invalid choice. Please try again." << endl;
//         }
//     }

//     return 0;
// }
