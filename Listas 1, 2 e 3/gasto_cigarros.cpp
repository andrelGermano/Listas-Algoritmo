#include <iostream>
using namespace std;

int main(){

  float anos;
  float porDia;
  float precoCarteira;
  float gasto;

  cout << "\nHá quantos anos você fuma? R: ";
  cin >> anos;
  cout << "\nQuantos cigarros você fuma por dia? R: ";
  cin >> porDia;
  cout << "\nQuanto você paga numa carteira de cigarros? R: ";
  cin >> precoCarteira;
  
  gasto = (precoCarteira/20) * porDia * (anos * 365);
  
    cout << "\n\nAo todo, você gastou " << gasto << "reais.";
}
