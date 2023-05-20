/*Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário.*/

#include <iostream>
using namespace std;

int main() {
  int tent, resposta=0;
  cout << "Advinhe o número de 1 a 10. Voce tem 3 tentativas.\n";
//o número é 5.

    for(tent=1;tent<=3;tent++){
    cout << tent << "ª tentativa: ";
    cin >> resposta; 
    if(resposta==5){
      cout << "\nAcertou!";
      tent = 4;
    }else if(resposta<5){
      cout << "Errou, é maior.\n";
    }else if(resposta>5){
      cout << "Errou, é menor.\n";
    }
  }
}
