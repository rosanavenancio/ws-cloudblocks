/* Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = 𝜋 * 𝑅² */

#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo e: %.2f\n", area);

    return 0;
}
