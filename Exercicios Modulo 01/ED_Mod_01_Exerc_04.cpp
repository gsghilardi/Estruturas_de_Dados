#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double novo_salario, salario;

	cout << "Digite o salario do funcinario: ";
	cin >> salario;

	if (salario < 1000)
	{
	    novo_salario = (1.15 * salario);
		cout << "O novo salario do funcinario e R$ " << novo_salario;
	}
	else if(salario >= 1000 && salario <= 1500)
	{
		novo_salario = (1.10 * salario);		
		cout << "O novo salario do funcinario e R$ " << novo_salario;
	}
	else if(salario > 1500)
	{
		novo_salario = (1.05 * salario);		
		cout << "O novo salario do funcinario e R$ " << novo_salario;
	}	
	
	return 0;
}