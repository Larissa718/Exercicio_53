//Larissa Furtado - simulado questão 96

#include <stdio.h>

int main(){
		
	int matrizA[3][4], matrizB[3][4], soma[3][4], diferenca[3][4], l, c;
	
	printf("\nMatrizA:");
	for(c=0; c<4; c++){
		for(l=0; l<3; l++){
			printf("Forneca um numero inteiro: ");
			scanf("%d", &matrizA[l][c]);
		}
	}
	
	printf("\nMatrizB:");
	for(c=0; c<4; c++){
		for(l=0; l<3; l++){
			printf("Forneca um numero inteiro: ");
			scanf("%d", &matrizB[l][c]);
			soma[l][c]=matrizA[l][c]+matrizB[l][c];
			diferenca[l][c]=matrizA[l][c]-matrizB[l][c];
		}
	}
	
	printf("\nMatrizA:");
	for(c=0; c<4; c++){	
		for(l=0; l<3; l++){
			printf("\t%d", matrizA[l][c]);
		}
	}
	
	printf("\nMatrizB:");
	for(c=0; c<4; c++){
		for(l=0; l<3; l++){
			printf("\t%d", matrizB[l][c]);
		}
	}
	
	printf("\nSoma:");
	for(c=0; c<4; c++){
		for(l=0; l<3; l++){
			printf("\t%d", soma[l][c]);
		}
	}
	
	printf("\nDiferenca:");
	for(c=0; c<4; c++){
		for(l=0; l<3; l++){
			printf("\t%d", diferenca[l][c]);
		}
	}
	return 0;
}
