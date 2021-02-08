/*3. Intentamos la copa del árbol:
para árbol de 5
for(fila=altura-1; fila>=0;fila--)
fila=4 4 espacios + 1 asterisco
fila=3 3 espacios + 3 asterisco
fila=2 2 espacios + 5 asterisco
fila=1 1 espacios + 7 asterisco
fila=0 0 espacios + 9 asterisco
*/
#include<stdio.h>
int main(){
	int i;
	int h;
	char fondo;
	char relleno;
	int f;
	int r;
	printf("\nElija un caracter para el fondo: ");
	scanf("%c",&fondo);
	printf("\nElija un caracter para el relleno: ");
	scanf("\n%c",&relleno);
	printf("\nInserte altura del arbol:");
	scanf("%d",&h);
	printf("La altura del arbol es %d", h);
	for(i=1;i<h+1;i++){
		printf("\n");
		f=h+1-i;
		r=i;
		for(i=1;i<=f;i++){
			printf("%c",fondo);
		}
		for(i=1;i<=r;i++){
			printf("%c", relleno);
		}
		for(i=1;i<=f;i++){
			printf("%c",fondo);
		}
	}
	return 0;
}
