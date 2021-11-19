#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(int qntDados)
{
    int valorDado, dado1 = 1 + rand() %6, dado2 = 1 + rand() %6, dado3 = 1 + rand() %6;
    if (qntDados == 1)
    {
        printf("=== Resultado dos dados ===\nDado 1: %d\n",dado1);
        valorDado = dado1;
    }
    else if (qntDados == 2)
    {
        printf("=== Resultado dos dados ===\nDado 1: %d\nDado 2: %d\n",dado1, dado2);
        if (dado1 == dado2)
        {
            valorDado = dado1 + dado2*10;
        }
        else
        {
            printf("Digite qual valor deseja usar %d%d ou %d%d\n",dado1,dado2, dado2,dado1);
            scanf("%d",&valorDado);
        }
    }
    else
    {
        printf("=== Resultado dos dados ===\nDado 1: %d\nDado 2: %d\nDado 3: %d\n",dado1,dado2,dado3);
        if (dado1 == dado2 && dado2 == dado3)
        {
            valorDado = dado1 + dado2*10 + dado3*100;
        }
        else if(dado1 == dado2)
        {
            printf("Digite qual valor deseja usar %d%d%d ou %d%d%d ou %d%d%d\n",dado3,dado2,dado1, dado1,dado3,dado2 , dado1,dado2,dado3);
            scanf("%d",&valorDado);
        }
        else if(dado1 == dado3)
        {
            printf("Digite qual valor deseja usar %d%d%d ou %d%d%d ou %d%d%d\n",dado2,dado1,dado3, dado1,dado2,dado3 , dado1,dado3,dado1);
            scanf("%d",&valorDado);
        }
        else if(dado2 == dado3)
        {
            printf("Digite qual valor deseja usar %d%d%d ou %d%d%d ou %d%d%d\n",dado1,dado2,dado3, dado2,dado1,dado3 , dado2,dado3,dado1);
            scanf("%d",&valorDado);
        }
        else
        {
            printf("Digite qual valor deseja usar %d%d%d ou %d%d%d ou %d%d%d ou %d%d%d ou %d%d%d ou %d%d%d\n",dado1,dado2,dado3, dado1,dado3,dado2, dado2,dado1,dado3, dado2,dado3,dado1, dado3,dado1,dado2, dado3,dado2,dado1);
            scanf("%d",&valorDado);
        }

        
    }
    return valorDado;
    
}


int main()
{
    int modalidade, qntDados, valorDados;
    srand(time(NULL));
    printf("=== Modalidades de jogo disponíveis ===\n1 - Player vs Player\n2 - Player vs Computador\nDigite o número da modalidade que deseja jogar: ");
    scanf("%d",&modalidade);
    printf("\n");
    if(modalidade == 1)
    {
        printf("Você selecionou o modo: Player vs Player\n");
        printf("= teste de dado =\n");
        printf("Digite quantos dados deseja jogar: ");
        scanf("%d",&qntDados);
        valorDados = dado(qntDados);
        printf("O valor dos dados é : %d\n",valorDados);
        
    }
    else if(modalidade == 2)
    {
        printf("Você selecionou o modo: Player vs Computador");
    }
    else
    {
        printf("Digite um número válido!");    
    }
    return 0;
}
