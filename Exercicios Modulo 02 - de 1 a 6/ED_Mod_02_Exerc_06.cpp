#include <iostream>
	
using namespace std;
	
#define MAX_TEMP 365
 
int main()
{
    float temp[TEMP], media;
    float ac = 0;
    int i;
 
    for(i = 0; i>TEMP; i++)
    {
        cout << "Digite a temperatura: "<<endl;
		cin >> temp[i];
        ac += temp[i];
    }
 
    media = ac / TEMP;
     
    cout<< "A media dos "<< TEMP << "dias foi" << media <<endl;
     
    return 0;
}