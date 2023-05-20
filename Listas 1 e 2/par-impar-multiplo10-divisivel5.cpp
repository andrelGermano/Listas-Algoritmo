//Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo 
//de 10; se for ímpar, escreva se é divisível por 5.

#include <iostream>
using namespace std;

int main(){
  
  int numero;
  
  cout << "Digite um numero: ";
  cin >> numero;
  
  if(numero % 2 == 0){
    if(numero % 10 == 0){
      cout << "\nEsse numero é par e múltiplo de 10";
    }else{
      cout << "\nEsse numero é par e não é múltiplo de 10";
    }
  }else{
    if(numero % 5 == 0){
      cout << "\nEsse número é ímpar e divisível por 5";
    }else{
      cout << "\nEsse número é ímpar e não é divisível por 5";
    }
  }
  cout << "\n\t\t\t\tFim de programa\n";
  system("pause");
}
