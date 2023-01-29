/* Escreve um programa que sorteio, aleatoriamente, 10 n�meros e armazene estes em um vetor. Em seguida, o usu�rio digita um n�mero e
seu programa em C deve acusar se o n�mero digitado est� no vetor ou n�o. Se estiver, diga a posi��o que est�.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Descubra se o n�mero est� inserido no vetor!\n\n");
	
	int num[10], valor_escolhido, encontrado=0, posicao=0;
	
	srand(time(NULL)); // faz com que gere numeros aleatorios toda vez que compilar o programa
	
	printf("Os n�meros foram gerados de forma aleat�ria\n\n");
	
	for(int i=0; i<10; i++){
		num[i] = rand() % 100;
	//Para que um n�mero �x� receba um valor entre 1 e 10, -> x = 1 + ( rand() % 10 ) ai seria numeros aleatorios entre 1 e 10. colocando 100 amplia os numeros possiveis
	//printf("%d� n�mero: %d\n\n", i+1, num[i]);se quisesse mostrar quais os valores gerados seria assim
	}
	
	printf("Escolha um n�mero entre 0 a 99 para verificar se est� dentro do vetor: ");
	scanf("%d", &valor_escolhido);

	for (int i=0; i<10; i++) {
		if(num[i]==valor_escolhido){
			encontrado=1;
			posicao=i;
		}
	}
	
	if(encontrado){
		printf("\nO n�mero digitado %d est� dentro do vetor na posi��o %d�", valor_escolhido, posicao+1);
	} else {
		printf("\nO n�mero escolhido n�o est� dentro do vetor.\n");
	}
  
	return 0;
}
