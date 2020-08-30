#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int idade;

	cout << "Digite a idade do nadador: ";
	cin >> idade;

	if (idade >= 5 && idade <= 7)
	{
		cout << "Infantil A " << idade;
	}
	else if(idade >= 8 && idade <= 10)
	{
		cout << "Infantil B " << idade;
	}
	else if(idade >= 11 && idade <= 13)
	{
		cout << "Juvenil A " << idade;
	}	
	else if(idade >= 14 && idade <= 17)
	{
		cout << "Juvenil B " << idade;
	}
    else if(idade < 5)
	{
		cout << "Categoria não existente " << idade;
	}
	else
	{
		cout << "Senior " << idade;
	}
	return 0;
}