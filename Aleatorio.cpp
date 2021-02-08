//Haz un juego en el que compitas con el ordenador
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int puntuacion;
	int i;
	int resultados[6];
	srand(time(0));
	for(i=1;i<=6000;i++){
		puntuacion=rand()%6+1;
		resultados[puntuacion-1]=resultados[puntuacion-1]+1;
	}
	for(i=1;i<6;i++){
		printf("resultados[%d]=%d",i,resultados[i]);
	}
	printf("%d",puntuacion);
	return 0;
} 
