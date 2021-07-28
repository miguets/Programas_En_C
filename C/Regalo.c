#include <stdio.h>

void dae(float*);
void regalo(float);

void main(void){
  float pres;
  dae(&pres);
  regalo(pres);
}

void dae(float * pres){
  printf("Introduce el dinero que tienes para el regalo\n");
  scanf("%f", pres);
}

void regalo (float pres){
  if (pres <= 10 && pres > 0){
    printf("Comprale una tarjeta de regalo\n");
  }
  else if (pres >= 11 && pres <= 100){
    printf("Comprale unos chocolates\n");
  }
  else if(pres >= 101 && pres <= 250){
    printf("Comprale unas flores\n");
  }
  else if (pres >= 251){
    printf("Compra un anillo \n");
  }
  else{
    printf("no te alcanza para nada :(");
  }
}

