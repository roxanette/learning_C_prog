#include <stdio.h>

int main(){
  int r = 3;
  int c = 3;
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  
  int matrix[3][3] = {};
  for(int i = 0; i < 3; i++){
    for(int j = 2; j >= 0; j--){
      
      matrix[i][j] = arr[j][i];
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      printf("%d\t", (matrix[i][j]));
    }
    printf("\n");
  }
  printf("\n");
  
  for(int i = 0; i < r; i++){
    int temp = matrix[i][0];
    matrix[i][0] = matrix[i][2];
    matrix[i][2] = temp;
  }

  for(int k = 0; k < 3; k++){
    for(int h = 0; h < 3; h++){
      printf("%d\t", (matrix[k][h]));
    }
    printf("\n");
  }

}