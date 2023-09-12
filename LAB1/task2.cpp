// Answer 1: The memory address stored in pointer pa vary by 4 because
//   the shifting depends on the type of variable and the size it occupies. 
//   Since an inegers occupies 4 bytes thats why the adress is shifted by 4 when we increment or decrement 
// Answer 2: If the datatype is changed from int to long the address will be shifted by a factor of 8. This is because long occupies 8 bytes compared to in which only occupies only 4 bytes.

// Answer 3: Below you can see that i have tried to multiply the adress but its giving me an invalid operand to binary expressions error. In pointer arithmatic we only increment or decrement the adresses. But here we are trying to multiply the adress which is not possible in case of pointer. 
  

//   #include<iostream>
//   using namespace std;
// int main(){
//   int a;
//   int *pa;
//   pa = &a;
//   cout<<pa<<endl;
//   pa = pa * 2;
//   cout<<pa<<endl;
// }
