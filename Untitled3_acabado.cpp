#include<stdio.h>

int main(){
	int num1, num2, num3;
	int mayor;
	printf("Numero 1: ");
	scanf("%d",&num1);
	printf("Numero 2: ");
	scanf("%d",&num2);
	printf("Numero 3: ");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		mayor=num1;
	}
	if(num2>num1 && num2>num3){
		mayor=num2;
	}
	if(num3>num2 && num3>num1){
		mayor=num3;
	}
	printf("El mayor es: %d",mayor);
	return 0;
}
