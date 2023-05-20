#include <iostream>
using namespace std;

int main(){
  
  float valorCompra;
  int parcelas;
  float prestacao;
  
  cout << "Digite o valor da compra: ";
  cin >> valorCompra;
  cout << "\nEm quantas parcelas? (De 1 a 10) R: ";
  cin >> parcelas;
  
  prestacao = valorCompra/parcelas;
  
  switch (parcelas){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10: cout << "\nO valor de cada prestação será: " << prestacao;
       break;
    default: cout << "Digite um numero de parcelamento valido.";
  }
}
