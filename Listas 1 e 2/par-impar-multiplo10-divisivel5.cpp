//Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par, escreva se � m�ltiplo 
//de 10; se for �mpar, escreva se � divis�vel por 5.

#include <iostream>
using namespace std;

int main(){
  
  int numero;
  
  cout << "Digite um numero: ";
  cin >> numero;
  
  if(numero % 2 == 0){
    if(numero % 10 == 0){
      cout << "\nEsse numero � par e m�ltiplo de 10";
    }else{
      cout << "\nEsse numero � par e n�o � m�ltiplo de 10";
    }
  }else{
    if(numero % 5 == 0){
      cout << "\nEsse n�mero � �mpar e divis�vel por 5";
    }else{
      cout << "\nEsse n�mero � �mpar e n�o � divis�vel por 5";
    }
  }
  cout << "\n\t\t\t\tFim de programa\n";
  system("pause");
}
