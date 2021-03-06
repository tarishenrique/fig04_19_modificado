// Fig. 4.19: fig04_19.cpp
// Pesquisa linear em um array
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


void initArray( int[], const int );
int inputValue(void);
int linearSearch(const int[], int, int);
void printArray(int[], int, int );

int main()
{
    const int arraySize = 100;
    int a[arraySize];

    initArray(a, arraySize);
    
    int value = inputValue();
    int element = linearSearch(a, arraySize, value);
    
    printArray(a, arraySize, element);

    return 0;
}

void initArray( int a[], const int tamanhoArray) {
    
    srand(time(0));
    int i;
    for (i = 0; i < tamanhoArray; i++)
        a[i] = 1 + rand() % 100;
}

int inputValue(void) 
{
    int x;
    cout << "Digite o valor a ser pesquisado: " << endl;
    cin >> x;

    return x;
}

int linearSearch(const int array[], int sizeOfArray, int key )
{
    for (int n = 0; n < sizeOfArray; n++)
        if (array[n] == key)
            return n;

    return -1;
}

void printArray(int a[], int arraysize, int c) {

    cout << "Itens de dados do array\n";
    int i;
    for (i = 0; i < arraysize; i++)
        cout << setw(4) << "[" << i << "]-" << a[i];

    cout << endl;
    
    if (c != -1)
        cout << "Valor encontrado no elemento " << c << endl;
    else
        cout << "Valor não encontrado" << endl;
}
