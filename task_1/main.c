#include <stdio.h>
#define QUANT 3

int array_make(int num[], int i);
void bubble_sorting(int num[], int i);

int main()
{
    int num[QUANT];
    int i;

    array_make(num, i);
    bubble_sorting(num, i);

    return 0;
}

int array_make(int num[], int i)
{
    for (i = 0; i < QUANT; ++i) {
        printf("Enter number:\n");
        scanf("%d", &num[i]);
    }
    return 0;
}

void bubble_sorting(int num[], int i)
{
    for (i = 0; i < (QUANT - 1); ++i)
        if (num[i] > num[i + 1])
            num[i + 1] = num[i];

    printf("The biggest number:%d", num[QUANT - 1]);
}
