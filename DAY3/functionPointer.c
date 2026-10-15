#include<stdio.h>

int add(int a, int b){
  return a+b;
}

int main(){
  int (*ptr)(int,int) = add;
  int x = 10;
  //int y = 10
  //p=&y;
  int *const p = &x;//constant pointer // updation of address-no // updation of value-yes //cant do *p = y for int y = 10
  *p = 50;
  printf("%d\n", x);
  printf("%d\n", ptr(10,20)); // can pass values in function


}