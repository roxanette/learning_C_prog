#include <stdio.h>
#include <stdlib.h>

typedef struct Ticket{
  int tno;
  char vreg[50];
  double gross;
  double tare;
};

double Helper1(struct Ticket *t){ // for structure variable, t. will give address, 
  //t-> will give value
  double grossW = t->gross;
  double tareW = t->tare;
  double netW = grossW-tareW;
  return netW;
}

double Helper2(struct Ticket *t){
  printf("%d\n", t->tno);
  printf("%s\n", t->vreg);
  printf("%lf\n", t->gross);
  printf("%lf\n", t->tare);
}


int main(){
  int n;
  printf("Enter n: ");
  scanf("%d", n);
  
  struct Ticket *result = malloc(n*sizeof(struct Ticket));

  for(int i = 0; i < n; i++){
    scnaf("%d", &result[i].tno);
    scnaf("%s", result[i].vreg);
    scnaf("%lf", &result[i].gross);
    scanf("%lf", result[i].tare);
  }

  double total = 0;
  int maxI = 0;

  for(int i = 0; i < n; i++){
    double netW = Helper1(&result[i]); //structure pointer requires address of array, acc to the function
    total = total + netW;

    if(netW > Helper1(&result[i])){
      maxI = i;
    }
  }
  for(int i = 0; i < n; i++){
    Helper2(&result[i]);
  }

  printf("\n Total weight = %lf", total);
  printf("\nMax Value = %f", result[maxI].tno);

  free(result);
}