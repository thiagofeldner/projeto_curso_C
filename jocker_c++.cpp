#include<iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int idade;
	cout << "Informe a idade do Competidor: ";
	cin  >> idade;
	while(idade !=-1){		
		
		if (idade>=7 && idade<=12)	{
 			cout <<"Categoria: INFANTIL"<<endl;
 		}
		else if (idade>=13 && idade<=17){	
    		cout <<"Categoria: JUVENIL"<<endl;
	 	}	
  		else if (idade>=18 && idade<=49){
			cout <<"Categoria: ADULTO"<<endl;
 		}
  		else if (idade>=50){
    		cout <<"Categoria: SENIOR"<<endl;
	 	}
	 	else{
		 	cout <<"Competidor fora da faixa etária permitida!!!"<<endl;
		}
	cout << "Informe a idade do Competidor: ";
	cin  >> idade;

  	
}
}
