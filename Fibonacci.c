
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    //Variáveis
    int num_procurado, i=0, proximo, anterior, achou=0;
    //A variável "i" será utilizado somente para o looping
    
    
    //Informando o número que deseja verificar na sequencia
    printf("Informe o numero que deseja verificar na sequencia Fibonacci: ");
    scanf("%d", &num_procurado);
    
    //Variavel proximo=1, para iniciar a sequencia
    proximo =1;
    
    //Enquanto i for menor  ou igual ao número procurado, realizar Fibonacci
    while(i<=num_procurado)
    {
        //Verificar se o numero foi encontrado
        if(i==num_procurado)
        {
            printf("\nO número pertence a sequencia Fibonacci");
            
            achou=1;
        }
        
        //Deixando proximo com o antigo valor de "i" após somar
        anterior = i;
        i = i + proximo;
        proximo = anterior;
    }
    
    //Se achou não mudar o valor, o numero não existe na sequencia
    if(achou==0)
    {
        printf("Este numero nao pertence a sequencia Fibonacci");
    }
}