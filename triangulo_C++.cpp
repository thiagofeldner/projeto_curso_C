#include<iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	float lado_A,lado_B,lado_C;
	
	cout << "Informe o primeiro lado do tri�ngulo: ";
	cin  >> lado_A;
	cout << "Informe o seguno lado do tri�ngulo: ";
	cin  >> lado_B;
	cout << "Informe o terceiro lado do tri�ngulo: ";
	cin  >> lado_C;
	
	if (lado_A == lado_B & lado_A == lado_C)
	{
		cout << "Este tri�ngulo � Equil�tero";
	}
	else if (lado_A == lado_B || lado_B == lado_C || lado_C == lado_A)
	{
	    	cout << "Este tri�ngulo � Is�sceles";
	}
	else
	    {
			cout << "Este tri�ngulo � Escaleno";
		}
		
}
