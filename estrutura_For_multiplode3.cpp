#include<iostream>
 
 using namespace std;
 
 int main(){
  int i;
    double x, y = 0;
    for (i = 0; i < 10; i++){
        cout << "Digite um numero: ";
        cin >> x;
        if ((x / 2) == 0){
            y = y + x;
        }
    }
    cout << "Numero: " << y << "\n";
    system("PAUSE");
    return 0;
}

