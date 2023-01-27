//Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Calcule os termos de uma P. A\n\n");
	
	int PA[10];
	int a;
	int r;
		
		
	printf("Digite o valor inicial: ");
	scanf("%d", &a);
	// ou entao substitui, retirando o a e colocando PA[0]. Ja guardando o valor nesta posição.
	
	printf("Digite a razão: ");
	scanf("%d", &r);
	
	PA[0] = a;
	
	for(int i=1; i<10; i++){
		PA[i] = PA[i-1] + r;
	}
	
	for(int i=0; i<10; i++){
		printf("%d\t", PA[i]);	
	}
	
	return 0;
	
}
	
	
