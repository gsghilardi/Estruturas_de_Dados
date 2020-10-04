#include <iostream>

using namespace std;

#define NUMEROS 20

int main()
{
	int indice = 0;
	float numero[NUMEROS];

	//preenche o vetor
	while (indice < NUMEROS)
	{
		cout << "Digite o numero: " << indice + 1 << ": ";
		cin >> numero[indice];
		indice = indice + 1;
	}

	cout << endl;

	int qtd = 1;
	//imprime o vetor
	for (int i = 0; i < NUMEROS; i++)
	{
		cout << "Numero " << qtd << ": " << numero[i] << endl;
		qtd++;
	}

	return 0;
}
