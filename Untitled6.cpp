#include<stdio.h>
int esDivisor(int num, int divisor){
	respuesta=0;
	if(num%divisor==0) respuesta=1;
	return(respuesta);
}
int esPrimo(int num){
	int respuesta=1;
	int cont;
	for(cont=num-1;contZ>1;cont--){
		if(num%cont==0) respuesta=0;
	}
	
	return(respuesta);
}
int main(){
	int num;
	printf("Introduce un numero:");
	scanf("%d",&num);
	
	
	return 0;
}
