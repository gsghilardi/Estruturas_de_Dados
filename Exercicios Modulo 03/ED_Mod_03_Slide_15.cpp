#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct cpf
{
	unsigned int cpf;
} Cpf;

typedef struct idade
{
	unsigned int idade;
} Idade;

typedef struct pessoa
{
	char nome[5];
	char endereco[5];
    Cpf cpf;
    Idade idade;
} Pessoa;

int main ()
{
	Pessoa alguem;
	cout << "Digite o nome de alguem:" << endl;
	cin >> alguem.nome;
	cout << "Digite o endereco:" << endl;
	cin >> alguem.endereco;
	cout << "Digite o CPF:" << endl;
	cin >> alguem.cpf.cpf;
	cout << "Digite a idade:" << endl;
	cin >> alguem.idade.idade;
	system ("cls");
	
	int cont = 0;
	for(int i = 0; i < 5; i++){	
	cout << alguem.nome << endl;
	cout << alguem.endereco << "/";
	cout << alguem.cpf.cpf << "/";
	cout << alguem.idade.idade << endl;	
	cont++;
	}

	system ("pause");
	return 0;
}