#include "calculadora.h"
#include<stdio.h>

int main() {
    int ligado = 1;
    float num1, num2, resultado;
    char operador;
    while (ligado != 0) {
        printf("\nQual operação gostaria de fazer\n");
        printf("\n+ - ADICAO\n- - SUBTRACAO\n* - MULTIPLICACAO\n/ - DIVISAO\n");
        scanf("%c", &operador);

        if (operador == '+')
        {
            printf("Digite dois números para soma-los\n");
            scanf("%f\n%f", &num1, &num2);
            resultado = add(num1, num2);
            printf("\n%f", resultado);
        }
        else if (operador == '-')
        {
            printf("Digite dois numeros para Subtrai-los\n");
            scanf("%f\n%f", &num1, &num2);
            resultado = sub(num1, num2);
            printf("%f", resultado);
        }
        else if (operador == '*')
        {
            printf("Digite dois numeros para multiplica-los\n");
            scanf("%f\n%f", &num1, &num2);
            resultado = mul(num1, num2);
            printf("%f", resultado);
        }
        else if (operador == '/')
        {
            printf("Digite dois numeros para dividi-los\n");
            scanf("%f\n%f", &num1, &num2);
            resultado = div(num1, num2);
            printf("%f", resultado);
        }
         printf("Se quer continuar\n0 - Sair");
         scanf("%i", &ligado);
    }
}