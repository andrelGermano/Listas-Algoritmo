//Leia 3 números inteiros e escreva uma das seguintes mensagens:
//• Todos os números são iguais;
//• Todos os números são diferentes;
//• Apenas dois números são iguais. 

#include <iostream>
using namespace std;

int main() {
	
	int numUm, numDois, numTres;
	
	cout << "Digite 3 numeros inteiros: ";
	cin >> numUm >> numDois >> numTres;
	
	if(numUm == numDois && numDois == numTres){
		cout << "Todos os números são iguais.";
	}else if(numUm != numDois && numDois != numTres && numUm != numTres){
		cout << "Todos os números são diferentes";
	}else if(numUm == numDois && numDois != numTres){
		cout << "Apenas dois números são iguais";
	}else if(numUm == numTres && numTres != numDois){
		cout << "Apenas dois números são iguais";
	}else if(numUm != numDois && numDois == numTres){
		cout << "Apenas dois nùmeros são iguais";
	}else if(numUm != numTres && numDois == numUm){
		cout << "Apenas dois números são iguais";
	}else{
		cout << "Inválido";
	}
	
	
}
