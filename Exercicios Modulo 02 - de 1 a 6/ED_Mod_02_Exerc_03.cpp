#include <iostream>

using namespace std;

#define ANUMEROS 10
#define MNUMEROS 10

int main()
{

int indice = 0;	
int i = 0;
float a[ANUMEROS];
float m[MNUMEROS];
int x;

	//preenche o vetor a
	while (indice < ANUMEROS)
	{
		cout << "Digite o numero: " << indice + 1 << ": ";
		cin >> a[indice];
		indice = indice + 1;
	}

		cout << "Digite mais um numero: " << endl;
		cin >> x;		
    
 	//preenche o vetor m
	while (indice < MNUMEROS)
	{
		m[MNUMEROS] = (a[ANUMEROS] * x);
		i = i + 1;
	}   	
    	
	int qtd = 1;
	//imprime o vetor m
	for (int i = 0; i < MNUMEROS; i++)
	{
		cout << "Vetor Posicao " << qtd << ": " << m[i] << endl;
		qtd++;
	}    	
    	
    	
    	
	return 0;    
}
