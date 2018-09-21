#include <stdio.h>

int bin_dec(char bits[]){
  int i,j=-1,res=0;
  for(i=0;bits[i]!='\0';i++){
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


int main(){
int opt,res;
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


}
}

}
