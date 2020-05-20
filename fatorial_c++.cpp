#include <iostream>

using namespace std;

int main(){

    int num, fatorial, contador;
    cout << "Digite o numero para Calcular o fatorial: ";
    cin >> num;
    fatorial = 1;
    for (contador =1; contador <= num; contador++) 
    {
        fatorial = fatorial * contador;
    }
    
    cout << "O fatorial de " << num << " é: " << fatorial;
    
}
