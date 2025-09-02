#include <stdio.h> 

//Nível mestre
// Torre: só anda em linha reta 
void torre(int casa){ 
    if(casa > 0){ 
        printf("Direita\n"); 
        torre(casa - 1); } 
    } 

// Bispo: movimento diagonal (direita + cima) 
// Com recursividade + loops aninhados 
void bispo(int casa){ 
    if(casa > 0){ 
        // loop externo = movimento vertical (Cima)
        for(int i = 0; i < 1; i++){  
            printf("Cima\n");

            // loop interno = movimento horizontal (Direita)
            for(int j = 0; j < 1; j++){  
                printf("Direita\n");
            }
        }
        // chamada recursiva para repetir a diagonal
        bispo(casa - 1); 
    } 
} 
// Rainha: pode andar em linha reta ou diagonal (aqui, esquerda) 
void rainha(int casa){ 
    if(casa > 0){
       printf("Esquerda\n"); 
       rainha(casa - 1); 
   } 
} 
// Cavalo com loops complexos 
// movimento em "L" (2 para cima e 1 para a direita) 
void cavalo(int casa){ 
    if(casa > 0){ 
        for (int i = 1; i<= 2; i++) // loop para cima 
    { printf("cima\n"); 
        if(i < 2) 
        continue;// continua para o próximo "cima" 
        } for(int j = 1; j <= 2; j++){// loop horizontal 
            if(j == 1){ 
                printf("Direita\n"); 
                break;}// só anda uma vez para a direita 
                 
         } 
         cavalo(casa - 1);
    } 
} 
int main(){ printf("*** Desafio Jogo de xadrez ***\n"); 
                    
    printf("\nMovimento da Torre para a direita:\n"); 
    torre(5); 

    printf("\nMovimento do Bispo na diagonal:\n"); 
    bispo(5); 

    printf("\nMovimento da Rainha para a esquerda:\n"); 
    rainha(8); 
                    
    printf("\nMovimento do Cavalo em 'L':\n"); 
    cavalo(1); 
                    
    return 0; 
}
