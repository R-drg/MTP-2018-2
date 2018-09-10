//Rodrigo Henrique Alves Ferreira - 11811EPC001

#include <stdio.h>

int main(){
	char bits[256];
	int estado=0;
	printf("Digite uma sequencia binaria: ");
	scanf("%s%*c",bits);
	for (int i=0;bits[i]!='\0';i++){
		if(estado==0 && bits[i]=='0'){
		estado=0;
		}
		else if(estado==0 && bits[i]=='1'){
		estado=1;
		}
		else if(estado==1 && bits[i]=='0'){
		estado=2;
		}
		else if(estado==1 && bits[i]=='1'){
		estado=0;
		}
		else if(estado==2 && bits[i]=='0'){
		estado=1;
		}
		else{
		estado=2;
		}
}
	if(estado==2){
	printf("\"%s\" eh multiplo de 3",bits);
	}
	else{
	printf("\"%s\" nao eh multiplo de 3",bits);
	}
	getchar();
}
