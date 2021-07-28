#include<stdio.h>

int main(){
	int numero[10] = {11,10,7,8,2,-1,9,3,0,3};
	int aux, i, j, a, b;
	for(i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (numero[j] > numero [j+1]){
				aux = numero[j+1];
				numero[j+1] = numero[j];
				numero[j] = aux;
			}
		}
	}
	for (a = 0; a<10; a++){
		printf("%d\t", numero[a]);
	}
	return 0;
}
