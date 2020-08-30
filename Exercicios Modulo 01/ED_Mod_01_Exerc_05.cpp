#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double v_prod, v_desc;
	int cond_pag;

	cout << "Digite o valor de etiqueta do produto: ";
	cin >> v_prod;
	cout << "Digite o codigo da condicao de pagamento: ";
	cin >> cond_pag;	

	if (cond_pag == 1)
	{
	    v_desc = (0.10 * v_prod);
	    v_prod = (v_prod - v_desc);
		cout << "O valor a ser pago e R$ " << v_prod;
	}
	else if(cond_pag == 2)
	{
	    v_desc = (0.05 * v_prod);
	    v_prod = (v_prod - v_desc);		
		cout << "O valor a ser pago e R$ " << v_prod;
	}
	else if(cond_pag == 3)
	{
		cout << "O valor a ser pago e R$ " << v_prod;
	}	
	else if(cond_pag == 4)
	{
	    v_desc = (0.10 * v_prod);
	    v_prod = (v_prod + v_desc);		
		cout << "O valor a ser pago e R$ " << v_prod;
	}	
	
	return 0;
}