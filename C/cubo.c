#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//input, output

#define p printf
#define s scanf

//funciones
void fill(int cube[5][5][5]);//llenar
void menu(int cube[5][5][5]);//menu
void show(int cube[5][5][5]); //mostrar
void sumSide(int cube[5][5][5]);//lados
void sumRows(int cube[5][5][5]);//filas
void sumColumns(int cube[5][5][5]);//columnas


//funcion principal
int main(){

    int cube[5][5][5];

    fill(cube);
    menu(cube);
    /*show(cube);
    sumSide(cube);*/
    return 0;
}

//menu
void menu(int cube[5][5][5]){
    
    int opc, salir = 0;

    do{
        p("\t-----Menu----\nSelecciona una opcion: \n1._ sumar filas\n2._ sumar columnas\n3._ sumar caras\n4._ mostrar cubo\n5._ salir\nDigite el numero de la opcion: \n");
        s("%d", &opc);
        switch (opc){
        case 1://mostrar la suma de cada cara
            system("cls");
            sumRows(cube);
            break;
        case 2://mostrar la suma de cada columna
            system("cls");
            sumColumns(cube);
            break;
        case 3://mostrar la suma de cada fila
            system("cls");
            sumSide(cube);
            break;
        case 4://mostrar cubo
            system("cls");
            show(cube);
            break;
        case 5://salir
        salir = 1;
            system("pause");
            break;
        default:
            system("cls");
            printf("\n[opcion no valida] \n\n");
            continue;
        }
    }while(salir != 1);
}

//llenado del cubo
void fill(int cube[5][5][5]){

    int i, j, k, option, temp, opc = 0;
    
    do{
        p("------------------------------------------------------------------");
        p("\nSelecciona de las siguiente opciones la manera de llenar el cubo:\n1._ llenar automaticamente\n2._ introducir datos\n");
        p("------------------------------------------------------------------\n");
        p("Digite la opcion: \n");
        s("%d", &option);
    
        switch(option){
        case 1:
            for(i=0; i<5; i++){//caras
                for(j=0; j<5; j++){//columna
                    for(k=0; k<5; k++){//filas
                        cube[i][j][k] = rand()%10; // rand % num-1 
                    }
                }
            }
            system("cls");
            opc++;
            break;
        case 2:
            system("cls");
            for(i=0; i<5; i++){//caras
                for(j=0; j<5; j++){//columnas
                    for(k=0; k<5; k++){//filas
                        p("Cubo[%d][%d][%d] = ", i, j, k);
                        s("%d", &cube[i][j][k]);
                    }
                }
            }
            opc++;
            break;
        default:
            system("cls");
            p("opcion no valida \n");
        break;
        }
    }while(opc != 1);
    system("cls");
}

// mostrar cubo
void show(int cube[5][5][5]){

    int i, j ,k;
    
    p("\n");
    for(i=0; i<5; i++){//caras
        p("Lado %d del cubo \n\n", i+1);
        for(j=0; j<5; j++){//columnas
            for(k=0; k<5; k++){//filas
                p("[%d]", cube[i][j][k]);
            }
            p("\n");
        }
        p("\n");
    }
    p("\n");
}
//sacar el total por cada cara
void sumSide(int cube[5][5][5]){
    int i, j, k;//contadores
    int *pointer = **cube; // *(*(*(cube+i)+k)+(j));
    size_t count;//acumulador
    for(i=0; i<5; i++){//caras
        count = 0;
        for(j=0; j<5; j++){//columna
            for(k=0; k<5; k++){//fila
                count += *pointer; //cubo[0][1][0]
                *pointer++;
            }
        }
        p("la suma de la cara %d = %d \n\n", i+1, count);
    }
}

void sumRows(int cube[5][5][5]){
    int i, j, k;//contadores

    int *pointer = **cube; // *(*(*(cube+i)+k)+(j)); o *(*(cube[i]+j)+k); o *(cube[i][j]+k)

    size_t count;//acumulador sin valor definido

    for(i=0; i<5; i++){//caras
        for(j=0; j<5; j++){//columna
            count = 0; // reinicio por cambio de columna
            for(k=0; k<5; k++){//fila
                count += *pointer;
                *pointer++;
            }
            p("En la cara [%d] la suma de la fila [%d] = %d \n\n", i+1, j+1, count);
        }
    }
}

void sumColumns(int cube[5][5][5]){
    int i, j, k;//contadores
    
    size_t count;//acumulador sin valor definido

    for(i=0; i<5; i++){//caras
        for(j=0; j<5; j++){//columna
            count = 0; // reinicio por cambio de fila
            for(k=0; k<5; k++){//fila
                count += *(*(*(cube+i)+k)+(j)); //cambiar j con k para iterar las columnas
            }
            p("En la cara [%d] la suma de la columna [%d] = %d \n\n", i+1, j+1, count);
        }
    }
}
