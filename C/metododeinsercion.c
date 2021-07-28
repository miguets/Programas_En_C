#include<stdio.h>

int main(){
	int numero[10] = {11,10,7,8,2,-1,9,3,0,3};
	int i,j,aux;
	for(i=0;i<9;i++){
            j = i;
            aux = numero[i];
            while((j> 0)&&(aux<numero[j-1])) {
                numero[j] = numero[j - 1];
                j--;
            }
            numero[j] = aux;
    }
    
	for(i=0;i<10;i++){
		printf("%i\t ", numero[i]);
	}
	return 0;
}
