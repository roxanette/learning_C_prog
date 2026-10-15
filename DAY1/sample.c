#include <stdio.h>

int main(){
  int n;
  printf("Enter amt: ");
  scanf("%d", &n);
  int notes[7] = {100, 50, 20, 10, 5, 2, 1};
  int rem = 0;
  int c_100 = 0, c_50 = 0, c_20 = 0, c_10 = 0;
  int c_5 = 0, c_2 = 0, c_1 = 0;


    c_100 = c_100 + n/100;
    n = n % 100;
    c_50 = c_50 + n/50;
    n = n % 50;
    c_20 = c_20 + n/20;
    n = n % 20;
    c_10 = c_10 + n/10;
    n = n % 10;
    c_5 = c_5 + n/5;
    n = n % 5;
    c_2 = c_2 + n/2;
    n = n % 2;
    c_1 = c_1 + n/1;
    n = n % 1;
  
  int sum = c_100 + c_50 + c_20 + c_10 + c_5 + c_2 + c_1;
  printf("Sum: %d", sum);

  int count = 0;
  int size = sizeof(notes)/sizeof(notes[0]);
  for(int i = 0; i < size; i++){
    if(n==0){
      break;
    }
    count = n/notes[i];
    n=n%notes[i];
  }
}