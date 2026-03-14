#include <stdio.h>

int main() {
    int resposta, pontos = 0;

    // Vetor com as respostas corretas
    int corretas[10] = {2, 1, 3, 4, 2, 4, 3, 2, 1, 4};

    // Vetor com as respostas do usuário
    int usuario[10];

    printf("=======================================\n");
    printf("      QUIZ COMPLETO EM C\n");
    printf("  While / Do-While / Vetores / Matrizes\n");
    printf("=======================================\n\n");


    // ------------------------ PERGUNTAS ------------------------ //

    // 1 - While
    printf("\n1) O que o comando WHILE faz?\n");
    printf("1) Executa sempre uma vez\n");
    printf("2) Repete enquanto a condicao for verdadeira\n");
    printf("3) Nao repete nunca\n");
    printf("4) Serve apenas para vetores\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[0] = resposta;
    if (resposta == corretas[0]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 2\n"); }


    // 2 - Do While
    printf("\n2) O comando DO-WHILE:\n");
    printf("1) Executa primeiro e testa depois\n");
    printf("2) Testa antes de executar\n");
    printf("3) Nao repete nunca\n");
    printf("4) Serve só para matrizes\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[1] = resposta;
    if (resposta == corretas[1]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 1\n"); }


    // 3 - Vetor
    printf("\n3) Como declarar um vetor de 10 inteiros?\n");
    printf("1) int vet(10);\n");
    printf("2) int vet{10};\n");
    printf("3) int vet[10];\n");
    printf("4) vetor int 10;\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[2] = resposta;
    if (resposta == corretas[2]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 3\n"); }


    // 4 - Matriz
    printf("\n4) Como declarar uma matriz 3x3?\n");
    printf("1) int mat[3];\n");
    printf("2) matriz[3][3];\n");
    printf("3) int matriz(3,3);\n");
    printf("4) int mat[3][3];\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[3] = resposta;
    if (resposta == corretas[3]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 4\n"); }


    // 5 - Percorrer vetores
    printf("\n5) Para percorrer um vetor podemos usar:\n");
    printf("1) Apenas while\n");
    printf("2) for, while ou do-while\n");
    printf("3) Apenas do-while\n");
    printf("4) Apenas for\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[4] = resposta;
    if (resposta == corretas[4]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 2\n"); }


    // ======================= MATRIZES ======================= //

    // 6 - Acessar elemento da matriz
    printf("\n6) Como acessar o elemento da linha 2, coluna 3 de uma matriz mat?\n");
    printf("1) mat(2,3)\n");
    printf("2) mat[2,3]\n");
    printf("3) mat{2][3}\n");
    printf("4) mat[1][2]\n");  // lembre: começa no 0
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[5] = resposta;
    if (resposta == corretas[5]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 4 (índices começam em 0)\n"); }


    // 7 - Linhas e colunas
    printf("\n7) Uma matriz declarada como int m[4][3] possui:\n");
    printf("1) 3 linhas e 4 colunas\n");
    printf("2) 4 linhas e 4 colunas\n");
    printf("3) 4 linhas e 3 colunas\n");
    printf("4) 3 elementos totais\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[6] = resposta;
    if (resposta == corretas[6]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 3\n"); }


    // 8 - Loop para ler matriz
    printf("\n8) Para preencher uma matriz usamos:\n");
    printf("1) Um while\n");
    printf("2) Dois loops (for ou while), um dentro do outro\n");
    printf("3) Apenas um for\n");
    printf("4) Nao se pode preencher\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[7] = resposta;
    if (resposta == corretas[7]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 2\n"); }


    // 9 - Soma de matriz
    printf("\n9) Para somar todos os elementos de uma matriz 3x3 devemos:\n");
    printf("1) Percorrer cada linha e cada coluna\n");
    printf("2) Somar só a diagonal principal\n");
    printf("3) Somar só a primeira linha\n");
    printf("4) Somar só a primeira coluna\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[8] = resposta;
    if (resposta == corretas[8]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 1\n"); }


    // 10 - Impressão da matriz
    printf("\n10) Para imprimir uma matriz usamos:\n");
    printf("1) Apenas um printf\n");
    printf("2) Outro comando especial\n");
    printf("3) Somente quebra de linha\n");
    printf("4) Dois loops (linha e coluna)\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    usuario[9] = resposta;
    if (resposta == corretas[9]) { printf("✔ Correto!\n"); pontos++; }
    else { printf("✘ Errado! A resposta correta era: 4\n"); }


    // ------------------------ RESULTADO ------------------------ //
    printf("\n=======================================\n");
    printf("               RESULTADO\n");
    printf("=======================================\n");
    printf("Voce acertou %d de 10 perguntas.\n", pontos);


    // Mostrar todas as respostas
    printf("\n---------------------------------------\n");
    printf("        RESPOSTAS DO QUIZ\n");
    printf("---------------------------------------\n");

    for(int i = 0; i < 10; i++) {
        printf("Questao %d - Voce marcou: %d | Correta: %d\n",
               i + 1, usuario[i], corretas[i]);
    }

    printf("\nObrigado por jogar!\n");

    return 0;
}
