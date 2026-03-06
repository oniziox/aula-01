#include <stdio.h>
int main ()
{
    char nome[15];
    float n1, n2, soma, media;
    printf("digite seu nome: ");
    scanf("%s", &nome);
    printf("digite sua nota: ");
    scanf("%f", &n1);
    printf("digite sua nota: ");
    scanf("%f", &n2);
    soma=n1+n2;
    media=soma/2;
    printf("%s, sua media de notas: %.1f",nome, media);
    return 0;

}