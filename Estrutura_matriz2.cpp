#include<iostream>
#include<locale>
using namespace std;

int main(){
    int lin,col, m1[2][4],m2[2][4],m3[2][4];
    for (lin=0;lin<=1;lin++){
    for (col=0;col<=3;col++){
        cout << "Informe o elemento:["<<lin+1<<","<<col+1<<"] da Matriz 1: ";
        cin >> m1[lin][col];
        cout << "Informe o elemento:["<<lin+1<<","<<col+1<<"] da Matriz 2: ";
    	cin >> m2[lin][col];
        m3[lin][col] = m1[lin][col]+m2[lin][col];
        }
	}
	cout << "**** Elementos da Matriz 3 **** \n";
        for(lin=0;lin<=1;lin++){
        for (col=0;col<=3;col++){
        cout << "Elemento ["<<lin+1<<","<<col+1<<"] -> "<<m3[lin][col]<<"\n";
        }
	}
}

