#include <stdio.h>
void inicio();
int LeerYValidar();
int EstaDentroDelRango(int min, int max, int num);
int main()
{   
    inicio();
    return 0;
}
void inicio(){
    int num = 0, acum = 0;
    float prom = 0;
    int rangos[3] = {0,0,0}; // {a, b, c} del pdf
    // a. Cantidad de números ingresados entre 100 y 500
    // b. Cantidad de números pares ingresados entre 500 y 1200
    // c. Cantidad de números ingresados entre 1200 y 2000
    
    do{
        num = LeerYValidar();
        if(EstaDentroDelRango(100, 500, num)==1){
            rangos[0]++;
        }
        if(EstaDentroDelRango(500, 1200, num)==1){
            rangos[1]++;
        }
        if(EstaDentroDelRango(1200, 2000, num)==1){
            rangos[2]++;
            acum += num;
        }
    }
    while(num!=99);
 
    prom = (float)(acum)/(float)(rangos[2]);
    printf("la cantidad de numeros entre el 100 y 500 es: %d \n", rangos[0]);
    printf("la cantidad de numeros entre el 500 y 1200 es: %d \n", rangos[1]);
    printf("el promedio de numeros entre el 1200 y 2000 es: %f \n", prom);
}
int LeerYValidar(){
    int num;
    printf("Ingrese un numeros entre el 100 y 2000: \n");
    do{
        scanf("%d", &num);
        if(!(EstaDentroDelRango(99, 2000, num) == 1)){
            printf("numero invalido \n");
        }
    }while(!(EstaDentroDelRango(99, 2000, num) == 1));
    return num;
}
int EstaDentroDelRango(int min, int max, int num){
    return (num >=min && num< max) ? 1 : 0;
}
