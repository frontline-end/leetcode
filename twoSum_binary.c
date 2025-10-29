#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void *a, const void *b) { return (*(int *)a) - (*(int *)b); }

bool binarySreach(int *arr, int left, int right, int target) {
  while (left <= right) {
  int mid = left + (right - left) / 2;    
    if (arr[mid] == target){
      return true;
    }
    if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;      
    }
  }
  return false;
}

bool twosum(int *arr, int size, int target) {
  qsort(arr, size, sizeof(int), compare);
  for (int i = 0; i < size - 1; i++) {
    int complement = target - arr[i];
    if (binarySreach(arr, i + 1, size - 1, complement)) {
      return true;      
    }
  }
  return false;
}

int main() {  

  int arr[] = {1, 2, 3, 4};
  int target = 3;

  size_t size = sizeof(arr) / sizeof(arr[0]);

  printf("%d", twosum(arr, size, target));  
   
  return EXIT_SUCCESS;  
}  
