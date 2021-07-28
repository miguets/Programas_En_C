#include<stdio.h>
#include<math.h>

void dae(int *n, float *a, float *b);
void ciclos(int n, float a, float b, float *cons, float *evabu, float *evabu2, float *epo);
void ciclop(int n, float a, float *conp);
void ope(float *cons, float *conp, float *x);

void main(){
int n;
float a, b, cons, conp, x, evabu, evabu2, epo;
cons = 0;
conp = 1;
x = 0;
dae(&n, &a, &b);
ciclos(n, a, b, &cons, &evabu, &evabu2, &epo);
ciclop(n, a, &conp);
ope(&cons, &conp, &x);
}

void dae(int *n, float *a, float *b){
	printf("introduce un numero entero n : \n");
	scanf("%d", *&n);
	printf("introduce un numero decimal a : \n");
	scanf("%f", *&a);
	printf("introduce un numero decimal b : \n");
	scanf("%f", *&b);
	
}


void ciclos(int n, float a, float b, float *cons, float *evabu, float *evabu2, float *epo){
	int is = 1;
	while(is <= n){
		//sigma
		*epo = (a - b);
		*evabu = pow(*epo ,is);
		*evabu2 = (*evabu - 3) + n;
		*cons += *evabu2;
		
		is ++;
	}
}

void ciclop(int n, float a, float *conp){
		int fi = n - 1;
		int ip = 2;
		float evabu3;
		
	do{
		//productorio
		evabu3 = (2 + (a * (ip - 1)));
		*conp = (*conp * evabu3);
		printf("%.2f \n", *conp);
		ip ++;
	}while(ip <= fi);
}

void ope(float *cons, float *conp, float *x){

	*x = (*cons / *conp);
	printf("total = %f \n", *x);
	
}
