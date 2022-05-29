#include <stdio.h>
#include <locale.h>

int arrN, arrP, fatN, denom, fatDenom = 0;

int fatorial(int fatInic)
{
    int i;
    int fatFinal = 1;
    for (i = 1; i <= fatInic; i++)
    {
        fatFinal = fatFinal * i;
    }
    return (fatFinal);
}

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("Arranjo simples\nDigite o número de itens:\n");
    scanf("%d", &arrN);
    printf("Agora, digite o número de grupos:\n");
    scanf("%d", &arrP);
    fatN = fatorial(arrN);
    denom = arrN - arrP;
    fatDenom = fatorial(denom);
    printf("O resultado é %d\n", fatN / fatDenom);
    return 0;
}