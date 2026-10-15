#include <stdio.h>

int main(){
  int n = 10;
  int *ptr = &n;
  int *ptr2 = NULL;

  printf("%d\n", n);  //10
  printf("%p\n", (void*)&n); //dont know the return type, type cast it //0061FF14
  printf("%p\n", (void*)ptr2); // 0(when %d)  // 00000000(when %p)

  *ptr = *ptr + 10;
  printf("%d\n", ptr);

  char ch = 'A';
  char *p = &ch;
  *p = 'B';
  printf("%c\n", ch);  //B

  int a[3] = {10,20,30};
  int (*ptr)[3] = {&a};  //array of pointer
  printf("%d\n", a[3]);

  int a1 = 10;
  int b = 20;
  int c = 30;
  int *pt[3] = {&a1, &b, &c};

}