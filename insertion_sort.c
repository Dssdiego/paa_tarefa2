///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#define n 6

#include <stdio.h>

// 31 41 59 26 41 58
void ordena(int arr[n])
{
    int chave, i;  
    for (int b = 1; b < n; b++) // b = 2
    {  
        chave = arr[b];  
        i = b - 1;  
  
        while (i >= 0 && chave > arr[i])  // i > 0
        {  
            arr[i + 1] = arr[i];  
            i = i - 1;  
        }  
        arr[i + 1] = chave;  
    }  
}

void imprimeArranjo(int arr[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[n] = {31, 41, 59, 26, 41, 58};
    printf("Inicial:\n");
    imprimeArranjo(arr);

    ordena(arr);

    printf("Ordenado:\n");
    imprimeArranjo(arr);
}