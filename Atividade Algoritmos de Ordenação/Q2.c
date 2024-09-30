#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    // Laço externo para percorrer o array
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        // Laço interno para encontrar o menor elemento
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Troca o menor elemento encontrado com o elemento atual
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[6], i, n = 6;

    // Recebe o array do usuário
    printf("Digite 6 numeros inteiros para o array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Exibe o array original
    printf("Array original: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Chama a função selectionSort
    selectionSort(arr, n);

    // Exibe o array ordenado
    printf("\nArray ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

