/*7. Escreva uma função chamada Troca que troque os valores dos parâmetros recebidos. Essa função não deve ter retorno.*/
#include <iostream>
using namespace std;

void Troca(int *pUm, int *pDois);

int main(){
	int valorUm, valorDois;
	
	cout << "\nValor um: ";
	cin >> valorUm;
	cout << "\nValor dois: ";
	cin >> valorDois;
	
	cout << "\n1o valor antes da troca: " << valorUm;
	cout << "\n2o valor antes da troca: " << valorDois;
	
	Troca(&valorUm, &valorDois);
	
	cout << "\n1o valor antes da troca: " << valorUm;
	cout << "\n2o valor antes da troca: " << valorDois;
}
void Troca(int *pUm, int *pDois){
	int aux;
	aux = *pUm;
	*pUm=*pDois;
	*pDois=aux;
}
