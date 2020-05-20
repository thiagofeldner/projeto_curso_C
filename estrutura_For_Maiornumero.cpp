 #include<iostream>
 
 using namespace std;
 
 int main(){
    int num, contador, maior=0;
	for (contador = 1; contador <=15; contador++){
		cout << "Informe o "<<contador<< "o. numero? ";
   	    cin>>num;
   	if (num>maior){
   	    maior = num;	
	}

}
	cout <<	"O maior número informado foi: "<< maior;
}
