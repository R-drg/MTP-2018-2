/* P3.c */
/* Rodrigo Henrique Alves Ferreira */
/* 11811ECP001 */


#include <stdio.h>

int pot(int base,int exp){
  int res=1;
  for(;exp>0;exp--){
    res=res*base;
  }
  return res;
}

int main(){
  int res=0,i,ind;
  char num[256];
  printf("Digite  string a ser convertida: \n");
  scanf("%s%*c",num);
  for(i=0;num[i]!='\0';i++);
  ind=i;
  for(int j=i;j>=0;j--){
      if(num[j]>=48 && num[j]<=57){
        res=res+((num[j]-48)*(pot(10,(ind-j))));
    }
    else{ ind--;}

  }
  printf("\nString convertida para numero: %i",res);
  getchar();
}
