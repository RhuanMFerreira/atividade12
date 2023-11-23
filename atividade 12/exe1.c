#include <stdio.h>

void imprimirOpcoes()
{
    printf("Opções de pagamento:\n");
    printf("A) A vista com 10%% de desconto\n");
    printf("B) Em duas vezes (preço da etiqueta)\n");
    printf("C) De 3 até 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
}

char obterOpcao()
{
    char opcao;
    printf("Escolha uma opcao (A, B ou C): ");
    scanf(" %c", &opcao);
    return opcao;
}

void opcaoAVista(float total)
{
    float desconto = total * 0.1;
    float valorFinal = total - desconto;
    printf("Valor total das prestacoes: R$ %.2f\n", valorFinal);
}

void opcaoDuasVezes(float total)
{
    printf("\nValor total das prestacoes: 2x de R$ %.2f\n", total / 2);
}

void opcaoParcelado(float total)
{
    int parcelas;
    do
    {
        printf("\nDigite o numero de parcelas (entre 3 e 10): ");
        scanf("%d", &parcelas);
    } while (parcelas < 3 || parcelas > 10);

    float juros = total * 0.03;
    float valorFinal = (total + juros) / parcelas;
    printf("\nValor total das prestacoes: %d x de R$ %.2f\n", parcelas, valorFinal);
}

int main()
{
    float total;

    printf("\nDigite o total gasto pelo cliente: R$ ");
    scanf("%f", &total);

    imprimirOpcoes();
    char opcao = obterOpcao();

    switch (opcao)
    {
    case 'a':
        opcaoAVista(total);
        break;
    case 'b':
        opcaoDuasVezes(total);
        break;
    case 'c':
        if (total > 100.0)
        {
            opcaoParcelado(total);
        }
        else
        {
            printf("Essa opção so e valida para compras acima de R$ 100,00.\n");
        }
        break;
    default:
        printf("Opção invalida.\n");
    }

    return 0;
}