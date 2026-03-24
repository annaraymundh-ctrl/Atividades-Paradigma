Bagunçado:
#include <stdio.h>

int main() {
    // Dados dos 3 funcionarios 
    float sal1 = 3000.0, sal2 = 4500.0, sal3 = 2000.0;
    float desc1, desc2, desc3, liq1, liq2, liq3, total;

    printf("#################################\n");
    printf(" Folha Pag\n");
    printf("#################################\n");

    //Funcionario 1
    desc1 = sal1 * 0.10;
    liq1 = sal1 - desc1;
    printf("Func 01 -> Salario: %.2f | Liq: %.2f\n", sal1, liq1);

    //Funcionario 2
    desc2 = sal2 * 0.10;
    liq2 = sal2 - desc2;
    printf("Func 02 -> Salario: %.2f | Liq: %.2f\n", sal2, liq2);

    //Funcionario 3
    desc3 = sal3 * 0.10;
    liq3 = sal3 - desc3;
    printf("Func 03 -> Salario: %.2f | Liq: %.2f\n", sal3, liq3);

    // Calculo total somando um por um no fluxo principal
    total = liq1 + liq2 + liq3;

    printf("#################################\n");
    printf(" Soma Total dos Liquidos: R$ %.2f\n", total);
    printf("#################################\n");

    return 0;
// O codigo e bagunncado porque seria necessario repetir a formula varias vezes caso houvesse mais pessoas, caso aja alteração nos valores teria que alterar um por um, o que no futuro poderia causar um codigo espaguete
}

Organizado:

#include <stdio.h>

// Funcao para o calculo
float calcliq(float bruto) {
    return bruto * 0.90;
}

// Exibicao dos valores
void imprimirlin(int id, float liq) {
    printf("Funcionario %d | Salario Liquido: R$ %.2f\n", id, liq);
}

int main() {
    float salarios[] = {3000.0, 4500.0, 2000.0};
    float totalfolha = 0;

    printf("--- Relatorio Organizado ---\n");

    for (int i = 0; i < 3; i++) {
        float liq = calcliq(salarios[i]);
        imprimirlin(i + 1, liq);
        totalfolha += liq;
    }

    printf("Total Final: R$ %.2f\n", totalfolha);

    return 0;
}
