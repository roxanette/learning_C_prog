#include<stdio.h>
int n = 0;

int main(){
  n = n + 1;
  if(n==5){
    return 0;
  }
  printf("%d\t", n);

  main();//calling the function intialises stack to 0 (it was -1 before calling)
}