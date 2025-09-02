#include <stdio.h>

int main(){

printf("*** Desafio Jogo de xadrez ***\n");
    //Nível novato - Movimentação de peças

    //Movimento da torre (horizontal ou vertical)
    //usando estrutura de repetição while
    int torre = 5;
    int i = 1;

    
    printf("\nMovimento da Torre para a direita:\n");

    while (i <= torre)
    {
        printf("direita\n");//imprime a direção do movimento
        i++;
    }
    //Movimento do bispo (diagonal)
    //usando estrutura de repetição do-while
    int bispo = 5;
    i = 1;
    printf("\nMovimento do Bispo na diagonal:\n");

    do
    {
       printf("Cima, Direita\n");
       i++;
    } while (i <= bispo);

    //Movimento da rainha (esquerda)
    //usando estrutura de repetição for
    int rainha = 8;
    
     printf("\nMovimento da Rainha para a esquerda:\n");

    for (i = 1; i <= rainha; i++)
    {
        printf("Esquerda\n");
    }
    

    return 0;
}
