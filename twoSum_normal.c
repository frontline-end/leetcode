#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *arr, int size, int target) {
  int *arrIndex = malloc(2 * sizeof(int));
  
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if ((arr[i] + arr[j]) == target) {
        arrIndex[0] = i;
	arrIndex[1] = j;        
      }        
    }      
  }    
  return arrIndex;
}

int main() {

  int *arr = malloc(5 * sizeof(int));
  int target = 5;
  
  for (int i = 0; i < 5; i++) {
    *(arr + i) = i;
  }

  int *arrResult = twoSum(arr, 5, target);
  for (int i = 0; i < 2; i++) {
    printf("%d ", arrResult[i]);
  }
  
  free(arr);  
  return EXIT_SUCCESS;  
}  
