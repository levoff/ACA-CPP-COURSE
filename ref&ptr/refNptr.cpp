#include <iostream>

using namespace std;

// Pass by reference - C++ only
void swap123(int& x, int& y) {
  int z = x;
  x = y;
  y = z;
}


void power(int& X)
{
  X = X*X;
}

int main()
{

  float  x = 10;

  float& ref = x; // ref is a reference to x.

  cout << x    << '\n'; // value of x
  cout << &x   << '\n'; // address of x
  cout << ref  << '\n'; // reference of x
  cout << &ref << '\n'; // address of x OR ref


  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << '\n';
 
  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << '\n';


  int a = 3;

  power(a);

  cout << a << std::endl;

  int d = 12;
  int f = 45;

  cout << d << ',' << f << '\n';
  
  swap123(d, f);

  cout << d << ',' << f << '\n';

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








// // Pass by reference - C style
// void swap1(int *x, int *y) {

//    int temp;

//    temp = *x; /* save the value of x */
//    *x = *y;    /* put y into x */
//    *y = temp; /* put temp into y */
  
//    return;
// }




// int main() {
//   int firstNum = 10;
//   int secondNum = 20;

//   std::cout << "Before swap: " << firstNum <<","<< secondNum << "\n";


//   // swap1(&firstNum, &secondNum);

//   swap2(firstNum, secondNum);



//   std::cout << "After swap: " << firstNum <<","<< secondNum << "\n";

//   return 0;
// }






// #include <iostream>

// using namespace std;

// void func(int x, int& y, int* z)
// {
//     y++;
//     cout <<"In func:   "<< x << ", " << y << ", " << *z << ", " << &x << ", " << &y << ", " << &z << endl;
// }

// int main (){

//     int  a = 5;
//     int& b = a;
//     int *c = &a;

//     cout <<"Original1: "<< a << ", " << b << ", " << *c << ", " << &a << ", " << &b << ", " << &c << endl;

//     func(a, b, c);

//     cout <<"Original2: "<< a << ", " << b << ", " << *c << ", " << &a << ", " << &b << ", " << &c << endl;

//     return 0;
// }





