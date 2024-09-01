#include <stdio.h>
#include <locale.h>

void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int array[], int inicio, int fim)
{
    int pivo = array[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        if (array[j] < pivo)
        {
            i++;
            trocar(&array[i], &array[j]);
        }
    }
    trocar(&array[i + 1], &array[fim]);
    return i + 1;
}

void quickSort(int array[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int pi = particionar(array, inicio, fim);

        quickSort(array, inicio, pi - 1);
        quickSort(array, pi + 1, fim);
    }
}

double calcularMediana(int array[], int tamanho)
{
    if (tamanho % 2 == 0)
    {
        return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
    }
    else
    {
        return array[tamanho / 2];
    }
}

double calcularMedia(int array[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];
    }
    return (double)soma / tamanho;
}

void calcularModa(int array[], int tamanho)
{
    int maxContagem = 0;
    int contagem = 1;
    int moda = array[0];
    int amodal = 1;

    for (int i = 1; i < tamanho; i++)
    {
        if (array[i] == array[i - 1])
        {
            contagem++;
        }
        else
        {
            contagem = 1;
        }

        if (contagem > maxContagem)
        {
            maxContagem = contagem;
            moda = array[i];
            amodal = 0;
        }
    }

    if (amodal || maxContagem == 1)
    {
        printf("O array é amodal.\n");
    }
    else
    {
        printf("Moda: %d (aparece %d vezes no array)\n", moda, maxContagem);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numeros[256];
    int n;

    printf("Quantos números você quer ordenar? ");
    scanf("%d", &n);

    if (n > 256)
    {
        printf("A quantidade máxima de números permitida é 256.\n");
        return 1;
    }

    printf("Insira %d números:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    quickSort(numeros, 0, n - 1);

    printf("Array ordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    double media = calcularMedia(numeros, n);
    printf("Média: %.2f\n", media);

    double mediana = calcularMediana(numeros, n);
    printf("Mediana: %.2f\n", mediana);

    calcularModa(numeros, n);

    return 0;
}
