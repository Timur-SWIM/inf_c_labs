#include <stdio.h>

#define ASCCI_LOWCASE_NUM 97    // номер первой буквы нижнего регистра в кодировке ASCII
#define VOWEL_C 5               // кол-во гласных букв
#define CONS_C 21               // кол-во согласных

int main(){

    int i;
    char letter;
    char lc_vowel[5] = "aeiou";
    char uc_vowel[5] = "AEIOU";
    char lc_cons[21] = "bcdfghjklmnpqrstvwxyz";
    char uc_cons[21] = "BCDFGHJKLMNPQRSTWXYZ";

    printf("Enter the letter:");
    scanf("%c", &letter);

    if ((int)letter >= 65 && (int)letter <= 90 ||
        (int) letter >= 97 && (int) letter <= 122) {          // проерка ввода
        if ((int) letter >= ASCCI_LOWCASE_NUM) {          // определение регистра
            for (i = 0; i < VOWEL_C; ++i) {
                if (letter == lc_vowel[i]){               // является ли введенная буква гласной
                    printf("%c is vowel and lowcase\n", letter);    // если да, вывести в f-строку и выйти из цикла
                    break;}}

            for (i = 0; i < CONS_C; ++i) {
                if (letter == lc_cons[i]){                // является ли введенная буква согласной
                    printf("%c is consonant and lowcase\n", letter);  // если да, вывести в f-строку и выйти из цикла
                    break;}}
        }
        else {
            for (i = 0; i < VOWEL_C; ++i) {               // аналогично для верхнего реистра
                if (letter == uc_vowel[i]){
                    printf("%c is vowel and upcase\n", letter);
                    break;}}

            for (i = 0; i < CONS_C; ++i) {
                if (letter == uc_cons[i]){
                    printf("%c is consonant and upcase\n", letter);
                    break;}}
        }
    }
    return 0;
}

