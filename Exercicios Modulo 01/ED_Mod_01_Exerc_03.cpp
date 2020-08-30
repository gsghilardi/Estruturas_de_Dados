#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float hor_trab;
	double sal_min, sal_bruto, salario, v_hor_trab, imp;

	cout << "Digite o número de horas trabalhadas: ";
	cin >> hor_trab;
	cout << "Digite o valor do salario minimo: ";
	cin >> sal_min;

    v_hor_trab = (sal_min / 2);
    sal_bruto = (hor_trab * v_hor_trab);
    imp = 0.03 * sal_bruto;
    salario = (sal_bruto - imp);

    cout << "O salário é igual a R$ " << salario;	
	
	return 0;
}