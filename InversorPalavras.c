
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[31];
    int tamanho;
    
    //Selecionando a palavra que será invertida
    printf("Informe a palavra para inverter:");
    fflush(stdin);
    scanf("%30[^\n]", &palavra);
    
    //Definindo o tamanho da string
    tamanho = strlen(palavra);
    
    
    printf("\nPalavra inversa:");
    
    //Invertendo a string
    while(tamanho >=0)
    {
        
        printf("%c", palavra[tamanho]);
        
        tamanho--;
    }
}