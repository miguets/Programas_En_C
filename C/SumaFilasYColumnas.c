#include <stdio.h>
#include <stdlib.h>
void darDimMtz(int*fil,int*col);
int **crearMatriz(int fil, int col);
void darDatosMtz(int**mtz, int fil, int col);
void mostrarMtz(int **mtz, int fil, int col);
void mostrarFC(int **mtz, int fil, int col, int* FILA, int* COLA);
void liberarMtz(int**mtz,int fil);

void main(){
	int fil,col,**mtz;
	darDimMtz(&fil,&col);
	mtz=crearMatriz(fil,col);
	darDatosMtz(mtz,fil,col);
    int FILA[fil];
    int COLA[col];
    mostrarMtz(mtz, fil, col);
	mostrarFC(mtz,fil,col, FILA, COLA);
	liberarMtz(mtz,fil);
}

void darDimMtz(int*fil,int*col){
	printf("Ingrese el numero de filas de la matriz: \n");
	scanf("%d",fil);
	//printf("%d", fil);
	printf("Ingrese el numero de columnas de la matriz: \n");
	scanf("%d",col);
	//printf("%d", fil);
}

int **crearMatriz(int fil, int col){
	int **mtz,i;
	mtz=(int**)malloc(fil*sizeof(int*));
	if(mtz == NULL){
		printf("No hay memoria disponible...\n");
		exit(0);
        }
	for(i=0;i<fil;i++){
		mtz[i] = (int*)malloc(sizeof(int)*col);
	}
	return mtz;
}

void darDatosMtz(int**mtz, int fil, int col){
	int i,j;
	printf("\n");
	printf("Ingrese los datos de la Matriz a evaluar:\n");
	for(i=0; i < fil; i++){
		for(j=0; j < col; j++){
			printf("Dato[%d][%d]= ", i+1, j+1);
			scanf("%d", &mtz[i][j]);
		}
	}
}

void mostrarMtz(int**mtz,int fil, int col){
	int i,j;
	printf("\n");
	printf("Los datos de la Matriz son: \n");
	printf("\n");
	for(i=0; i < fil; i++){
		for(j=0; j < col; j++){
			printf(" %d \t", mtz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void liberarMtz(int**mtz,int fil){
	int i;
	for(i=0; i<fil; i++){
		free(mtz[i]);
	}
	free(mtz);	
	printf("\n Memoria Liberada... \n");
}

void mostrarFC(int **mtz, int fil, int col, int* FILA, int* COLA){
int i, j, q, n, m, k, kk=1;
q=0;
k=0;
for(i=0; i<fil; i++){
  for(j=0; j<col; j++){
     q = (q+mtz[i][j]);
  }
  FILA[i]=q;
  printf("La suma de la columna [%d] es : [ %d ] \n", kk, FILA[i]);
  q=0;
  kk++;
}
kk=1;
printf("\n");
for(n=0, i=0; n < col; n++, i++){
  for(m=0, j=0; m<fil; m++, j++){
     k += mtz[j][i];
  }
  COLA[n] = k;
  printf("La suma de la fila[%d] es  [ %d ] \n", kk,COLA[n]);
  k=0;
  kk++;
}
printf("\n");
}
