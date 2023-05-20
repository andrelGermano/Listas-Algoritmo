#include<iostream>
using namespace std;

int main() {
  int numCarteira, numMultas, cont, numMaiorMultas=0, armazCarteira;
  float valorMulta, somaMultas, totMultas=0;
  int resposta;

  do{
    somaMultas = 0;
    cout << "\nDigite o n° da carteira de motorista: ";
    cin >> numCarteira;
    cout << "\nDigite quantas multas você levou: ";
    cin >> numMultas;

    for(cont=1;cont<=numMultas;cont++){
      cout << "\nValor da " << cont << "ª multa: ";
      cin >> valorMulta;
      somaMultas = somaMultas + valorMulta; 
    }
    if(numMultas>numMaiorMultas){
      numMaiorMultas = numMultas;
      armazCarteira = numCarteira;
    }
    totMultas = totMultas + somaMultas;
    cout << "\nSua dívida total é de: R$" << somaMultas << ",00.";

    do{
	cout << "\n\n\t\t\t\t\tDeseja continuar? Digite '1' para SIM e '0' para NÃO: ";
    cin >> resposta;
    }while(resposta != 1 && resposta != 0);
    
  }while(resposta == 1);
  cout << "\n\nO valor total arrecadado foi de : R$" << totMultas << ",00.";
  cout << "\n\nATENÇÃO! Dono da carteira de n° '" << armazCarteira << "', no seu cartão está registrado o maior número de multas. Por favor, se oriente!";

  cout << "\n\n\t\t\t\t\t\t\tFim do programa.\n\n\n\n\n\n\n\n\n\n";
  system("pause");
}

