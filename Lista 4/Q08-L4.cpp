/*Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros), e escreva
um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B.*/

#include <iostream>
using namespace std;

int main(){
  int a[10],b[10],c[10], i, i2=0;

  for(i=0;i<=9;i++){
    cout << i+1 << "° numero de a: ";
    cin >> a[i];
    cout << i+1 << "° numero de b: ";
    cin >> b[i];
    if(a[i]==b[i]){
      c[i2]=a[i];
      i2++;
    }
  }
  cout << endl;
  cout << "Numeros comuns entre os dois vetores: ";
  for(i=0;i<=i2;i++){
    cout << c[i] << " ";
  }
}
