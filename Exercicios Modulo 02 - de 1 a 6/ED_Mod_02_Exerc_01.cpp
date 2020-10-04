#include <iostream>

using namespace std;

#define NOMES 10
#define PESSOAS 1

int main()
{
	int indice = 0;
	int ind =0;
	char nome[NOMES];
	char pessoa[PESSOAS];



	//preenche o vetor NOMES
	while (indice < NOMES)
	{
		cout << "Entre com o nome da pessoa " << indice + 1 << ": ";
		cin >> nome[indice];
		indice = indice + 1;
	}
	
	cout << "-------------------------------" << endl;

	int qtd = 1;
	//imprime o vetor
	for (int i = 0; i < NOMES; i++)
	{
		cout << "Nome da pessoa eh: " << qtd << ": " << nome[i] << endl;
		qtd++;
	}

	while (indice < PESSOAS)
	{	
		cout << "Digite o nome da pessoa que desejar: " << ind + 1 <<endl;
		cin >> pessoa;
		cin >> pessoa[ind];
		ind = ind + 1;		
	}	
		
	for (int i = 0; i < PESSOAS; i++)
	{
        if (pessoa[i] = nome[NOMES])
		{
		     cout << "Achei o nome: " << pessoa << endl;
		}     
        else
        {
	       cout << "Não achei o nome: " << pessoa << endl;
		}
	}		
		
	return 0;
}