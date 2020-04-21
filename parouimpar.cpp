#include<iostream>

using namespace std;

int main(){
	int num;
	cout << "Informe um numero qualquer: ";
	cin >> num;
	do{
		if (num % 2 ==0){
			cout << "Este numero e par!" <<endl;
		} else{
			cout << "Este numero e impar!" <<endl;
		}
	cout << "Informe um numero qualquer: ";
	cin >> num;
	}
	while(num != -1);
}
