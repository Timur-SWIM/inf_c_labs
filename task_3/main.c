/* Реализовать простейший калькулятор на операторе switch case.
 * На вход программе подается первое число, математическое действие,
 * второе число. На выходе должен быть результат вычисления.
 * Добавьте проверку на ввод неправильных действий. */

#include <stdio.h>
int chek(int a, int b, char operator, int *p_res);
int calc(void);

int main() {
    while (1){
        calc();}
}

int chek(int a, int b, char operator, int *p_res){

    int err = 0, res;

    switch (operator) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if (b == 0){
                err = 1;
                break;}
            res = a / b;
            break;
        default:
            err = 2;
    }

    if (err == 0) {
        *p_res = res;}
    return err;
    }

int calc(){
    int a, b, err, res = 0;
    char operator;

    printf("Enter math operation:");
    scanf("%d %c %d", &a, &operator, &b);

    err = chek(a, b, operator, &res);
    if (err == 1){
        printf("Error: division by zero\n");
    }
    else if (err == 2){
        printf("Error: unknown operation -> %c\n", operator);
    }
    else if (err == 0){
        printf("Result: %d\n", res);
    }
    return 0;
}