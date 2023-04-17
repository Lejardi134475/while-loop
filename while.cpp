//Utilizando While utilizar un programa los numeros del 1 al 10 y el numero al cubo
//Autor: Gustavo

#include <iostream>
using namespace std;


int main()
{
   
	int valor = 1;
		int cubo;

		while (valor <= 10)
		{

			cubo = pow(valor, 3);
				cout << valor << " al cubo es " << cubo << endl;
			 valor++;


		}


	return 0;
}
