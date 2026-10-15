#include <stdio.h>

int main(){
  int arr[5] = {10,20,30,40,50};
  printf("%d\n", arr);  //address of arr //6422284
  printf("%d\n",*arr);  //address inside arr pointer, i.e value of arr[0] //10
  printf("%d\n", *arr+1); //value+1  //11
  printf("%d\n", *(arr+1)); //address of arr[0](value) + 1 = arr[1] //20
  printf("%p\n", arr + 1);  //address of arr[0]+1 = arr[1]  //0061FF10
}