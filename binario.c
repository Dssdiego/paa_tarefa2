///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#define n 3

#include <stdio.h>
#include <string.h>

void add(int A[n], int B[n], int C[n + 1])
{
    int carry, i = 0;
    for (i = 0; i < n; i++)
    {
        C[i] = (A[i] + B[i] + carry) % 2;  // resto
        carry = (A[i] + B[i] + carry) / 2; // quociente
    }
    C[i] = carry;
}

void imprime(int arr[n + 1])
{
    for (int i = 0; i < n + 1; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int A[n] = {1, 1, 1};
    int B[n] = {1, 1, 1};
    int C[n + 1];

    // Inicia o array de resultado com 0's
    memset(C, 0, n + 1);

    add(A, B, C);
    imprime(C);
}