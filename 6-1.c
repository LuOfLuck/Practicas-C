#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
  #include<windows.h>
#endif  
void  inicio(); //Programa inicial
int menuDeOpciones(int num1, int num2); //Muestra el menu de opciones
void suma(int num1, int num2); //suma
void resta(int num1, int num2); //resta
void multiplicar(int num1, int num2); //multiplica
void dividir(int num1, int num2); //divide
void limpiarPantalla(); //limpia la pantalla de la termina
void c(); //precione una tecla cualquiera para continuar 
int main(){    
    inicio();
    printf("Gracias Por participar!!!");
    return 0;
}


void inicio(){
    int num1, num2, opcion;
    printf("ingrese 2 numeros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    do{
        opcion = menuDeOpciones(num1, num2);
        switch(opcion){
            case 1:
                suma(num1, num2);
                break;
            case 2:
                resta(num1, num2);
                break;
            case 3:
                multiplicar(num1, num2);
                break;
            case 4:
                dividir(num1,num2);
                break;
            case 5:
                limpiarPantalla();
                inicio();
                break;
        }
        limpiarPantalla();
    }while(!(opcion == 6 || opcion == 5));
}

int menuDeOpciones(int num1, int num2){
    int opcion;
    printf("\n--------------------------\n");
    printf("Numero 1: %d. Numero 2: %d. \n", num1, num2);
    printf(" 1) Sumar \n 2) Restar \n 3) Multiplicar \n 4) dividir \n 5) Ingrese Nuevos numeros \n 6) Salir \n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

void suma(int num1, int num2){
    int res = num1 + num2;
    printf("La suma de los numeros es: %d \n", res);
    c();
}
void resta(int num1, int num2){
    int res = num1 - num2;
    printf("La resta de los numeros es: %d \n", res);
    c();
}
void multiplicar(int num1, int num2){
    int res = num1 * num2;
    printf("La multiplicacion de los numeros es: %d \n", res);
    c();
}
void dividir(int num1, int num2){
    float res = (float)(num1) / (float)(num2);
    printf("La divicion de los numeros es: %f \n", res);
    c();
}
void c(){
    char a;
    printf("precione una tecla cualquiera para continuar");
    scanf(" %c", &a);
}


void limpiarPantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}
