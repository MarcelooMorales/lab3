//Se inicia el progama con la biblioteca stdio.h//
//se hace una funcion en torno a la cantidad de sueldo ganado por hora//
//se de claran las variables en float tales como: horas,dinero,resultado,i,sueldo//
//se muestra en pantalla para ingresar la cantidad de sueldo ganado por hora//
//se escanea la funcion//
//se muestra en pantalla para ingresar la cantidad de horas trabajadas por dia//
//se aplica el for para que muestre cada dia e ingresar la hora trabajada//
//se muestra en pantalla cada dia para ingresar cada hora trabajada//
//se muestra en pantalla el sueldo que corresponde a las horas ingresadas por ccada dia//
//se returna y se ejecuta el progama//

#include <stdio.h>
float pagoxhoras (float dinero, float horas){
    float resultado;
    resultado=(horas*dinero);
    return resultado;
}

int main (void){
    float horas,dinero,resultado,i,sueldo=0;

    printf("Ingrese la cantidad de sueldo que se gana por hora \n");

    scanf("%f",&dinero);


    printf("Ingrese la cantidad de horas trabajadas en cada dia \n");

    for(i=1; i<=6;i++){

        printf("Dia numero %1.f\n", i);
        printf("Ingrese la cantidad de horas trabajadas: ");
        scanf("%f",&horas);
        resultado= pagoxhoras (dinero, horas);
        sueldo+=resultado;
    }
    printf("el sueldo que correspone es de: %1.f",sueldo);
    return 0;
}
