#include <stdio.h>

int ret(int n){
  if(n>100){
    return n - 10;
  }
  else{
    return ret(ret(n+11));
  }
}


int main(){
  printf("%d",ret(0));
  return 0;
}