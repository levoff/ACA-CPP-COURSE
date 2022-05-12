// #include <iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//   string letters[2][4] = {
//     {"A", "B", "C", "D"}, 
//     {"E", "F", "G", "H"}
// };

//   cout << letters[1][2]<<'\n';

//   return 0;
// }


// #include <iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {

//   string food = "Pizza";
//   string &meal = food;

//   cout << food << "\n";  // Outputs Pizza
//   cout << &food << "\n";  // Outputs address of Pizza
//   cout << meal << "\n";  // Outputs Pizza


//   return 0;
// }


// #include <iostream>


// using namespace std;

// int main(int argc, char const *argv[])
// {
//   int i;

//   cin>>i;

//   std::cout << std::boolalpha;
//   cout << (4>i<2) << '\n';
//   cout << (4>i && i>2) << '\n';



//   return 0;
// }



// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   int x = 1;
//   cin >> x;
  
//   char str1[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'}; // we have to manually add '\0' at the end of the char array and then it becomes as string
//   char str2[] = "Hello World"; //compiler automatically adds '\0'
//   string str3 = "Hello World";


//   cout << str1 <<" | length : "<< sizeof(str1)/sizeof(char) << endl;
//   cout << str2 <<" | length : "<< sizeof(str2)/sizeof(char) << endl;
//   cout << str3 <<" | length : "<< str3.length() << endl;


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










