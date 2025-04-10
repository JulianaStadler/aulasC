/*
3.Criar funções para converter temperaturas
entre Celsius e Fahrenheit. Cada função deve receber a temperatura na escala
correspondente e retornar o valor convertido para a outra escala.
*/
#include <stdio.h>

float pFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float pCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = pFahrenheit(celsius);
    printf("%.2f°C é igual a %.2f°F\n", celsius, fahrenheit);

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = pCelsius(fahrenheit); 
    printf("%.2f°F é igual a %.2f°C\n", fahrenheit, celsius);

    return 0;
}

