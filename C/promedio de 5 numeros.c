#include<stdio.h>
float dae(void);
void final(float sum, float div);
float suma(float n1, float n2, float n3, float n4, float n5);
float division(float su);

void main(){
	float n1, n2, n3, n4, n5, sum, div;
	n1 = dae();
	n2 = dae();
	n3 = dae();
	n4 = dae();
	n5 = dae();
	sum = suma(n1, n2, n3, n4, n5);
	div = division(sum);
	final(sum, div);
}
float dae(void){
	float num;
	printf("introduzca un numero decimal \n");
	scanf("%f", &num);
	return num;
}
float suma(float n1, float n2, float n3, float n4, float n5){
	float su;
	su = n1 + n2 + n3 + n4 + n5;
	return su;
}
float division(float su){
	float di;
	di = su/5;
	return di;
}
void final(float sum, float div){
	printf("la suma: %f \n", sum);
	printf("el promedio solicitado es: %f \n", div);
}
