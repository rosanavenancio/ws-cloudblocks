/*Exercício 3

Faça um programa que leia um vetor de 20 números. Depois mostre os números pares e suas respectivas posições.
*/
#include <stdio.h>

int main() {
    int vetor[20];
    int i;

    // ====== Leitura dos 20 números ======
    for(i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // ====== Mostrando os números pares ======
    printf("\nNúmeros pares e suas posições:\n");
    for(i = 0; i < 20; i++) {
        if(vetor[i] % 2 == 0) {
            printf("Posição %d → %d\n", i, vetor[i]);
        }
    }

    return 0;
}


/*📘 Explicação:
O programa percorre o vetor e mostra apenas os números pares, junto da posição onde estão armazenados.

🧠 Exercício 5

Faça um programa que leia dois vetores A e B, com 20 números inteiros. Efetue a soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente.
*/
#include <stdio.h>

int main() {
    int A[20], B[20], C[20];
    int i, j, temp;

    // ====== Leitura do vetor A ======
    printf("Digite os valores do vetor A:\n");
    for(i = 0; i < 20; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // ====== Leitura do vetor B ======
    printf("\nDigite os valores do vetor B:\n");
    for(i = 0; i < 20; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // ====== Soma dos vetores A e B em C ======
    for(i = 0; i < 20; i++) {
        C[i] = A[i] + B[i];
    }

    // ====== Ordenação do vetor C (método simples Bubble Sort) ======
    for(i = 0; i < 19; i++) {
        for(j = i + 1; j < 20; j++) {
            if(C[i] > C[j]) {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    // ====== Exibe o vetor C em ordem crescente ======
    printf("\nVetor C (soma em ordem crescente):\n");
    for(i = 0; i < 20; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}


/*📘 Explicação:

O programa lê 20 números em A e 20 em B.

Soma os dois vetores e guarda o resultado em C.

Ordena o vetor C em ordem crescente.

Exibe o resultado final.*/
