// Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
// ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
// maior que Chico.

#include <iostream>
using namespace std;

int main() {
  float chico=1.50, juca=1.10;
  int anos=0;
  
  while(juca<=chico){
    chico = chico + 0.2;
    juca = juca + 0.3;
    anos++;
  }  
  
  
  cout << "Juca terá o mesmo tamanho que Chico em " << anos << " anos.";
}
