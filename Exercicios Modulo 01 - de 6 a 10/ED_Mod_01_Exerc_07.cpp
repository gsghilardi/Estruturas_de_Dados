#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num;
	
	for (num = 1 ; num <=500; num++)
	{
		if (num % 5 == 0)
		{
			cout <<"Este numero eh multiplo de 5: "<<num<< endl;
		}
	}

return 0;
}