#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int idades[100];
	int infA = 0,infB = 0,juvA = 0,juvB = 0,cA = 0;
	int i = 0;
	
	printf("Igor Pedroso Lolli\nJamille Kissa Martins\n\n");
	
	for(i=0; i<100; i++){
		printf("Idade do nadador %d: ", i+1);
		scanf("%d", &idades[i]);
		
		while(idades[i] <5){
			printf("Infome uma idade valida: ");
			scanf("%d", &idades[i]);
		}

		if(idades[i] >= 5 && idades[i] <= 7){
			infA++;
		}
		else if(idades[i] >= 8 && idades[i] <= 10){
			infB++;
		}
		else if(idades[i] >= 11 && idades[i] <= 13){
			juvA++;
		}
		else if(idades[i] >= 14 && idades[i] <= 17){
			juvB++;
		}
		else if(idades[i] >= 18){
			cA++;	
		}
	}
	
	printf("\nCategoria: Infantil A\nQuantidade: %d", infA);
	printf("\nCategoria: Infantil B\nQuantidade: %d", infB);
	printf("\nCategoria: Juvenil A\nQuantidade: %d", juvA);
	printf("\nCategoria: Juvenil B\nQuantidade: %d", juvB);
	printf("\nCategoria: Adulto\nQuantidade: %d", cA);
	
	return 0;
}
