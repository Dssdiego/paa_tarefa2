///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#define n 6

#include <stdio.h>

int varre(int arr[n], int v)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == v){
            return i;
        } 
    }
    return -1;
}

int main()
{
    int arr[n] = {31, 41, 59, 26, 44, 58};

    // Testes
    int res = varre(arr, 58);
    // int res = varre(arr, 99);
    // int res = varre(arr, 26);
    printf("%i\n", res);
}