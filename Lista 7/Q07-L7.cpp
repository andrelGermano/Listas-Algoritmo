#include <iostream>
using namespace std;
void troca(int um, int dois);

int main(){
  int dois, um;
  cout << "\nNumero um: ";
  cin >> um;
  cout << "\nNumero dois: ";
  cin >> dois;
  troca(um, dois);
}
void troca(int um, int dois){
  int aux;
  aux=um;
  um=dois;
  dois=aux;
}
