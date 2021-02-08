//Haz un juego en el que compitas con el ordenador
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tirada(){
	int puntuacion;
	srand(time(0));
	puntuacion=rand()%6+1;
	return(puntuacion);
}
int main(){
	int i;
	int ordenador;
	int jugador;
	int ordenador_total;
	ordenador_total=0;
	int jugador_total;
	jugador_total=0;
	int ord[3];
	int jug[3];
	char tecla;
	for(i=0;i<=3;i++){
		tirada();
		printf("\nTurno %d del Ordenador: ", i+1);
		scanf("%c",&tecla);
		printf("%d",tirada());
		ordenador=tirada();
		ordenador_total=tirada()+ordenador_total;
		ord[i]=tirada();
		tirada();
		printf("\nTurno %d del Jugador: ", i+1);
		scanf("%c",&tecla);
		printf("%d",tirada());
		jugador=tirada();
		jugador_total=tirada()+jugador_total;
		jug[i]=tirada();
		if(jugador<ordenador){
			printf("\nHa ganado el ordenador");
		}else{
			printf("\nHa ganado el jugador");
		}
	}
	scanf("%c",&tecla);
	if(ordenador_total<jugador_total){
		printf("\n¡HAS GANADO!");
	}else if(ordenador_total>jugador_total){
		printf("\nVaya, ha ganado el ordenador...");
	}else{
		printf("\n¡EMPATE!");
	}
	//PUNTUACIONES
	printf("\nResumen de las tres rondas: ");
	printf("\n                                                *********************************");
	printf("\n                                                *          PUNTUACIONES         *");
	printf("\n                                                *********************************");
	printf("\n                                                *      JUGADOR     ORDENADOR    *");
	for(i=0;i<=3;i++){
		printf("\n                                                ");
		printf("*Ronda%d:  %d            %d        *", i+1, jug[i], ord[i]);
	}
	printf("\n                                                *********************************");
	printf("\n*********************************");
	printf("\nHas conseguido %d puntos.",jugador_total);
	printf("\nEl ordenador ha conseguido %d puntos.",ordenador_total);
	printf("\n*********************************");
	printf("\n*********************************");
	return 0;
}
