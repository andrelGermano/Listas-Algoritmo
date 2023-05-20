#include <iostream>
using namespace std;

int main() {

  int escolha;
  int anos;
  int meses;
  int dias;
  int diasTotais;

  cout << "\n\t\t\tQuer saber quantos dias você tem de vida?\n\n\t\t\tDigite 1 "
          "para SIM e 0 para NÃO: ";
  cin >> escolha;

  if (escolha == 0) {

    cout << "\nPois tchau\n";

  } else if (escolha == 1) {

    cout << "\nDigite quantos anos (completos) você tem: ";
    cin >> anos;
    cout << "\nAgora digite quantos meses você tem de vida (fora os anos): ";
    cin >> meses;
    cout << "\nSó faltam os dias que você tem de vida (fora os meses e anos): ";
    cin >> dias;

    diasTotais = (anos * 365) + (meses * 30) + dias;

    cout << "\nVocê tem " << diasTotais << " dias de vida.";

  } else {
    cout << "\nEste número é inválido.\n";
  }
  cout << "\n\n\n\t\t\t\t\t\tFim do programa.";
}
