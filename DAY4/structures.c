#include <stdio.h>
//inheritance in possible in C logically, by association, aggregation, and composition

typedef struct Address{
  char village[50];
  int pincode;
} address;

typedef struct Member{
  int id;
  char name[50];
  float shared_capital;
  address add;
}Member;

int main(){
  int n;
  printf("enter number of members: ");
  scanf("%d", &n);
  Member mem[4];

  double total = 0;
  int maxShareIndex = 0;
  for(int i = 0; i < n; i++){
    printf("enter member id: ");
    scanf("%d", &mem[i].id);

    printf("enter member name: ");
    scanf("%49s", mem[i].name);

    printf("enter member shared-capital: ");
    scanf("%f", &mem[i].shared_capital);

    printf("enter village: ");
    scanf("%49s", mem[i].add.village);

    printf("enter pincode: ");
    scanf("%d", &mem[i].add.pincode);
    //total shared_capitals
    total = total + mem[i].shared_capital;

    if(mem[i].shared_capital > mem[maxShareIndex].shared_capital){
      maxShareIndex = i;
    }
  }
  for(int i = 0; i < n; i++){
    //print all values
    printf("");
  }

  printf("Total shared_capitals : %d", total);
  printf("Highest shar holder: %d %s %f",
     mem[maxShareIndex].id, mem[maxShareIndex].name, mem[maxShareIndex].shared_capital);
  
}