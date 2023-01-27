//Crie um aplicativo em C que pe�a um n�mero inicial ao usu�rio, uma raz�o e calcule os termos de uma P.A (Progress�o Aritm�tica), armazenando esses valores em um vetor de tamanho 10.

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
	// ou entao substitui, retirando o a e colocando PA[0]. Ja guardando o valor nesta posi��o.
	
	printf("Digite a raz�o: ");
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
	
	
