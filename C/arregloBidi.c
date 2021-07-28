#include <stdio.h>
#include <stdlib.h>

void dae(int*fil,int*col);
int **crearMatriz(int fil, int col);
void darDatosMtz(int**A, int fil, int col);
void mostrarMtz(int**A,int fil, int col);
void liberarMtz(int**A,int fil);

void main(){
	int fil,col,**A;	
	dae(&fil,&col);
	A = crearMatriz(fil,col);
	darDatosMtz(A,fil,col);
	mostrarMtz(A,fil,col);
	liberarMtz(A,fil);
}

void dae(int * fil, int * col){
	printf("Indique el numero de filas de la matriz: \n");
	scanf("%d",fil);
	printf("Indique el numero de columnas de la matriz \n");
	scanf("%d",col);
}

int **crearMatriz(int fil, int col){
	int **mtz,i;
	mtz = (int**)malloc(fil*sizeof(int*));
	if(mtz==NULL){
		printf("No hay memoria disponible\n");
		exit(0);
	}
	for(i=0;i<fil;i++){
		mtz[i]=(int*)malloc(sizeof(int)*col);
	}
	return mtz;
}

void darDatosMtz(int**A, int fil, int col){
	int i,j;
	printf("Ingrese los datos de la Matriz \n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Dato[%d][%d] = ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
}
void mostrarMtz(int**A,int fil, int col){
	int i,j;
	printf("Los datos de la Matriz son: \n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t %d",A[i][j]);
			printf("\n");
		}
	}
}

void liberarMtz(int**A,int fil){
	int i;
	for(i=0;i<fil;i++){
		free(A[i]);
	}
	free(A);	
	printf("\nMemoria Liberada...\n");
}
