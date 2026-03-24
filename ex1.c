#include <stdio.h>

long long fibo(int n) {
    long long a = 0, b = 1, prox;
// O for faz o calculo linear,  o que torna mais rapido
    for (int i = 2; i <= n; i++) {
        prox = a + b;
        a = b;
        b = prox;
    }
    return b;
}
long long fiborec(int n) {
// Caso base para a funcao nao se tornar infinita
    if (n <= 1) return n;
// Aqui a recursao acaba recalculando os mesmos numeros, gerando um peso grande na estrtura de dados do computador
    return fiborec(n - 1) + fiborec(n - 2);
}
int main() {
    int n = 40;
// Na recursao, o PC cria varias copias da funcao na memoria, fazendo demorar muito mais que um laco de repeticao comum
    printf("Fibonacci(%d): %lld\n", n, fibo(n));
    printf("Fibonacci Recursivo (%d): %lld\n", n, fiborec(n)); 
    return 0;
}
