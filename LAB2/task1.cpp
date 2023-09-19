//static memory allocation (stack)  memory is allocated at the compile time 
//their lifetime is tied to the scope in which they are defined 
//dynamic memory allocation (heap) memory is allocated at the run time (manual memory management)
// they remain in the memory as long as u dont explicitly deallocate it your self using delete[] command 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "Enter the size: " << endl;
//     cin >> size;
//     int *salary = new int[size];
//     int i;
//     for (i = 0; i < size; ++i)
//     {
//         cout << "Enter Salary: ";
//         cin >> *(salary+i);
//     }
//     for (i = 0; i < size; ++i)
//     {
//         *(salary+i) = *(salary+i) + *(salary+i) / (i + 1);
//     }
//     // Corrected delete statement
//     delete[] salary;

//     return 0;
// }


