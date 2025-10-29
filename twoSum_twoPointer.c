#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool twoSum(int *arr, int target, int size) {

  int left = 0, right = size - 1;

  while (left <= right) {
    int complement = arr[left] + arr[right];
    if (complement == target) {
      return true;
    }
    if (complement < target) {
      left = left + 1;
    } else {
      right = right - 1;      
    }      
  }    
  
  return false;  
}  
int main() {

  int size = 5;
  int arr[size];

  for (int i = 0; i < size; i++) {
    *(arr + i) = i;
  }

  int target = 100;
  
  printf("%d", twoSum(arr, target, size));  
  return EXIT_SUCCESS;  
}  
