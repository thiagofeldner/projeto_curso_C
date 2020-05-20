#include<iostream>

using namespace std;

int main(){
	int num,contador,res;
	cout << "Voce deseja ver a tabuada de qual numero? ";
	cin >> num;
	for (contador=0;contador<=10;contador++)
    {
        res = num * contador;
     cout << num<< " x " <<contador<< " = "<<res<< endl;
}
}
