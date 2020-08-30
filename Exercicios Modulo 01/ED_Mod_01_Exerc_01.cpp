#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float peso, altura, imc;

	cout << "Digite o peso da pessoa: ";
	cin >> peso;
	cout << "Digite a altura da pessoa: ";
	cin >> altura;

    imc = (peso / pow(altura,2));
	
	if (imc < 20.0)
	{
		cout << "Abaixo do peso " << imc;
	}
	else if(imc >= 20.0 && imc < 25.0)
	{
		cout << "Peso ideal " << imc;
	}
	else
	{
		cout << "Acima do peso " << imc;
	}	

	return 0;
}
	