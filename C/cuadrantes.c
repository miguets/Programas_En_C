#include<stdio.h>
#include<math.h>

void dae(float * a,float * b,float * c,float * d,float * e,float * f,float * x,float * y);
void calculo(float x,float y,float a, float b, float c);
void cuadrante(float x, float y);
void pertenece(float a, float b, float c, float d, float e, float f, float x, float y);

void main(){
  float a, b, c, d, e, f, x, y;
  dae(&a, &b, &c, &d, &e, &f, &x, &y);
  calculo(x, y, a, b, c);
  cuadrante (x, y);
  pertenece(a, b, c, d, e, f, x, y);
}

void dae(float *a,float *b,float *c,float *d,float *e,float *f,float *x,float *y){
  printf("Introduce el valor de A: \n");
  scanf("%f", a);
  printf("Introduce el valor de B: \n");
  scanf("%f", b);
  printf("Introduce el valor de C: \n");
  scanf("%f", c);
  printf("Introduce el valor de D: \n");
  scanf("%f", d);
  printf("Introduce el valor de E: \n");
  scanf("%f", e);
  printf("Introduce el valor de F: \n");
  scanf("%f", f);
  printf("Introduce el valor del punto X: \n");
  scanf("%f", x);
  printf("Introduce el valor del punto  Y: \n");
  scanf("%f", y);
}

void calculo(float x, float y, float a, float b, float c){
  float trigo;
  trigo = (pow(b,2) - (4 * a * c));
  if(trigo > 0){
	printf("El lugar geometrico es una Hiperbola \n");
  }
  else if(trigo == 0){
   printf("El lugar geometrico es una Parabola \n");
  }
  else if(trigo < 0){
  printf("El lugar geometrico es una Elipse \n");
  }
  else{
    printf("No pertenece a nigun lugar geometrico \n");
  }
}


void cuadrante(float x, float y){
  if(x > 0 && y > 0){
    printf("se encuentra en el cuadrante 1 \n",x,y);
  }
  else if(x < 0 && y > 0){
    printf("se encuentra  en el cuadrante 2 \n",x,y);
  }
  else if (x < 0 && y < 0){
    printf("se encuentra  en el cuadrante 3 \n",x,y);
  }
  else if(x > 0 && y < 0){
    printf("se encuentra  en el cuadrante 4 \n",x,y);
  }
  else if( x == 0 && y == 0){
  	printf("Los puntos se encuentran en el origen \n");
  }
  else if(x == 0 && y != 0){
  	printf("Se encuentra en el eje Y \n");
  }
  else if (x != 0 && x == 0){
  	printf("Se encuentra en el eje x \n");
  }
  else{
  	printf("introduce valores numericos en los puntos X , Y \n");
  }
}

void pertenece(float a, float b, float c, float d, float e, float f, float x, float y){
  float xd;
	xd = (a * pow(x, 2)) + (b * x * y) + (c * pow(y, 2)) + (d * x) + (e * y) + f;
	if (xd == 0){
  	printf("Si pertenece a la grafica");
	}
	else{
  	printf("No pertenece a la grafica");
	}
}
