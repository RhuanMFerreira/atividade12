#include <stdio.h>

#define TAMANHO 500

void calcularLocacoesGratuitas(int A[TAMANHO], int locacoesGratuitas[TAMANHO])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        locacoesGratuitas[i] = A[i] / 15;
    }
}

int main()
{
    int A[TAMANHO];
    int locacoesGratuitas[TAMANHO];
    calcularLocacoesGratuitas(A, locacoesGratuitas);
}