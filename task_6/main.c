/* На вход программе подается 2 числа.
 * Программа должна вывести все числа Армстронга ,
 * которые находятся в интервале данных чисел.*/

#include <stdio.h>
#include <math.h>

int main() {

    int high, low, i, val_1, val_2, n, num, res;

    printf("Enter two numbers(interval):");
    scanf("%d %d", &low, &high);

    if (low > high){
        printf("It's wrong interval");}
    else{
        printf("Armstrong's numbers:");
        for (i = low; i < (high + 1); i++){
            val_1 = i;
            val_2 = i;
            // находим колличество цифр
            while (val_1 != 0){
                val_1 = val_1 / 10;
                ++n;}

            while (val_2 != 0){
                num = val_2 % 10;     // выделяем последнюю цифру из числа
                res += pow(num, n);   // возводим в степень, равнуюю колличеству цифр в числе
                val_2 = val_2 / 10;}

            if (res == i){
                printf("%d ", res);}

            n = 0;
            res = 0;
        }
    }
    return 0;
}

