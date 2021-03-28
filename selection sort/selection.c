#include <stdio.h>

int loop(int arr[], int size) {
    for (int i = 0; i < 7; i++) {
            printf("%d ", arr[i]);
        }
}

// first loop keeps track of the order by which we want to sort. second loop seems to start at first loop's index + 1 and whenever there is a change made, we just have to replace i's value with the smallest value we found through j.

// should probably make a swap function from now on.. considering i have a function to print the list haha. welp.


int selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j; 
            }
    }
    if (i != smallest) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        }
    }
}

int main() {
    int list[] = {9, 7, 8, 1, 2, 0, 4};
    loop(list, 7);
    printf("\n");


    selectionSort(list, 7);
    loop(list, 7);
}
