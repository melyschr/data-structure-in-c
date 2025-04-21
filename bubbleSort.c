// Implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>
#define MAX 10


void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void readInArray(int *arr, int size) {
    int i;
    printf("Enter your list of numbers: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}
int main(){
    int arr[MAX];
    int n = sizeof(arr) / sizeof(arr[0]);
    readInArray(arr, n);
    printf("\nOrginal Array: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("\nOrdened Array: \n");
    printArray(arr, n);
    return 0;
}
