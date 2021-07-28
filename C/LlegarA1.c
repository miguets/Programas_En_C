#include<stdio.h>
void entradaDatos(int* num);
void paroimpar(int num, float* par, float *impar);
void par1 (float par, int num, float  impar);

void main(){
	float par, impar;
	int num;
	entradaDatos(&num);
	paroimpar(num, &par, &impar);
	par1(par, num, impar);
}

void entradaDatos(int* num){
printf("Introduzca el numero entero con el que desee que la serie empiece \n");
scanf("%d", num);
}

//identificar si el numero introducido es par o impar
void paroimpar(int num, float* par, float *impar){
	if(num%2==0){
		*par=num;
	}
	else{
		*impar=num;
	}
	printf("%d", num);
}

void par1 (float par, int num, float  impar){
	//es par
	if(num == par){
		while(num!=1){
			printf(",");
			if(num %2 == 0){
				num /= 2;
			}
			else{
				num=(num*3)+1;
			}
			printf("%d", num);
		}
	}
	//es impar
	if(num==impar){
		while(num!=1){
			printf(",");
			if(num%2==0){
				num/=2;
			}
			else{
				num=(num*3)+1;
			}
			printf("%d", num);
		}
	}
}