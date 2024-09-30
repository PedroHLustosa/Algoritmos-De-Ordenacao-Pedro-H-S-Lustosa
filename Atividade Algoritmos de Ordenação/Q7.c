#include <stdio.h>

void shellSort(int arr[], int n) {
    int i, j, temp, gap;

    // Come�a com um grande intervalo, depois reduz o intervalo
    for (gap = n / 2; gap > 0; gap /= 2) {
        // Faz a ordena��o por inser��o para cada intervalo
        for (i = gap; i < n; i++) {
            temp = arr[i];

            // Move os elementos maiores que arr[i] para frente
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

int main() {
    int arr[6], i, n = 6;

    // Recebe o array do usu�rio
    printf("Digite 6 numeros inteiros para o array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Exibe o array original
    printf("Array original: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Chama a fun��o shellSort
    shellSort(arr, n);

    // Exibe o array ordenado
    printf("\nArray ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

