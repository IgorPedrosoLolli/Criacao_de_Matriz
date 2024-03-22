#include <stdio.h>
#include <stdlib.h>

int main(){
    char matriz[2][5][30];
    int l = 0, c = 0;
    
    do{
        printf("Digite o nome da sua materia a ser escolhida: ");
        scanf("%s", matriz[l][0]);
        
        for(c=0; c<5; c++){
            printf("Digite o nome do aluno: ");
            scanf("%s", matriz[l][c+1]);
        }
        l++;
    }while(l<2);
    
    system("cls");
    
    for(l = 0; l < 2; l++){
        printf("\nMateria: %s\n", matriz[l][0]);
        for(c = 0; c < 5; c++){
            printf("Aluno: %s\n", matriz[l][c+1]);
        }
    }
    printf("\n");
    
    return 0;
}

