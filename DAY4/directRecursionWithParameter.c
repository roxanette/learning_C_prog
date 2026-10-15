#include<stdio.h>

void print(int n){  
  if(n > 5){  //base case
    return;  //pop lifo(last in first out) so output = 54321 //after 6>5, we've held 54321
  }
  print(n+1);  //recursive case
  printf("%d", n);
}

int main(){
  print(1); //takes u to call stack
}