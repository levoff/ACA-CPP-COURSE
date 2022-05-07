#include <iostream>

using namespace std;



int main()
{

    string str_string = "";
    cout << "Enter words: ";
    getline(std::cin,str_string); // will get "unlimited" number of charcters


    char str_char[32];
    cout << "Enter words: ";
    std::cin.getline(str_char, 32); // will get maximum 32 characters 
    // std::cin.getline(str_char, 32); // will get maximum 32 characters or less, if there is a ,(comma) character
    // std::cin.get(str_char, 32, ',');


    cout << "Entered string is: " << str_string << endl;
    cout << "Entered char array is: " << str_char << endl;

    // !!! NOTE: 
    // getline() function works with C++ std::string objects.
    // cin.getline() and cin.get() work with "classic" C style strings



    // To not close the command line immediately
    // Note: Comment if you run in Sublime 
    // system("read"); //for UNIX
    // system("pause"); //for Windows
    return 0;
}


