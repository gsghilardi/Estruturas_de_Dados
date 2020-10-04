	#include <iostream>
	
	using namespace std;
	
	int numeros1[100];
	int numeros2[100];	
	int soma=0;
	int n1;
	int n2;	
	
	int main()
	{
    cout <<" Digite o tamanho do array 1: ";
	cin >> n1;
	
    cout <<" Digite o tamanho do array 2 : ";
	cin >> n2;	
	
	for(int i=0; i<n1; i++) 
	{
	cout << "Digite um valor na posicao "<< i << "";
	cin >> numeros1[n1];
	}

	for(int i=0; i<n2; i++) 
	{
	cout << "Digite um valor na posicao "<< i << "";
	cin >> numeros2[n2];
	}		
	
	for(int i=0; i<n1; i++)
	{
	cout << numeros1 << "";
	}
	
	for(int i=0; i<n2; i++)
	{
	cout << numeros2 << "";
	}
	
	cout<<"\n";
	
	for (int i=0; i<n1; i++){
		soma=n1+n2;
	}
	cout<<"A soma dos valores dos array e = "<<soma<< "";

	return 0;
	
	}