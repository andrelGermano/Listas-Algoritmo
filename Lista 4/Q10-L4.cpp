#include <iostream>
using namespace std;
int main() {
  int a[10], b[10], c[10], i, somaA=0, qtdMaior=0;
  for(i=0;i<=9;i++){
    cout << endl << i+1 << "° Numero de A: ";
    cin >> a[i];
    somaA+=a[i];
    cout << endl << i+1 << "° Numero de B: ";
    cin >> b[i];
  }
  cout << "vetor c: " << endl;
  for(i=0;i<=9;i++){
    if(a[i]>(b[1]+b[2]+b[3]+b[4]+b[0]+b[5]+b[6]+b[7]+b[8]+b[9])){
      qtdMaior++;
    }
  }
  cout << "\nVetor c: ";
  for(i=0;i<=9;i++){
    c[i]=a[i]+b[i];
    cout << c[i] << " ";
  }
  cout << "soma dos elementos de A: " << somaA << endl;
  cout << "quantos elementos de A são maiores que a soma dos elementos de B: " << qtdMaior << endl;
}
