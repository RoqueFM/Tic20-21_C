#include<stdio.h>

int main(){
	char obligatorias[][100]={"Matematicas II", "Matematicas aplicadas a las ciencias Sociales", "Latin II", "Ingles", "Frances"};
	char voluntarias[][100]={"Fisica", "Dibujo Tecnico II", "Economia de la Empresa", "Frances"};
	char obligatoriasletras[][100]={"Lengua y Literatura II", "Historia de España", "Idioma"};
	int media_1bac;
	int media_2bac;
	int i;
	int enter;
	int obligatoria;
	int mediaobligatorias1;
	int mediaobligatorias2;
	mediaobligatorias2=0;
	int mediaobligatorias3;
	mediaobligatorias3=0;
	printf("\n***************************");
	printf("\n*  CALCULADORA NOTA EVAU   ");
	printf("\n***************************");
	printf("\nEscoja la asignatura obligatoria (1, 2 o 3)");
	for(i=0;i<5;i++){
		printf("\n%d...........%s",i+1,obligatorias[i]);
	}
	printf("\nIntroduzca numero: ");
	scanf("%d",&obligatoria);
	printf("\nEscoja las asignaturas voluntarias (1, 2, 3, ...)");
	for(i=0;i<9;i++){
		printf("\n%d...........%s",i+1,voluntarias[i]);
	}
	printf("\nInserte la nota media de primero de bachillerato: ");
	scanf("%d",&media_1bac);
	printf("\nInserte la nota media de segundo de bachillerato: ");
	scanf("%d",&media_2bac);
	printf("\n***************************");
	printf("\nFase Obligatoria: ");
	printf("\nInserte nota de %s: ", obligatorias[obligatoria-1]);
	scanf("%d",&mediaobligatorias1);
	for(i=0;i<3;i++){
		printf("\nInserte nota de %s: ", obligatoriasletras[i]);
		scanf("%d",&mediaobligatorias2);
		mediaobligatorias3=mediaobligatorias2+mediaobligatorias3;
	}
	printf("La nota media de la fase obligatoria es: %d", (mediaobligatorias3+mediaobligatorias1)/4);
	if((mediaobligatorias3+mediaobligatorias1)/4<5){
		printf("\nHas suspendido, no continuas en el juego...");
	}else{
		printf("\nHas aprobado, continúas jugando, presiona enter para continuar");
		scanf("%c",&enter);
	}
	return 0;
}
