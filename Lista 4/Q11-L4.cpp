/*11.Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
pares e impares.*/
#include <iostream>
using namespace std;
int main() {
  int v[20], i, somaP=0, somaI=0;
  for(i=0;i<=19;i++){
    v[i]=(i*2);
    if((i*2)%2==0){
      somaP=v[i]+somaP;
    }else{
      somaI=v[i]+somaI;
    }
  }
  cout << "\nSoma dos elementos pares: " << somaP;
  cout << "\nSoma dos elementos impares: " << somaI;
}
