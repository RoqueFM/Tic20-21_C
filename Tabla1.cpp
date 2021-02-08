#include<stdio.h>
int main(){
	int nt;
	int i;
	printf("\nInserte el numero de la table que quieras ver: ");
	scanf("%d",&nt);
	printf("\n************************");
	printf("\n*     TABLA DEL %d     *", nt);
	printf("\n************************");
	for(i=1;i<=10;i++){
		printf("\n*      %d x %d = %d       *", nt, i, nt*i);
	}
	printf("\n************************");
	printf("\nYA ESTA GILIPOLLAS");
	return 0;
	}
