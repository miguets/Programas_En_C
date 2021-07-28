#include<stdio.h>

int main (){
	int numero[10] = {11,10,7,8,2,-1,9,3,0,3};
	int aux, i, j, a, min, b;
	for(i = 0; i < 10; i++){
		min = i;
			for (j = i+1; j <= 10; j++){
				if (numero[j] < numero[min]){
				min = j;
			}
		}
		aux = numero[i];
		numero[i] = numero[min];
		numero[min] = aux;
	}
	for (a = 0; a<10; a++){
		printf("%d\t", numero[a]);
	}
	printf("\n \n \n");
	for (b = 10; b>=0; b--){
		printf("%d\t", numero[b]);
	}
	return 0;
}
