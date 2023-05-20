#include <iostream>
using namespace std;

int main() {
  int cont, id, horas, dependentes;
  float salLiquido, salBruto, inss, ir;

  for(cont=1; cont <=10; cont++){
    cout << "\nDigite sua identidade: ";
    cin >> id;
    cout << "\nQuantas horas voce trabalhou? ";
    cin >> horas;
    cout << "\nQuantos dependentes voce tem? ";
    cin >> dependentes;

    salBruto = (12*horas) + (40*dependentes);
    inss = salBruto*0.085;
    ir = salBruto*0.05;
    salLiquido = salBruto-inss-ir;
    cout << "\nSalario bruto: " << salBruto << ",00";
    cout << "\nSalario final: " << salLiquido;
    if(dependentes){
      cout << endl << id << endl;
    }
  }
}
  
