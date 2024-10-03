#include <unistd.h>

void	ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
#include <stdio.h>
int main()
{
    int sayi1 = 5, sayi2 =8;
    printf("Before sayi1: %d, sayi2: %d\n", sayi1, sayi2);
    ft_swap(&sayi1, &sayi2);
    printf("After sayi1: %d, sayi2: %d", sayi1, sayi2);
}
*/