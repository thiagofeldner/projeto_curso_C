#include<iostream>

using namespace std;

int main(){
	int num,contador,res;
	contador = 0;
	cout << "Voce deseja ver a tabuada de qual numero? ";
	cin >> num;
	do{
		res = num * contador;
		cout <<num << "x " <<contador <<" = " << res <<endl;
		contador++;
	}while(contador <=10);
}

