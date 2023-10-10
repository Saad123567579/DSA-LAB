// #include<iostream>
// using namespace std;

// class Stack{
// private:
// char *array ;
// int ptrIndex;
// int size;
// public:
// Stack(int s){
//   size = s;
//   ptrIndex = -1;
//   array = new char[size];
  
// }

// bool isFull(){
//   return ptrIndex == size - 1;
// }
// bool isEmpty(){
//   return ptrIndex == -1;
//   }

// void push(char data){
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

// char top(){
//   if(ptrIndex == -1){
//     cout<<endl<<"Stack UnderFlow"<<endl;
//     return -1;
//   }
//   return array[ptrIndex]; 
// }

// };
// bool isBalanced(string s1){
//     const string openingBrackets = "({[";
//     const string closingBrackets = ")}]";
//     Stack *stack = new Stack(100);
//     for( char ch:s1){
//         if(openingBrackets.find(ch) != string::npos){
//             stack->push(ch);
//             cout<<stack->top();
//         }
//         else if (closingBrackets.find(ch) != string::npos){
//             if(stack->isEmpty()) {cout<<"It is empty so returning 1";return false;}
//             char top = stack->top();
//             if(top=='(' && ch==')'){ stack->pop(); }
//             else if(top=='[' && ch==']') {stack->pop();}
//             else if(top=='{'&& ch=='}'){stack->pop();}
//             else {return false;}
            
//         }
//     }
    
//     return stack->isEmpty();

    
// }


// int main(){
    
//     string s1;
//     cout<<"Enter the string:"<<endl;
//     cin>>s1;
//     if(isBalanced(s1)){
//         cout<<endl<<"Correct";
//     }
//     else {
//          cout<<endl<<"Wrong";
//     }
    
   
    
    
    
    
  
   


// }