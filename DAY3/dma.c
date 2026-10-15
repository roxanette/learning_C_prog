#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 5;
  int *ptr = (int*)malloc(n*sizeof(int)); //use(int*) to convert garbage value from string-->int

  ptr[0] = 1;
  free(ptr);  //done automatically in python
  int nums = 1202105;

  int *freq = (int*)calloc(10,sizeof(int));

  while(nums > 0){
    int d = nums%10;
    freq[d]++;
    nums = nums/10;
  }
  for(int i = 0; i < 7; i++){
    printf("Freq of digit[%d]: %d\t", i, freq[i]);
    printf("\n");
  }
  free(freq);
}