#include <stdio.h>

int main()
{
    float vetorFar[10];
    float vetorCel[10];
    int i, j;
    float tempCel;
    
    for (i = 0; i < 10; i++)
    {
        printf("Insira a temperatura %d em Farenheit: ", i+1);
        scanf("%f", &vetorFar[i]);
        tempCel = (vetorFar[i] - 32) * 5/9;
        vetorCel[i] = tempCel;
    }
    
    printf("Os valores em Celsius são:\n");
    printf("Farenheit       |        Celsius\n");
    printf("--------------------------------\n");
    for (j = 0; j < 10; j++)
    {
        printf("%.2f            |             %.2f\n", vetorFar[j], vetorCel[j]);
    }
}
