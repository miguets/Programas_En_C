#include <stdio.h>
void grupos(int *g);
void ciclos(int g);


int main() {
	int g;
	grupos(&g);
	ciclos(g);
}

void grupos(int *g) {
	printf("Introduce el numero de grupos\n");
	scanf("%d", g);
}

void ciclos(int g) {
	int a, m, c, na = 1, nc =1, np, var;
	float prom, cal, gp =0, x, temp, pgg, temp2;
	for (g=g; g != 0; g--) {
		a = 0;
		printf("Introduce el numero de alumnos del grupo %d \n", na);
		scanf("%d", &a);
    var = a;
		for (a=a; a != 0; a--) {
			m = 0;
			printf("Introduce cuantas materias tiene el alumno %d del grupo %d \n", nc, na);
			scanf("%d", &m);
			int materia = 1;
			for (m=m; m != 0; m--){
				c = 0;
				prom = 0;
        		np = 1;
				printf("[Materia %d] \n", materia);
				for (c = 3; c !=0; c--) {
					printf("Introduzca la calificacion del parcial %d \n", np);
					scanf("%f", &cal);
					prom += cal;
          			np ++;
				}
				materia++;
      			x = prom / 3;
	      		printf("El promedio es %f \n" , x);
        		gp += x;
        		x = 0;
			}
			nc ++;
    }
    	temp = 0;
    	temp = gp / var;
    	printf("El promedio del grupo %d es %f \n", na, temp);
    	gp = 0;
    	na ++;
    	pgg += temp;
	}
  temp2 = pgg / (na-1);
  printf("EL promedio de todos los grupos es: %f", temp2);
}