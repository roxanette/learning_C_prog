#include <stdio.h>

int main(){
  char text[] = "REVA";
  char *p = text;

  while(*p !='\0'){
    printf("%c\n", *p);
    p++;
  }
  int n;
  printf("Enter size: ");
  scanf("%d", &n);
  int arr[n];
  int *ptr = arr;
  printf("%d Elements: \n", n);
  for(int i = 0; i < n; i++){
    scanf("%d", (ptr+i));
  }
  printf("Array elements : \n");
  for(int i = 0; i < n; i++){
    printf("%d ", *(ptr+i));
  }
  printf("\n");

  int ap[]={10,20,30,40,50};
  int *pp = &ap[1];
  int *q = &ap[4];

  int result = q - pp; //gives distance btw the [i] indexes, //3 (4-1)
  printf("%d", result);
}