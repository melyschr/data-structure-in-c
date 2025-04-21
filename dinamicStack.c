#include <stdio.h>
#include <string.h>

int n;
int Fib (int n){
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    int aux;
    if (n == 1 || n == 2){
        return n-1;
    } else{
        aux = n;
        printf("Valor de n é: %d", aux);
        return (Fib(n-1) + Fib(n-2));
    }
}

int main(){
    printf("mostre o fib de: %d", Fib(5));
}