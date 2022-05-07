#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

using namespace std;



void print(float a, string separator) {
    cout << a << separator;
}


void print(string str, string separator ) {
    cout << str << separator;
}

void print(string str, int a, string separator ) {
    cout << str << a << separator;
}




int main()
{

    print(5, "\n");
    print(5, "\n");
    print(5, "\n");
    print(5, "\n");
    print(5, "\n");
    print("Hello", "\n");
    print(5, "\n");
    print(5, "\n");
    print(5, "\n");
    print("Text...", 13, "\n");
    print(5, "\n");
    print(5, "\n");
    print("Hello", "\n");
    print(12.34, "\n");


    // To not close the command line immediately
    // Note: Comment if you run in Sublime 
    // system("read"); //for UNIX
    // system("pause"); //for Windows
    return 0;
}






