#include<stdio.h>

void dae(int *hrs, int *sb);
void categoria(int *hrs, int *sb);

void main(){
	int hrs, sb;
	dae(&hrs, &sb);
	categoria(&hrs, &sb);
}

void dae(int *hrs, int *sb){
	printf("Introduzca el numero de horas extra trabajados: \n");
	scanf("%d", *&hrs);
	printf("Introduzca su sueldo base: \n");
	scanf("%d", *&sb);
	
}

void categoria(int *hrs, int *sb){
	int cat;
	printf("Introduzca a continuacion su categoria como trabajador: \n");
	scanf("%d", &cat);
		switch (cat)
		{
		case 1: 
		printf("usted a seleccionado la categoria 1 \n");
				if (*hrs <= 30){
					int he, hes;
					he = (*hrs) * 30;
					hes = (*sb) + he;
					printf("El pago a recibir de su sueldo es: %d", hes);
					
				}
				else{
					int hes;
					hes = (*sb) + 900;
					printf("El pago a recibir de su sueldo es: %d", hes);
				}
			break;
		case 2:	
		printf("usted a seleccionado la categoria 2 \n");
			if (*hrs <= 30){
					int he, hes;
					he = (*hrs) * 38;
					hes = (*sb + he);
					printf("El pago a recibir de su sueldo es: %d", hes);
					
				}
				else{
					int hes;
					hes = *sb + 1140;
					printf("El pago a recibir de su sueldo es: %d", hes);
				}
			break;
		case 3:
			printf("usted a seleccionado la categoria 3 \n");
					if (*hrs <= 30){
					int he, hes;
					he = (*hrs) * 50;
					hes = (*sb)+ he;
					printf("El pago a recibir de su sueldo es: %d", hes);
					
					}
					else{
					int hes;
					hes = (*sb)+ 1500;
					printf("El pago a recibir de su sueldo es: %d", hes);
				}
			break;
		case 4: 
			printf("usted a seleccionado la categoria 4 \n");
				if (*hrs <= 30){
					int he, hes;
					he = (*hrs) * 70;
					hes = (*sb) + he;
					printf("El pago a recibir de su sueldo es: %d", hes);
					
				}
				else{
					int hes;
					hes = (*sb)+ 2100;
					printf("El pago a recibir de su sueldo es: %d", hes);
				}
			break;
		default: printf("Usted no cuenta con opcion a sueldo extra por las horas extras");
		}
}
