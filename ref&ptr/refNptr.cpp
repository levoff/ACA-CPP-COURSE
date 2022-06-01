#include <__nullptr>
#include <iostream>

using namespace std;



// Pass by reference - C++ only
void swap1(int& x, int& y) {
  int z = x;
  x = y;
  y = z;
}


void swap2(int *x, int *y) {

   int temp;

   temp = *x; /* save the value of x */
   *x = *y;    /* put y into x */
   *y = temp; /* put temp into y */
  
   return;
}


void func(int x, int& y, int* z)
{
    y++;
    cout <<"In func:   "<< x << ", " << y << ", " << *z << ", " << &x << ", " << &y << ", " << &z << endl;
}


void power(int& X)
{
  X = X*X;
}






int main()
{

  // float  x = 10;
  // float& ref = x; // ref is a reference to x.

  // cout << x    << '\n'; // value of x
  // cout << &x   << '\n'; // address of x
  // cout << ref  << '\n'; // reference of x
  // cout << &ref << '\n'; // address of x OR ref

  // // Value of x is now changed to 20
  // ref = 20;
  // cout << "x = " << x << '\n';
 
  // // Value of x is now changed to 30
  // x = 30;
  // cout << "ref = " << ref << '\n';









  // int num = 3;

  // power(num);

  // cout << num << std::endl;









  // int  a = 5;
  // int& b = a;
  // int *c = &a;

  // cout <<"Original1: "<< a << ", " << b << ", " << *c << ", " << &a << ", " << &b << ", " << &c << endl;

  // func(a, b, c);

  // cout <<"Original2: "<< a << ", " << b << ", " << *c << ", " << &a << ", " << &b << ", " << &c << endl;







  int num1 = 10;
  int num2 = 20;


  std::cout << "Before swap: " << num1 <<","<< num2 << "\n";

  // swap1(num1, num2);
  swap2(&num1, &num2);

  std::cout << "After swap: " << num1 <<","<< num2 << "\n";


  return 0;
}









// int main(int argc, char const *argv[])
// {
// 	string food = "Pizza";  // A food variable of type string
// 	string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// 	// Output the value of food (Pizza)
// 	cout << food << "\n";

// 	// Output the memory address of food (0x6dfed4)
// 	cout << &food << "\n";

// 	// Reference:  Output the memory address of food with the pointer (0x6dfed4)
// 	cout << ptr << "\n";

// 	// Dereference: Output the value of food with the pointer (Pizza)
// 	cout << *ptr << "\n";

// 	// Change the value of the pointer
// 	*ptr = "Hamburger";

// 	// Output the new value of the pointer (Hamburger)
// 	cout << *ptr << "\n";

// 	// Output the new value of the food variable (Hamburger)
// 	cout << food << "\n";


// 	return 0;
// }










// Note that the * sign can be confusing here, as it does two different things in our code:

// When used in declaration (string* ptr), it creates a pointer variable.
// When not used in declaration, it act as a dereference operator.


// References are less powerful than pointers

// 1) Once a reference is created, it cannot be later made to reference another object; it cannot be reset. This is often done with pointers. 
// 2) References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing. 
// 3) A reference must be initialized when declared. There is no such restriction with pointers.
// Due to the above limitations, references in C++ cannot be used for implementing data structures like Linked List, Tree, etc. In Java, references don’t have the above restrictions and can be used to implement all data structures. References being more powerful in Java is the main reason Java doesn’t need pointers.
 
// References are safer and easier to use: 

// 1) Safer: Since references must be initialized, wild references like wild pointers are unlikely to exist. It is still possible to have references that don’t refer to a valid location (See questions 5 and 6 in the below exercise) 
// 2) Easier to use: References don’t need a dereferencing operator to access the value. They can be used like normal variables. ‘&’ operator is needed only at the time of declaration. Also, members of an object reference can be accessed with dot operator (‘.’), unlike pointers where arrow operator (->) is needed to access members.
 
// Together with the above reasons, there are few places like the copy constructor argument where pointer cannot be used. Reference must be used to pass the argument in the copy constructor. Similarly, references must be used for overloading some operators like ++.
