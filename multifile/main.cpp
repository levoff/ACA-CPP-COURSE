#include <iostream>
#include "library.h"
#include "library.h"

using namespace std;



int main()
{

    int array[] = {1, 4, 100, 43, 9, 0, 8, 71, 16, 123, 5, 986, 54};
    // int array[] = {0, 1, 4, 5, 8, 9, 16, 43, 54, 71, 100, 123, 986, 1240};
    
    int array_length = sizeof(array) / sizeof(int);
    
    // std::cout << &array[0] << ',' << array << '\n';

    print_arr(array, array_length);

    std::cout << "Maximum number is: " << max_of_arr(array, array_length) << '\n';

    std::cout <<"Average is: " << avg_of_arr(array, array_length) << '\n';

    print_arr(array, array_length);



    // Array sorting with bubble sort method ----------------------------------
    int i, j, swap_var;

    for (i = 0; i < array_length - 1; i++) 
    {

        bool flag = true;

          for (j = 0; j < array_length - i - 1; j++) 
          {


                if (array[j] > array[j + 1])  //For decreasing order use < 
                {
                  swap_var = array[j];
                  array[j] = array[j + 1];
                  array[j + 1] = swap_var;

                  print_arr(array, array_length);
                    flag = false;
                }

                // std::cout << "    j loop\n";

          }

          // std::cout << "i loop\n";

          if (flag)
          {
              break; //optimization if the array is already sorted
          }


    }
    // ------------------------------------------------------------------------

    print_arr(array, array_length);



    // To not close the command line immediately
    // Note: Comment if you run in Sublime 
    // system("read"); //for UNIX
    // system("pause"); //for Windows
    return 0;
}