/* P4.c */
/* Rodrigo Henrique Alves Ferreira */
/* 11811ECP001 */

#include <stdio.h>

int a(int m, int n){
  if(m==0){
    return n+1;
  }
  if(m>0&&n==0){
    a(m-1,1);
  }
  if(m>0&&n>0){
    a(m-1,a(m,n-1));
  }
}

int main(){
  int m,n;
  scanf("%i",&m);
  getchar();
  scanf("%i",&n);
  getchar();
  printf("%i",a(m,n));
  getchar();
}
