#include <stdio.h>
#include <locale.h>
#define TAM 3

void limpatela()
{

    system("cls");
    fflush(stdin);
}

void clientes_cadastrados()
{

    char cliente[TAM][200];
    int i;

    for (i = 0; i < TAM; i++)
    {

        printf("\n");
        printf("INFORME O %d CLIENTE:", i + 1);
        scanf("%s", &cliente[i]);
        printf("\n");
    }
}

void gerenciar_clientes()
{

    printf("\tGerenciando clientes...\n");
    printf("\n");
    printf("\tCLIENTES CADASTRADOS: \n");
}

void gerenciar_estoque()
{
    limpatela();
    printf("\tGerenciando estoque...\n");
    printf("\n");
    printf("\tBERMUDA DA ADIDAS \n");
    printf("\t200 NO ESTOQUE \n ");
    printf("\n");
    printf("\tCAMISA DA SEAWAY\n");
    printf("\t150 NO ESTOQUE\n ");
    printf("\n");
    printf("\tCALÇA MOLETOM\n");
    printf("\t100 NO ESTOQUE\n");
    printf("\n");
    printf("\tBONÉ DA LACOSTE\n");
    printf("\t50 NO ESTOQUE\n");
    printf("\n");
}

void gerar_relatorios()
{
    limpatela();
    printf("Gerando relatorios...\n");
    printf(" VENDAS   |  DATA   |   VALOR   |  ITENS |  VENDEDOR |\n");
    printf("    5     |  05/02  |   150 R$  |    4   |   LUCAS   |\n ");
    printf("    7     |  05/02  |   170 R$  |    6   |  FELIPE   |\n ");
    printf("    5     |  05/02  |   480 R$  |    7   |  FELIPE   |\n ");
    printf("    3     |  06/03  |   250 R$  |    2   |  MATHEUS  |\n ");
    printf("    7     |  02/04  |   210 R$  |    1   |  GASPAR   |\n ");
    printf("    6     |  06/05  |   225 R$  |    5   |   JOÃO    |\n ");
    printf("    5     |  02/06  |   50 R$   |    4   |  CLEITON  |\n ");
    printf("    4     |  02/07  |   360 R$  |    8   |  MATHEUS  |\n ");
    printf("    1     |  01/08  |   290 R$  |    9   |  MATHEUS  |\n ");
    printf("\n");
}

void automatizar_vendas()
{
    limpatela();
    printf("\tVALORES DOS PRODUTOS \n");
    printf("  PRODUTO |  CODIGO |   VALOR   | ESTOQUE | \n");
    printf(" BERMUDA  |   450   |   150 R$  |    4    | \n ");
    printf("  CAMISA  |   502   |   170 R$  |    6    | \n ");
    printf("  CALÇA   |   528   |   480 R$  |    7    | \n ");
    printf("   BONÉ   |   603   |   250 R$  |    2    | \n ");
    printf("  TENIS   |   204   |   210 R$  |    1    | \n ");
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char cliente[200];
    int opcao;

    do
    {
        printf("\tGERENCIADOR DE VENDAS\n");
        printf("<----------------------------------------->\n");
        printf("          Escolha uma opcão:\n");
        printf("<----------------------------------------->\n");
        printf(" |1|      Gerenciar clientes         |\n");
        printf(" |2|      Gerenciar estoque          |\n");
        printf(" |3|      Gerar relatorios           |\n");
        printf(" |4|      Automatizar vendas         |\n");
        printf(" |0|            Sair                 |\n");
        printf("\n");
        printf("INFORME SEU CODIGO:");
        scanf("%d", &opcao);
        limpatela();

        switch (opcao)
        {
        case 1:
            gerenciar_clientes();
            clientes_cadastrados(cliente);
            break;
        case 2:
            gerenciar_estoque();
            break;
        case 3:
            gerar_relatorios();
            break;
        case 4:
            automatizar_vendas();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("OPÇÃO INVALIDA!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
