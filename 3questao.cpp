//Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.G (Progressão Geométrica), armazenando esses valores em um vetor de tamanho 10.

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
	
	printf("Digite a razão: ");
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
