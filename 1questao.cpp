//Crie um programa em C que pe�a 10 n�meros inteiros, armazene eles em um vetor e diga qual elemento � o menor e o maior valor e seus �ndices.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Qual o menor e maior n�mero informado\n\n");
	
	int v[10], maior, maior_indice, menor, menor_indice;
	
	for(int i=0; i<10; i++){
		printf("Digite o %d n�mero: ", i+1);
		scanf("%d", &v[i]);
	}
	
	maior = v[0];
	maior_indice = 0;
	menor = v[0];
	menor_indice = 0;
	
	for(int i=0; i<10; i++){
		if(maior < v[i]){
			maior = v[i];
			maior_indice = i;
		} 
		
		if(menor > v[i]){
			menor = v[i];
			menor_indice = i;
		}
	}
	
	printf("\nO menor n�mero �: %d e est� na posi��o %d\nO maior n�mero �: %d e est� na posi��o %d", menor, menor_indice+1, maior, maior_indice+1);
		
	return 0;
}
