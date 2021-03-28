#include <stdio.h>

int loop(int arr[], int size) {
    for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
}

int bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }   
}


int main() {
    int list[5] = {3, 1, 6, 5, 9};
    printf("Before the bubble sort: ");
    loop(list, 5);
    printf("\n");

    printf("After the bubble sort: ");
    bubbleSort(list, 5);
    loop(list, 5);
}
