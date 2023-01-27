//Crie um aplicativo em C que pe�a um n�mero inicial ao usu�rio, uma raz�o e calcule os termos de uma P.G (Progress�o Geom�trica), armazenando esses valores em um vetor de tamanho 10.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calcule os termos de uma P.G \n\n");
	
	int PG[10];
	int a;
	int r;
		
		
	printf("Digite o valor inicial: ");
	scanf("%d", &a);
	
	printf("Digite a raz�o: ");
	scanf("%d", &r);
	
	PG[0] = a;
	
	for(int i=1; i<10; i++){
		PG[i] = PG[i-1] * r;
	}
	
	for(int i=0; i<10; i++){
		printf("%d\t", PG[i]);	
	}
	
	return 0;
	
}
