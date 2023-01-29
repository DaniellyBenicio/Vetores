/* Escreve um programa que sorteio, aleatoriamente, 10 números e armazene estes em um vetor. Em seguida, o usuário digita um número e
seu programa em C deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Descubra se o número está inserido no vetor!\n\n");
	
	int num[10], valor_escolhido, encontrado=0, posicao=0;
	
	srand(time(NULL)); // faz com que gere numeros aleatorios toda vez que compilar o programa
	
	printf("Os números foram gerados de forma aleatória\n\n");
	
	for(int i=0; i<10; i++){
		num[i] = rand() % 100;
	//Para que um número ‘x’ receba um valor entre 1 e 10, -> x = 1 + ( rand() % 10 ) ai seria numeros aleatorios entre 1 e 10. colocando 100 amplia os numeros possiveis
	//printf("%dº número: %d\n\n", i+1, num[i]);se quisesse mostrar quais os valores gerados seria assim
	}
	
	printf("Escolha um número entre 0 a 99 para verificar se está dentro do vetor: ");
	scanf("%d", &valor_escolhido);

	for (int i=0; i<10; i++) {
		if(num[i]==valor_escolhido){
			encontrado=1;
			posicao=i;
		}
	}
	
	if(encontrado){
		printf("\nO número digitado %d está dentro do vetor na posição %dº", valor_escolhido, posicao+1);
	} else {
		printf("\nO número escolhido não está dentro do vetor.\n");
	}
  
	return 0;
}
