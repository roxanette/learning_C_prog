#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool Jump(int nums[], int n){
  int maxReach = 0;        //check-variable(leet)
  for(int i = 0; i < n; i++){
    int currReach = i + nums[i]; 
    if(i > maxReach){
      return false;
    }
    if(currReach > maxReach){
      maxReach = currReach;
    }

    if(maxReach >= n){
      return true;
    }
  }
}

int main(){
  int nums[] = {2,1,0,5};
  int n = sizeof(nums)/sizeof(int);
  if(Jump(nums, n)){
    printf("True");
  }
  else{
    printf("False");
  }
}