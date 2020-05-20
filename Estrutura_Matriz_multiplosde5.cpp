#include <iostream>

using namespace std;

int main(){
	int multiplos=0,lin, col,matriz[3][4];
	for (lin=0;lin<=2;lin++){
	for (col=0;col<=3;col++){
		cout <<"Informe o elemento ["<<lin+1<<","<<col+1<<"]: ";
 		cin >>matriz[lin][col];
 	if (matriz[lin][col]%5==0){
 		multiplos++;
 		}
 	}
 }
 		cout <<"Forma informados "<<multiplos<<" multiplos de 5.";
}
