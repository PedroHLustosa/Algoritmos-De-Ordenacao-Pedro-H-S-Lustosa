#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;

    // La�o externo para percorrer o array
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move os elementos maiores que a chave para a frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Insere a chave na posi��o correta
        arr[j + 1] = key;
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

    // Chama a fun��o insertionSort
    insertionSort(arr, n);

    // Exibe o array ordenado
    printf("\nArray ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

