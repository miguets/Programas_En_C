//problema 5
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void dime(int * sizea, int * sizeb);
void daec(char * A, int sizea, int sizeb, char * B);
void mostrar(char *X);
void id(char *A, char *B, int sizea, int sizeb);
int evaluar(char * A, int va, int ve, int vi, int vo, int vu, int * na, char * la);
int evaluarB(char * B, int va, int ve, int vi, int vo, int vu, int * nb, char * lb);
char eval(int * V, int va, int ve, int vi, int vo, int vu);
void change(char * B, int na, int nb, char la, char lb);
void ordenar(int *V);


void main(){
	int sizea, sizeb;
    char *A, *B;
	dime(&sizea, &sizeb);
    A = malloc(sizeof(char) * sizea);
    B = malloc(sizeof(char) * sizeb);
	daec(A, sizea, sizeb, B);
	//mostrar(A, sizea, B, sizeb);
	id(A, B, sizea, sizeb);
	free(A);
	free(B);
    
}
void dime(int * sizea, int * sizeb){
	printf("introduce la dimension de tu cadena: \n");
	scanf("%d", sizea);
	printf("introduce la dimension de tu cadena: \n");
	scanf("%d", sizeb);
}

void daec(char * A, int sizea, int sizeb, char * B){
	printf("introduzca la cadena A : \n");
	getchar();
	fgets(A, sizea, stdin);
	printf("introduzca la cadena B : \n");
	fgets(B, sizeb, stdin);
	
}
void mostrar(char * X){
	int i;
	for(i=0; i<strlen(X); i++){
		printf("%c", X[i]);
	}
}

void id(char *A, char *B, int sizea, int sizeb){
	int na, nb;
	char la, lb;
	int va=0, ve=0, vi=0, vo=0, vu=0;
	evaluar(A, va, ve, vi, vo ,vu, &na, &la);
	mostrar(A);
	printf("la letra que mas se repite [%c], [%d] veces \n", la, na);
	va=0, ve=0, vi=0, vo=0, vu=0;
	evaluarB(B, va, ve, vi, vo ,vu, &nb, &lb);
	mostrar(B);
	printf("la letra que mas se repite [%c], [%d] veces \n", lb, nb);
	change(B, na, nb, la, lb);
}

int evaluar(char * A, int va, int ve, int vi, int vo, int vu, int * na, char * la){
	int i, j;
	for(i=0; i<strlen(A); i++){
		if (A[i] == 'a' || A[i]=='A'){
			va++;
		}
		else if(A[i] == 'e' || A[i]== 'E'){
			ve++;
		}
		else if(A[i] == 'i' || A[i]== 'I'){
			vi++;
		}
		else if(A[i] == 'o' || A[i]== 'O'){
			vo++;
		}
		else if(A[i] == 'u'|| A[i]== 'U'){
			vu++;
		}
	}
	//printf("va %d, ve %d, vi %d, vo %d, vu %d", va, ve, vi , vo ,vu);
	int V[5] = {va, ve, vi , vo, vu};
	char w = eval(V, va, ve , vi, vo, vu);
	//printf("la letra mas repetida es: %c, y se repite %d veces \n", w, V[0]);
	*na = V[0];
	*la = w;
}

int evaluarB(char * B, int va, int ve, int vi, int vo, int vu, int * nb, char * lb){
	int i, j;
	for(i=0; i<strlen(B); i++){
		if (B[i] == 'a' || B[i]=='A'){
			va++;
		}
		else if(B[i] == 'e' || B[i]== 'E'){
			ve++;
		}
		else if(B[i] == 'i' || B[i]== 'I'){
			vi++;
		}
		else if(B[i] == 'o' || B[i]== 'O'){
			vo++;
		}
		else if(B[i] == 'u'|| B[i]== 'U'){
			vu++;
		}
	}
	//printf("va %d, ve %d, vi %d, vo %d, vu %d", va, ve, vi , vo ,vu);
	int V[5] = {va, ve, vi , vo, vu};
	char w = eval(V, va, ve , vi, vo, vu);
	//printf("la letra mas repetida es: %c, y se repite %d veces", w, V[0]);
	*nb = V[0];
	*lb = w;
}

char eval(int * V, int va, int ve, int vi, int vo, int vu){
	char p;
	int aux, i, j;
		for(i = 0; i < 5-1; i++){
			for (j = 0; j < 5-1; j++){
				if (V[j] < V [j+1]){
					aux = V[j+1];
					V[j+1] = V[j];
					V[j] = aux;
			}
		}
	}
	if(va > ve && va > vi && va > vo && va > vu){
		p = 'a';
	}
	else if(ve > va && ve > vi && ve > vo && ve > vu){
		p = 'e';
	}
	else if(vi > ve && vi > va && vi > vo && vi > vu){
		p = 'i';
	}
	else if(vo > ve && vo > vi && vo > va && vo > vu){
		p = 'o';
	}
	else if(vu > ve && vu > vi && vu > vo && vu > va){
		p = 'u';
	}
	return p;
}

void change(char * B, int na, int nb, char la, char lb){
	char C[strlen(B)];
	int i, j;
	for(i=0; i<strlen(B); i++){
		C[i]=B[i];
	}
	i=0;
	for(i=0; i<strlen(B); i++){
		if(C[i] == lb){
			C[i] = la;
		}
	}
	mostrar(C);
}