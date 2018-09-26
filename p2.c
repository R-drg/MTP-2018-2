/* P2.c */
/* Rodrigo Henrique Alves Ferreira */
/* 11811ECP001 */
#include <stdio.h>


int bin_dec(char bits[]){
  int i,j=-1,res=0;
  for(i=0;bits[i]!='\0';i++)
  {
  }

  while(i>=0){
    if(bits[i]=='1'){
      res= res + (1<<j);
    }
    j++;
    i--;
  }
  return res;
}

void bin_hex(char bits[]){
  printf("%X",(bin_dec(bits)));
  }



void dec_bin(int num){
  int res[256],resto=1;
  int j=0,i=0,numAux=num;
  while(resto>1){
    res[i]=numAux/2;
    i++;
    numAux=numAux/2;
    resto=numAux%2;
    printf("%i",resto);
  }
  res[i]=numAux%2;
  while(i<=0){
    printf("%i",res[j]);
    i--;
  }
  }

int main(){
int opt,res,num;
char bits[256];

while(opt!=9){
printf("Escolha uma opcao no menu\n----------------------------------\n1. Binario para Decimal\n2. Binario para Hexadecimal\n3. Hexadecimal para Decimal\n4. Hexadecimal para Binario\n5. Decimal para Binario\n6. Decimal para Hexadecimal\n7. Octal para Hexadecimal\n8. Decimal para Octal \n9. Encerrar Programa\n\n");
printf("Sua escolha: ");
scanf("%i",&opt);

switch (opt) {
  case 1:
    printf("\n\nDigite o numero binario a ser convertido: ");
    scanf("%s%*c",bits);
    printf("\nResultado do numero em decimal: %i \n\n",bin_dec(bits));
    getchar();
    break;
  case 2:
  //Fazer Função
    printf("\n\nDigite o numero binario a ser convertido: ");
    scanf("%s%*c",bits);
    printf("\nResultado do numero em Hexadecimal: ");
    bin_hex(bits);
    printf("\n\n");
    getchar();
    break;
  case 5:
    printf("\n\nDigite o numero decimal a ser convertido: ");
    scanf("%i",&num);
    printf("\nResultado do numero em Binario: ");
    dec_bin(num);
    printf("\n\n");

}
}

}
