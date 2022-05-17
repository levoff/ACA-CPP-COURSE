#include <iostream>
#include "library.h"

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

