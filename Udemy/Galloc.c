#include <stdio.h>
#include <stdlib.h>
//Calloc

int main(){

int qtd, *p;

printf("Informe a quantidade de Elementos para o Vetor: ");
scanf("%d", &qtd);

int size = qtd * sizeof(int);

//Galloc - Sempre Zera a Memoria que será alocada posteriormente

// Multiplica     |  por    |
//                |         |
//               \ /       \ / 
//                '         '  

p = (int*)calloc(qtd, sizeof(int));

    if(p){
    for(int i = 0; i < qtd; i++){
        printf("Informe o Valor para a posição %d do vetor: ", i);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("A Variavel 'numeros[%d]' vale %d \n", i, p[i]);
    }
    printf("A Variavel 'numeros' ocupa %d bytes em memoria.\n", size);
    }else
    {
        printf("ERRO: Memoria Insuficiente");
        system("pause");
    }
    

    free(p); //Libera a memoria anteriomente alocada em P
    p = NULL; // Medida de Segurança (Anula Ponteiro)(Desacopla endereço de momoria do Ponteiro);

    return 0;
}