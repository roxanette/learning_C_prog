#include <stdio.h>
#include <stdlib.h>

int main(){
  int *arr = malloc(3*sizeof(int));

  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;

  int *temp = realloc(arr, 5*sizeof(int)); //2 more memory blocks will be added for 100 and 50
  arr=temp;                //to reallocate for lesser, just right 5 above and 3 down(int realloc), it removes those memory block
  arr[3] = 100;
  arr[4] = 50;

  for(int i = 0; i < 5; i++){
    printf("%d\t", arr[i]);
  }
  printf("\n");
  free(arr);
  free(temp);
}