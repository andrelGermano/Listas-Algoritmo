/*Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores. */
#include <iostream>
using namespace std;

int main() {
  int numero, cont;

  cout << "\nDigite um numero: ";
  cin >> numero;
  cout << "\NsEUS DIVISORES SÃO: ";
  for(cont=1;cont<=numero;cont++){
    if(numero%cont==0){
      cout << cont << ", ";
    }
  }
    

}
