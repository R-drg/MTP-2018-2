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


void dec_bin(int n){
  int f,inv[256],i;
for(i=0;n>=1;i++){
  inv[i]=n%2; n=n/2;}
for(f=i-1;f>=0;f--){
  printf("%d", inv[f]);}
  }

void hex_dec(char v[]){
  int inv[256],f,i,soma=0,p,n;
  	for (i=0;v[i]!='\0';i++)
  	{
  		if (v[i]>='a' && v[i]<='z')
  		{
  			v[i]=v[i]-32;
  		}
  	}
  	for (f=i-1;f>=0;f--)
  	{
  		p=1;
  		if(v[f]=='0'){inv[f]=0;}
  		else
  		{
  			for(n=0;n<=i-f-2;n++)
  			{p=p*16;}
  			if (v[f]>='0' && v[f]<='9')
  			{inv[f]=p*(v[f]-48);}
  			if (v[f]>='A' && v[f]<'Z')
  			{inv[f]=p*(v[f]-55);}
  		}
  		soma=soma+inv[f];
  	}
  	printf ("Resultado do numero em decimal: %d",soma);
  	printf ("\n\n");
}

void oct_dec (char v[])
{
	int inv[256],f,i,soma=0,p,n;
	for (i=0;v[i]!='\0';i++){
	}
	for (f=i-1;f>=0;f--)
	{p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{p=p*8;}
			if (v[f]>='0' && v[f]<='8')
			{inv[f]=p*(v[f]-48);}
		}

		soma=soma+inv[f];}
	printf ("Resultado do numero em decimal : %d",soma);
  printf("\n\n");
}
void hex_bin (char v[])
{
	int inv[256],f,i,soma=0,p,n;
	for (i=0;v[i]!='\0';i++)
	{
		if (v[i]>='a' && v[i]<='z')
		{
			v[i]=v[i]-32;
		}
	}
	for (f=i-1;f>=0;f--)
	{
		p=1;
		if(v[f]=='0'){inv[f]=0;}
		else
		{
			for(n=0;n<=i-f-2;n++)
			{p=p*16;}
			if (v[f]>='0' && v[f]<='9')
			{inv[f]=p*(v[f]-48);}
			if (v[f]>='A' && v[f]<'Z')
			{inv[f]=p*(v[f]-55);}
		}
		soma=soma+inv[f];
	}
	printf ("Resultado do numero em binario: ");
		for(i=0;soma>=1;i++)
		{inv[i]=soma%2; soma=soma/2;}
		for(f=i-1;f>=0;f--)
		{printf("%d", inv[f]);}
	printf ("\n\n");
}

void dec_octal(int n)
{
	int f,inv[256],i;
	printf ("Resultado do numero em octal: \n");
	for(i=0;n>=1;i++){
		inv[i]=n%8; n=n/8;}
	for(f=i-1;f>=0;f--){
		printf("%d", inv[f]);}
	printf ("\n\n");
}

int main(){
int opt,num;
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
    printf("\n\nDigite o numero binario a ser convertido: ");
    scanf("%s%*c",bits);
    printf("\nResultado do numero em Hexadecimal: ");
    bin_hex(bits);
    printf("\n\n");
    getchar();
    break;
  case 3:
    printf("\n\nDigite o numero Hexadecimal a ser convertido: ");
    scanf("%s%*c",bits);
    hex_dec(bits);
    getchar();
    break;
  case 4:
    printf("\n\nDigite o numero Hexadecimal a ser convetido: ");
    scanf("%s%*c",bits);
    hex_bin(bits);
    getchar();
    break;
  case 5:
    printf("\n\nDigite o numero decimal a ser convertido: ");
    scanf("%i",&num);
    printf("\nResultado do numero em Binario: ");
    dec_bin(num);
    printf("\n\n");
    break;
case 6:
    printf("\n\nDigite o numero decimal a ser convertido: ");
    scanf("%i",&num);
    printf("Resultado do numero em Hexadecimal: %X",num);
    printf("\n\n");
    getchar();
    break;

case 7:
    printf("\n\nDigite o numero octal a ser convertido: ");
    scanf("%s%*c",bits);
    oct_dec(bits);
    getchar();
    break;

case 8:
    printf("\n\nDigite o numero octal a ser convertido: ");
    scanf("%i",&num);



}
}

}
