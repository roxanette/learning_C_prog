#include <stdio.h>

int main(){
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  //RIGHT ANGLED TRIANGLE

  /*for(int i = 0; i <= n; i++){
    for(int j = 0; j < i; j++){
      printf("*");
    }
    printf("\n");
  }*/

  //INVERTED RIGHT ANGLED TRIANGLE

  /*for(int i = n; i > 0; i--){
    for(int j = 1; j <= i; j++){ // or j = n; j > 0; j--
      printf("*");
    }
    printf("\n");
  }*/

  //MIRROR IMAGE OF RIGHT ANGLED TRIANGLE

  /*for(int i = 0; i < n; i++){
    //spaces
    for(int j = 0; j < n-i; j++){
      printf(" ");
    }
    //stars
    for(int k = 0; k <= i; k++){
      printf("*");
    }
    printf("\n");
  }*/

  //INVERTED MIRROR IMAGE OF RL TRIA
  /*for(int i = n; i >= 1; i--){
    for(int j = 1; j <= n-i; j++){
      printf(" ");
    }
    for(int k = 1; k <= i; k++){
      printf("*");
    }
    printf("\n");
  }
  */

  //BUTTERFLY
  //upper half
/*  for(int i = 1; i <= n; i++){
    //left triangle
    for(int j = 1; j <= i; j++){
      printf("*");
    }

    //spaces
    for(int j = 1; j < 2*(n-i); j++){
      printf(" ");
    }
    //right triangle
    for(int j = 1; j <= i; j++){
      printf("*");
    }
    printf("\n");
  }
  //lower half
  for(int i = n; i <= 0; i++)

*/
  //pyramid
  /* 
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n-i; j++){
      printf(" ");
    }
    for(int k = 1; k <= 2*i-1; k++){
      printf("*");
    }
    
    printf("\n");
  }
  */

  //square
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(i==1 || i == n || j == 1 || j == n){
        printf("*");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }

  


}