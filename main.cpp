#include <iostream>
#include "search.h"

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 6;
  int expected = 4;

  //Both function calls will print the index in the list array 
  //where the target number is located  
  std::cout << "     Expected: " << expected << std::endl
            << "Linear Search: " << LinearSearch(list,array_length,number) <<  std::endl
            << "Binary Search: " << BinarySearch(list,array_length,number) <<  std::endl;

  return 0;
}