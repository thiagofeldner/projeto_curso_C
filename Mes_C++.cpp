#include<iostream>
#include<locale>
using namespace std;

int main()

{

   
	setlocale(LC_ALL, "ptb"); 
  	float numMes;
    string mesExtenso="";
    
	cout <<"Informe o n�mero do m�s: ";

    cin >> numMes;

    if (numMes==1)

    {

      mesExtenso="janeiro";

    }

    else if (numMes==2)

    {

      mesExtenso="fevereiro";

    }

    else if (numMes==3)

    {

      mesExtenso="mar�o";

    }

    else if (numMes==4)

    {

      mesExtenso="abril";

    }

    else if (numMes==5)

    {

      mesExtenso="maio";

    }

    else if (numMes==6)

    {

      mesExtenso="junho";

    }

    else if (numMes==7)

    {

      mesExtenso="julho";

    }

    else if (numMes==8)

    {

      mesExtenso="agosto";

    }

    else if (numMes==9)

    {

      mesExtenso="setembro";

    }

    else if (numMes==10)

    {

      mesExtenso="outubro";

    }

    else if(numMes==11)

    {

      mesExtenso="novembro";

    }

    else if (numMes==12)

    {

      mesExtenso="dezembro";

    }

    else 
    {

      cout <<"M�s inv�lido!!!";

    }

    cout << "O n�mero " << numMes << " equivale ao m�s de " << mesExtenso;

  

}
