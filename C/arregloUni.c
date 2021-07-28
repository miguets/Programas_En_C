#include <stdio.h>
#include <stdlib.h>

void darDim(int*size);
int *crearArregloUni(int size);
void darDatos(int *A, int size);
void mostrar(int*A,int size);
void liberar(int*a);
void redimensionar(int*A,int*size);

void main(){
	int *A, size;
	darDim(&size);
	A = crearArregloUni(size);
	darDatos(A,size);
	mostrar(A,size);
	redimensionar(A,&size);
	mostrar(A,size);
	liberar(A);
}

void darDim(int*size){
	printf("Indique la dimension del arreglo: ");
	scanf("%d",size);
}

int * crearArregloUni(int size){
	int* Arreglo;
	Arreglo = (int*)malloc(size*sizeof(int));
	if(Arreglo == NULL){
		printf("No hay espacio en la memoria\n");
		exit(0);
	}
	return Arreglo;
}

void darDatos(int *A, int size){
	int i;
	printf("Ingrese los datos del arreglo\n");
	for(i=0;i<size;i++){
		printf("\nA[%d]=",i);
		scanf("%d", &A[i]);
	}
}
void mostrar(int*A,int size){
	int i;
	printf("Los datos del arreglo son\n");
	for(i=0;i<size;i++){
		printf("\nA[%d]=%d",i+1,A[i]);
	}
}

void liberar(int*A){
	free(A);
	printf("\nMemoria Liberada...\n");
}

void redimensionar(int*A,int*size){
	int i,n,novtam,*B;
	printf("\nCuantos sizeentos va a agregar? ");
	scanf("%d", &n);
	novtam=(*size)+n;
	B=(int*) realloc(A,novtam*sizeof(int));
	for(i=(*size);i<novtam;i++){
		printf("A[%d]= ",i+1);
		scanf("%d",&B[i]);
	}
	(*size)=novtam;
	A=B;
}
