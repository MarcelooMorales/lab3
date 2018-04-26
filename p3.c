//se inicia el progama con la bliblioteca stdio.h//
//se declara la variable i, ma, mesanterior//

#include <stdio.h>

int cuota_20(){

	int i, ma, mesanterior;

	printf("Ingrese el valor de la primera cuota:\n");

	scanf("%d",&mesanterior);

	for (i=1;i<=20;i++){

		mesanterior=mesanterior*2;
		ma=mesanterior*2;
		printf("$%d\n",ma);
	}
	return ma;
}

void imprimir_total (int ma){
	printf("El total que se pago fue:\n$%d",ma);
	}

int main(){

	 int x;
	x=cuota_20();
	imprimir_total(x);

	return 0;
}
