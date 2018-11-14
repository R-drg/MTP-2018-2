#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct {
	double x;
	double y;
	} Ponto;

Ponto * dividecirc(int N){
	Ponto * pontos = (Ponto *) calloc(N,sizeof(Ponto));
	for (int i=0;i<N;i++){
		pontos[i].x = cos(i*2.0*M_PI/(N-1));		
		pontos[i].y = sin(i*2.0*M_PI/(N-1));
	}
	return pontos;
};

void mostra_pontos(Ponto * p_ini, Ponto * p_fim){
	if(p_ini < p_fim){
		printf("(%.3lf,%.3lf) ",p_ini->x,p_ini->y);	
	mostra_pontos(p_ini+1,p_fim);
	}
}

int main(){

	int N;
	Ponto * pontos;
	printf("Digite o numero de pontos que voce quer: ");
	scanf("%i",&N);
	getchar();
	pontos = dividecirc(N);
	mostra_pontos(pontos,pontos + N);
	free(pontos);
	getchar();
	return 0;
}
