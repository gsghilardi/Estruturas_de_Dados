#include <iostream>


using namespace std;

#define ALUNOS 20
#define NOTAS 2

float media; 
int main()
{
	int matriz[ALUNOS][NOTAS], i, j;

	//preenche a matriz
	for (i = 0; i < 20; i++)
	{
            cout << "Digite o nome do aluno: " <<endl;
            
		for (j = 0; j < 2; j++)
		{
			cout << "Digite a nota 1: "<<endl;
			cout << "Digite a nota 2: "<<endl;			
			cin >> matriz[i][j];
			
			media = ( matriz[i][0] + matriz[i][1] )/ 2;
		}
	}

	cout << "====================================================== " << endl;
	
	//imprime a matriz na tela
	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "A média do aluno: " << i << " " << j << " eh: "
				 << media << endl;			
			
			cout << "O valor na posicao " << i << " " << j << " eh: "
				 << media << endl;
		}
	}

	return 0;
}
