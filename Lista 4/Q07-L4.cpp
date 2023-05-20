/*Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos
de mesmo índice, colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante. */

#include <iostream>
using namespace std;

int main(){
  float v1[10], v2[10], v3[10];
  int i;

  for(i=0;i<=9;i++){
    cout << endl << i+1 << "° numero de V1: ";
    cin >> v1[i];
    cout << endl << i+1 << "° numero de V2: ";
    cin >> v2[i];
    v3[i]=(v1[i]*v2[i]);
  }
  cout << endl;
  for(i=0;i<=9;i++){
    cout << v3[i] << " ";
  }
}
