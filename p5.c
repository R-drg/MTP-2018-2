
/* P5.c */
/* Rodrigo Henrique Alves Ferreira*/
/* 11811ECP001 */

#include <stdio.h>

float soma(float m[50], int n, float result){
  if(n < 0)
    return result;
  else{
    result += m[n];
    soma(m, n-1, result);}
}

float produto(float m[50], int n, float result){
  if(result == 0)
    result++;
  if(n < 0)
    return result;
  else{
    result *= m[n];
    produto(m, n-1, result);}
}

typedef
  unsigned long long int
  Bytes8;
typedef
  struct LCG { Bytes8 a, c, m, rand_max, atual; }
  LCG;

void semente(LCG * r, Bytes8 seed){
  // constrantes do POSIX [de]rand48, glibc [de]rand48[_r]
  // ULL transforma a constante 'int' em 'unsigned long long int'
  r->a = 0x5DEECE66DULL;
  r->c = 11ULL;
  r->m = (1ULL << 48);
  r->rand_max = r->m - 1;
  r->atual = seed;
}

Bytes8 lcg_rand(LCG * r) {
  r->atual = (r->a * r->atual + r->c) % r->m;
  return r->atual;
}

double lcg_rand_01(LCG * r){
  return ((double) lcg_rand(r))/(r->rand_max);
}

void generate(float * v, int tam, float min, float max, LCG * r){
  int i;
  for(i = 0; i < tam; i++)
    v[i] = (max-min) * lcg_rand_01(r) + min;
}

int main(){
  int opt = 0;
  float v[50], result = 0;
  LCG rand;
  semente(&rand, 123456);
  generate(v, 50, 0.5, 1.5, &rand);
  printf("1-Somatorio\n\n2-Produtorio\n\n");
  scanf("%d", &opt); getchar();
  while(opt!= 1 || opt!=2){
  if(opt == 1){
    printf("\n%f", soma(v, 49, result));
  }
  if(opt == 2){
    printf("\n%f", produto(v, 49, result));
  }
  else{
    printf("Opcao invalida");
  }
}
  getchar();
}
