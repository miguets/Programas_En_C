#include <stdio.h>

void dae(float* num);
void calculo(float num);

void main(){
  float num = 0;
  dae(&num);
  calculo(num);
}

void dae(float * num){
  printf("Introduzca el numero entero  del que desea saber con cuantas cifras cuenta: \n");
  scanf("%f", num);
}

void calculo(float num){
  int i = 0;
  do{
    num /= 10;
    i++;
  }while (num > 1);
  printf("Su numero cuenta con %d cifras \n", i);
}