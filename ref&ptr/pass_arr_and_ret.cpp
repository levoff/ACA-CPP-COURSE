


#include <algorithm>
#include <iostream>


using namespace std;

// Array sorting with bubble sort method
int sort(int arr[], int arr_len)
{
     int i, j, swap_var;

    for (i = 0; i < arr_len - 1; i++) 
    {
        bool flag = true;

          for (j = 0; j < arr_len - i - 1; j++) 
          {


                if (arr[j] > arr[j + 1])  //For decreasing order use < 
                {
                  swap_var = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = swap_var;

                  //print_arr(arr, arr_len);
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


    return 0;
}


int* fill_array_with(int arr[], int len, int from, int to, int with)
{
  static int arr2[13];

  for (int i = 0; i < 13; ++i)
  {
    arr2[i] = arr[i];
  }


  for (int i = from; i <= to; ++i)
  {
    arr2[i] = with;
  }

  return arr2;
}


void print_arr(int arr[], int arr_len) {

    for (int i = 0; i < arr_len; i++)
        std::cout <<  arr[i] << ", ";

    std::cout << '\n';
}


#define init {1,2,3,4,5,6,7,8,9, 10, 11, 12, 45}







int main()
{

    int arr2[13] = init;

    int arr3[];

   















    int arr123[13] = {1,2,3,4,5,6,7,8,9, 10, 11, 12, 45};

    // int arr1[] = {1, 4, 100, 43, 9, 0, 8, 71, 16, 123, 5, 986, 54};
    
    // int array_length = sizeof(arr1) / sizeof(int);
    

    // print_arr(arr1, array_length);
    
    // sort(arr1, array_length);
    
    // print_arr(arr1, array_length);






    // int arr2[13] = {1,2,3,4,5,6,7,8,9, 10, 11, 12, 45};


    print_arr(arr2, 13);

    
    
    int* abc = fill_array_with(arr2, 13, 10, 13, 0);

    // for (int i = 13; i >= 0; i--)
    // {
    //   cout << *(abc+i) << ", ";
    // }
    for (int i = 0; i < 13; i++)
    {
      cout << abc[i] <<',' << *(abc+i) << ", ";
    }
    
    cout << '\n';

    print_arr(arr2, 13);


  return 0;    
}

