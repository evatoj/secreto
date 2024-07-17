#include <stdio.h>
#include <locale.h>

void converterDistancia();
void converterTemperatura();

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolha;

    while (1)
    {
        printf("* Conversor de Unidades *\n");
        printf("(1) - Converter Dist�ncia\n");
        printf("(2) - Converter Temperatura\n");
        printf("(3) - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            converterDistancia();
            break;
        case 2:
            converterTemperatura();
            break;
        case 3:
            return 0;
        default:
            printf("Escolha inv�lida. Tente novamente.\n");
        }
    }

    return 0;
}

void converterDistancia()
{
    int escolha;
    double valor, resultado;

    printf("* Convers�o de Dist�ncia *\n");
    printf("(1) - Metros para Quil�metros\n");
    printf("(2) - Quil?metros para Metros\n");
    printf("(3) - Milhas para Quil�metros\n");
    printf("(4) - Quil�metros para Milhas\n");
    printf("(5) - P�s para Metros\n");
    printf("(6) - Metros para P�s\n");
    printf("Escolha uma op��o: ");
    scanf("%d", &escolha);

    printf("Insira um valor: ");
    scanf("%lf", &valor);

    switch (escolha)
    {
    case 1:
        resultado = valor / 1000;
        printf("%.2lf m <-> %.2lf km\n", valor, resultado);
        break;
    case 2:
        resultado = valor * 1000;
        printf("%.2lf km <-> %.2lf m\n", valor, resultado);
        break;
    case 3:
        resultado = valor * 1.60934;
        printf("%.2lf mi <-> %.2lf km\n", valor, resultado);
        break;
    case 4:
        resultado = valor / 1.60934;
        printf("%.2lf km <-> %.2lf mi\n", valor, resultado);
        break;
    case 5:
        resultado = valor * 0.3048;
        printf("%.2lf ft <-> %.2lf m\n", valor, resultado);
        break;
    case 6:
        resultado = valor / 0.3048;
        printf("%.2lf m <-> %.2lf ft\n", valor, resultado);
        break;
    default:
        printf("Escolha inv�lida. Tente novamente.\n");
    }
}

void converterTemperatura()
{
    int escolha;
    double valor, resultado;

    printf("* Convers�o de Temperatura *\n");
    printf("(1) - Celsius para Fahrenheit\n");
    printf("(2) - Fahrenheit para Celsius\n");
    printf("(3) - Celsius para Kelvin\n");
    printf("(4) - Kelvin para Celsius\n");
    printf("(5) - Fahrenheit para Kelvin\n");
    printf("(6) - Kelvin para Fahrenheit\n");

    printf("Escolha uma op��o: ");
    scanf("%d", &escolha);

    printf("Insira um valor: ");
    scanf("%lf", &valor);

    switch (escolha)
    {
    case 1:
        resultado = (valor * 9 / 5) + 32;
        printf("%.2lf �C <-> %.2lf �F\n", valor, resultado);
        break;
    case 2:
        resultado = (valor - 32) * 5 / 9;
        printf("%.2lf �F <-> %.2lf �C\n", valor, resultado);
        break;
    case 3:
        resultado = (valor + 273.15);
        printf("%.2lf �C <-> %.2lf �K\n", valor, resultado);
        break;
    case 4:
        resultado = (valor - 273.15);
        printf("%.2lf �K <-> %.2lf �C\n", valor, resultado);
        break;
    default:
        printf("Escolha inv�lida. Tente novamente.\n");
    }
}