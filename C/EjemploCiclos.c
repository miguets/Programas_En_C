#include<stdio.h>

void menu (int*);
void while1();
void dowhile1();
void for1();


void main(){
	int num;
   menu(&num);
}


void menu(int* num){
	printf("1.- While \n");
	printf("2.- Do While \n");
	printf("3.- For \n");
	printf("Escoga una opciO1n \n");
	scanf("%d", num);
	switch(*num){
		case 1: while1();
		break;
		case 2 : dowhile1();
		break;
		case 3 : for1();
		default: printf("Opcion no valida");
	}
}

void while1(){
	int num1=10, num2=0;
	
	while(num1<=100){
		num2+=num1;
		num1+=5;
	}
	printf("resultado: %d \n", num2);
}

void dowhile1(){
	int num1=10, num2=0;
	do{
		num2+=num1;
		num1+=5;
	}while(num1<=100);
	printf("resultado: %d \n", num2);
}

void for1(){
	int num1=10, num2=0;
	for(num1=10, num2=0;num1<=100;num2+=num1, num1+=5){
	} 	printf("resultado: %d \n", num2);
}


