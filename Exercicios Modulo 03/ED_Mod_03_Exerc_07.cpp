#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *ptro = &array[0];
	int *ptroi = &array[9];

	cout << "Vetor na ordem normal" << endl;	
	
	for(int i = 0; i < 10; i++)
	{
		cout << *ptro << endl;
		ptro++;
	}
	
	cout << endl;
	
	cout << "Vetor na ordem inversa" << endl;
	
	for(int x = 10; x > 0; x--)
	{
		cout << *ptroi << endl;
		ptroi--;
	}	

	return 0;
}