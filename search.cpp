/*
* LinearSearch PSEUDOCODE:
* while loop that checks a conditional variable on whether or not-
* -the target value has been found, if not found and the matrix-
* -has not been fully traversed enter loop
*  if the value in the index in the data set is equal to the target-
*  -value
*    set found variable to true
*  else the target value is not equal to the value in the current index
*    go to the next index
* if the target value has not been marked found
*   set the index equal to -1 (error message: target not found)
* return index where target was found
*/

int LinearSearch(int numbers[], int length, int n) {
  bool found = false;

  int count = 0; 

  while (!found && count < length) {
    if (numbers[count] == n) {
      found = true; // breaks the while loop
    }
    else
      count++;
  }

  if (!found)
    count = -1;

   return count;
}

/*
* BinarySearch PSEUDOCODE:
* while the target value has not been found
*   if the two bounds have closed to the point that they are equal-
*   - and the target value is not equal to the value stored in the-
*   - last index being checked
*     exit the while loop, leaving the target value marked not found
*   set mid index to the average of the low and high index
*   if the value stored in the middle index between two bounds- 
*   - is equal to the target value
*     the target value is marked as found
*   else if the value stored in the middle index between two bounds-
*   - is less than the target value
*     Set the low bound equal to the previous middle point + 1
*   else if the value stored in the middle index between two bounds-
*   - is greater than the target value
*     Set the high bound equal to the previous middle point - 1
* if the target value has not been marked found
*   set the index equal to -1 (error message: target not found)
* return index where target was found
*/

int BinarySearch(int numbers[], int length, int n) {
  int low_index = 0,
      high_index = length - 1,
      mid_index;

  bool found = false;

  while (!found) {
    if (low_index == high_index && numbers[low_index] != n)
      break; // if the difference between the two bounds equals
             // 0, then the higher and lower bounds have been 
             // narrowed down to 1 index and if that index
             // is not the target value the while loop will break

    mid_index = (high_index + low_index) / 2;

    if (numbers[mid_index] == n)
      found = true;

    else if (numbers[mid_index] < n)
      low_index = mid_index + 1;  

    else
      high_index = mid_index - 1;
  }

  if (!found)
    mid_index = -1;

  return mid_index;
}
