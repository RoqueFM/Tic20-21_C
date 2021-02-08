#include <stdio.h>
int main(){
	int num;
	int i;
	printf("Mete un numero para la tabla: ");
	scanf("%d",&num);
	printf("Tabla del %d:", num);
	for(i=1; i<=10; i++){ // for (inicializacion; condicion; incremento)
	printf("\n%d x %d = %d", num, i, num*i);
	}
	return 0;
}
