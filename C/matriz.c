#include<stdio.h>
#define FIL 10
#define COL 10
int dae();
void menu(int A[FIL][COL]);
void size(int *, int *);
void daem(int f, int c, int A[FIL][COL]);
void sum(int f, int c, int A[FIL][COL]);
void mul(int f, int c, int A[FIL][COL]);
void mostrar(int f, int c, int A[FIL][COL]);

void main(){
	int A[FIL][COL];
    menu(A);
}

void menu(int A[FIL][COL]){
	int s, f, c;
	do{
		s = dae();
		if(s == 1){
		 size(&f, &c);
		 printf("\n");
		}
		else if(s == 2){
		daem(f, c, A);
		printf("\n");
		}
		else if(s == 3) {
		sum(f, c, A);
		printf("\n");
		}
		else if(s == 4){
		mul(f, c, A);
		printf("\n");
		}
		else if(s == 5){
		mostrar(f, c, A);
		printf("\n");
		}
	}while(s <= 5);
}

int dae(){
	int sele;
	printf("\t \t Hola Bienvenido \n");
	printf("Selecciona entre las siguientes opciones para realizar una accion: \n \n[1]  introducir el numero de filas y columnas \n[2]  Introducir los datos de la matriz \n[3]  Suma de los elementos de la diagonal secundaria \n[4]  Producto de los elementos de la diagonal inferior \n[5]  Mostrar la matriz. \n[6]  salir \n");
	scanf("%d", &sele);
	printf("\n");
	return sele;
}

void size(int  *f, int *c){
    printf("Introduce el numero de filas: \n");
    scanf("%d", f);
    printf("\n");
    printf("introduce el numero de columnas: \n");
    scanf("%d", c);
	printf("\n");
}

void daem(int f, int c, int A[FIL][COL]){
	int i, j;
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			    printf("Introduce el dato de [%d] [%d] : \n", i, j);
   				scanf("%d", &A[i][j]);
   				printf("\n");
		}
	}
}

void sum(int f, int c, int A[FIL][COL]){
	int i, j, a = c, b = 0;
	for(i=0; i<f; i++){
		a--;
		for(j=0; j<c; j++){
			if(j==a){
				b += A[i][j];
			}
		}
	}
	printf("\nLa suma de la diagonal secundaria es: %d", b);
	printf("\n");
}

void mul(int f, int c, int A[FIL][COL]){
	int i, j, m = 1;
	for(i=0; i < f; i++){
		for(j=0; j < c; j++){
			if(i > j){
				m *= A[i][j];
			}
		}
	}
	printf("\nEl producto de la diagonal inferior es: %d", m);
	printf("\n");
}

void mostrar(int f, int c, int A[FIL][COL]){
	int i, j;
	printf("Los datos de la matriz son \n");
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("\n mtz[%d][%d] = %d", i, j, A[i][j]);
		}
	}
}
