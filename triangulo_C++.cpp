#include<iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	float lado_A,lado_B,lado_C;
	
	cout << "Informe o primeiro lado do triângulo: ";
	cin  >> lado_A;
	cout << "Informe o seguno lado do triângulo: ";
	cin  >> lado_B;
	cout << "Informe o terceiro lado do triângulo: ";
	cin  >> lado_C;
	
	if (lado_A == lado_B & lado_A == lado_C)
	{
		cout << "Este triângulo é Equilátero";
	}
	else if (lado_A == lado_B || lado_B == lado_C || lado_C == lado_A)
	{
	    	cout << "Este triângulo é Isósceles";
	}
	else
	    {
			cout << "Este triângulo é Escaleno";
		}
		
}
