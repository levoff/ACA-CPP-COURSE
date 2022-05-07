#include <iostream>
#include <chrono>
#include <thread>
using namespace std;


int max_of_arr(int arr[], int arr_len) {

    int max = arr[0];

    for(int i = 1; i < arr_len; i++) 
    {
        if ( arr[i] > max ) // < for min
        {
            max = arr[i];
        }
    }

    return max;
}



float avg_of_arr(int arr[], int arr_len) {

    // for(int i = 0; i < arr_len; i++) 
    //     arr[0] += arr[i];

    // return (float)arr[0] / arr_len;


    int sum = 0;

    for(int i = 0; i < arr_len; i++) 
        sum += arr[i];

    return (float)sum / arr_len;
}




void print_arr(int arr[], int arr_len) {

    for (int i = 0; i < arr_len; i++)
        std::cout <<  arr[i] << ", ";

    std::cout << '\n';

}



int main()
{
    int array[] = {1240, 1, 4, 100, 43, 9, 0, 8, 71, 16, 123, 5, 986, 54};
    
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
      for (j = 0; j < array_length - i - 1; j++) 
      {
        if (array[j] > array[j + 1])  //For decreasing order use < 
        {
          swap_var = array[j];
          array[j] = array[j + 1];
          array[j + 1] = swap_var;
          //print_arr(array, array_length);
        }
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