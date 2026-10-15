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
            // Printando o valor em conta
            printf("Voce tem %d em conta.\n", current_money);
            break;


        // Case 2
        case 2:
            printf("Valor do saque: ");
            // Pegando valor para saque, e verificando se é valido, e se não é menor ou igual a zero
            if (scanf("%d", &amount) != 1 || amount <= 0)
            {
                printf("Valor invalido. Digite um valor positivo.\n");
                return 1;
            }
            // Se houver dinheiro suficiente, fazer o saque
            if (amount <= current_money)
            {
                current_money -= amount;
                printf("Saque concluido. Saldo atual: %d\n", current_money);
            }
            // Se não, saldo invalido
            else
            {
                printf("Saldo insuficiente.\n");
            }
            break;

        
        // Case 3
        case 3:
            printf("Valor do deposito: ");
            // Pegando valor do deposito, e conferindo se é valido ou maior que zero
            if (scanf("%d", &amount) != 1 || amount <= 0)
            {
                printf("Valor invalido. Digite um valor positivo.\n");
                return 1;
            }
            // Caso seja, adicionando o valor a conta
            current_money += amount;
            printf("Deposito concluido. Saldo atual: %d\n", current_money);
            break;


        // Case 4
        case 4:
            // Encerrando o programa
            printf("Programa encerrado. Obrigado!\n");
            return 0;

        
        // Prevencao de erros
        default:
            printf("Opcao invalida. Escolha um numero de 1 a 4.\n");
            break;
        }
    }
}
