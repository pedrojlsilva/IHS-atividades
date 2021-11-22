#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

extern int bubblesort(int *, int);

int main(){
    int sz = 0, *vetor;
    printf("Digite o tamanho do vetor (1-10): ");
    scanf("%d", &sz);

    vetor = (int*) calloc(sz, sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação do vetor");
        return 0;
    }

    int temp = 0;
    printf("Digite o vetor desejado: \n");
    for(int i=0; i<sz; i++){
        scanf("%d", &temp);
        vetor[i] = temp;
    }

    bubblesort(vetor, sz);
    printf("vetor ordenado eh: \n");

    for(int i=0; i<sz; i++){
        printf("%d%c", vetor[i], i==sz-1 ? '\n' : ' ');
    }

    free(vetor);

    return 0;
}