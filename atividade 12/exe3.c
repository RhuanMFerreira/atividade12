#include <stdio.h>

void trocarLinhas(int A[10][10], int linha1, int linha2)
{
    for (int i = 0; i < 10; i++)
    {
        int temp = A[linha1][i];
        A[linha1][i] = A[linha2][i];
        A[linha2][i] = temp;
    }
}

void trocarColunas(int A[10][10], int coluna1, int coluna2)
{
    for (int i = 0; i < 10; i++)
    {
        int temp = A[i][coluna1];
        A[i][coluna1] = A[i][coluna2];
        A[i][coluna2] = temp;
    }
}

void trocarDiagonais(int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        int temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }
}

void trocarLinhaColuna(int A[10][10], int linha, int coluna)
{
    for (int i = 0; i < 10; i++)
    {
        int temp = A[linha][i];
        A[linha][i] = A[i][coluna];
        A[i][coluna] = temp;
    }
}

void imprimirMatriz(int A[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[10][10];

    trocarLinhas(A, 1, 7);

    trocarColunas(A, 3, 9);

    trocarDiagonais(A);

    trocarLinhaColuna(A, 4, 9);

    imprimirMatriz(A);
}