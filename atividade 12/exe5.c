#include <stdio.h>
#include <time.h>

void calcularIdade(int diaNasc, int mesNasc, int anoNasc)
{
    time_t t;
    struct tm *agora;
    time(&t);
    agora = localtime(&t);

    int diaAtual = agora->tm_mday;
    int mesAtual = agora->tm_mon + 1;
    int anoAtual = agora->tm_year + 1900;

    int idadeAnos = anoAtual - anoNasc;
    int idadeMeses = mesAtual - mesNasc;
    int idadeDias = diaAtual - diaNasc;

    if (idadeDias < 0)
    {
        idadeMeses--;
        idadeDias += 30;
    }
    if (idadeMeses < 0)
    {
        idadeAnos--;
        idadeMeses += 12;
    }

    printf("Idade: %d anos, %d meses e %d dias\n", idadeAnos, idadeMeses, idadeDias);
}

int main()
{
    int dia, mes, ano;

    printf("Digite a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    calcularIdade(dia, mes, ano);
}