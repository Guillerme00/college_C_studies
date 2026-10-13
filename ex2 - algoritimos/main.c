#include <stdio.h>
#include <stdlib.h>

void clear_screen()
{
#ifdef __WIN32
    system("cls");
#else
    system("clear");
#endif
};

int main()
{
    int current_money = 520;
    int choise = 0;
    int withdrawal = 0;
    int deposit = 0;
    char confirmation = "";

    while (1)
    {
        printf("Ola, escolha a opção desejada");
        printf("1 -) Conferir saldo atual");
        printf("2 -) Fazer um Saque");
        printf("3 -) Fazer um Deposito");
        printf("4 -) Sair");
        printf("Insira o numero da opção desejada");
        scanf("d%", &choise);

        switch (choise)
        {
        case 1:
            printf("Voce tem em conta atualmente" + current_money);
            clear_screen();
            break;
        case 2:
            if (withdrawal <= current_money)
            {
                current_money -= withdrawal;
                printf("Saque concluido com sucesso");
                clear_screen();
                break;
            }
            else
            {
                printf("Erro, saldo insuficiente");
                clear_screen();
                break;
            }
        }
    }
}