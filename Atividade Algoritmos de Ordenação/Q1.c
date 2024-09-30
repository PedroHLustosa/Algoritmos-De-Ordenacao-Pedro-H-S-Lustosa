#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Laço externo para percorrer o array
    for (i = 0; i < n - 1; i++) {
        // Laço interno para comparar elementos adjacentes
        for (j = 0; j < n - i - 1; j++) {
            // Troca os elementos se estiverem na ordem errada
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    // Chama a função bubbleSort
    bubbleSort(arr, n);

    // Exibe o array ordenado
    printf("\nArray ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

