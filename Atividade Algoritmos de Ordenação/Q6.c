#include <stdio.h>

void heapify(int arr[], int n, int i) {
    int largest = i; // Inicializa o maior como raiz
    int left = 2 * i + 1; // Filho esquerdo
    int right = 2 * i + 2; // Filho direito
    int temp;

    // Se o filho esquerdo for maior que a raiz
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Se o filho direito for maior que o maior atual
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Se o maior não for a raiz
    if (largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursivamente faz o heapify na subárvore afetada
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    int i, temp;

    // Constrói o heap (rearranja o array)
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Um a um extrai os elementos do heap
    for (i = n - 1; i >= 0; i--) {
        // Move a raiz atual para o final
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Chama o heapify no heap reduzido
        heapify(arr, i, 0);
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

    // Chama a função heapSort
    heapSort(arr, n);

    // Exibe o array ordenado
    printf("\nArray ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

