//Crie um programa em C que peça 10 números inteiros, armazene eles em um vetor e diga qual elemento é o menor e o maior valor e seus índices.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Qual o menor e maior número informado\n\n");
	
	int v[10], maior, maior_indice, menor, menor_indice;
	
	for(int i=0; i<10; i++){
		printf("Digite o %d número: ", i+1);
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
	
	printf("\nO menor número é: %d e está na posição %d\nO maior número é: %d e está na posição %d", menor, menor_indice+1, maior, maior_indice+1);
		
	return 0;
}
