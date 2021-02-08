#include<stdio.h>
int main(){
	int numero[10];
	int cont;
	for(cont=0; cont<10; cont++){
		printf("\nNumero %d: ",cont);
		scanf("%d",&numero[cont]);
	}
	printf("**************");
	printf("*  La Lista  *");
	printf("**************");
	for(cont=0;cont<10;cont++){
		printf("\nNumeros %d: %d",cont,numero[cont]);
	}
	return 0;
}
