/*На вход программе подается число.
 * Программа должна вывести таблицу умножения данного числа. */

#include <stdio.h>
void m_table(int);
void chek(int);

int main() {
    int c;
    printf("Enter number:");
    scanf("%d", &c);
    chek(c);
    return 0;
}

void m_table(int c){
    int i;
    for (i = 0; i <= 9; i++){
        printf("%1d * %2d = %3d\n", c, i, c * i);}
}

void chek(int c){
    if (c >= 1 && c <= 9){
        m_table(c);
    }
    else{
        printf("Error: please enter natural number\n");
        main();
    }
}