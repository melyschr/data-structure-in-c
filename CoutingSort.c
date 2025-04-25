// THIS CODE IS ONLY FOR ANY TESTS AND SEARCH/STUDY, THANKS!

#define MAX 50

void countingSort (int *V, int N){
    int i, j, k;
    int C[MAX];
    
    for (i = 0; i < MAX; i++){
        C[i] = 0;
    }
    for(i = 0; i < N; i++){
        C[V[i]]++;
    }
    for (i = 0, j = 0; j < MAX; j++){
        for (k = C[j]; k > 0; k--){
            V[i++] = j;
        }
    }
}

void printArray(int C[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", C[i]);
}
int main(){
    int C[MAX];
    int N = sizeof(C) / sizeof(C[0]);
    printArray(C,N);
    countingSort(C,N);
    printArray(C,N);

    return 0;
}