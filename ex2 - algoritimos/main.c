#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int current_money = 520;
    int choice = 0;
    int amount = 0;

    while (1)
    {
        printf("\nOla! Escolha uma opcao:\n");
        printf("1 - Conferir saldo atual\n");
        printf("2 - Fazer um saque\n");
        printf("3 - Fazer um deposito\n");
        printf("4 - Sair\n");
        printf("Opcao: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Entrada invalida. Digite um numero.\n");
            return 1;
        }

        switch (choice)
        {
        // Case 1
        case 1:
            printf("Voce tem %d em conta.\n", current_money);
            break;


        // Case 2
        case 2:
            printf("Valor do saque: ");
            if (scanf("%d", &amount) != 1 || amount <= 0)
            {
                printf("Valor invalido. Digite um valor positivo.\n");
                return 1;
            }
            if (amount <= current_money)
            {
                current_money -= amount;
                printf("Saque concluido. Saldo atual: %d\n", current_money);
            }
            else
            {
                printf("Saldo insuficiente.\n");
            }
            break;

        
        // Case 3
        case 3:
            printf("Valor do deposito: ");
            if (scanf("%d", &amount) != 1 || amount <= 0)
            {
                printf("Valor invalido. Digite um valor positivo.\n");
                return 1;
            }
            current_money += amount;
            printf("Deposito concluido. Saldo atual: %d\n", current_money);
            break;


        // Case 4
        case 4:
            printf("Programa encerrado. Obrigado!\n");
            return 0;

        
        // Prevencao de erros
        default:
            printf("Opcao invalida. Escolha um numero de 1 a 4.\n");
            break;
        }
    }
}
