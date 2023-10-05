// #include<iostream>
// using namespace std;

// class Stack{
// private:
// int *array ;
// int ptrIndex;
// int size;
// public:
// Stack(int s){
//   size = s;
//   ptrIndex = -1;
//   array = new int[size];
  
// }

// bool isFull(){
//   return ptrIndex == size - 1;
// }
// bool isEmpty(){
//   return ptrIndex == -1;
//   }

// void push(int data){
//   if(ptrIndex == size - 1){
//     cout<<endl<<"Stack Overflow"<<endl;
//     return;
//   }
//   ptrIndex++;
//   array[ptrIndex] = data;
//   cout<<endl<<"Successfully Pushed"<<endl;
  
  
// }
// void pop(){
//   if(ptrIndex == -1){
//     cout<<endl<<"Stack UnderFlow"<<endl;
//     return;
//   }
//   ptrIndex--;
//   cout<<endl<<"Successfully Popped"<<endl;
// }

// int top(){
//   if(ptrIndex == -1){
//     cout<<endl<<"Stack UnderFlow"<<endl;
//     return -1;
//   }
//   return array[ptrIndex]; 
// }

// };


// int main(){
//   Stack *s1 = new Stack(5);
//   s1->pop();
//   s1->push(1);
//   cout<<s1->top();
//   s1->push(2);
//   cout<<s1->top();
//   s1->push(3);
//     s1->push(4);
//   s1->push(5);

//   cout<<s1->top();

//    s1->push(6);

//   cout<<s1->top();
   


// }