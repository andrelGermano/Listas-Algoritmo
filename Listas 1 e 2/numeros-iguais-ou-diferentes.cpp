//Leia 3 n�meros inteiros e escreva uma das seguintes mensagens:
//� Todos os n�meros s�o iguais;
//� Todos os n�meros s�o diferentes;
//� Apenas dois n�meros s�o iguais. 

#include <iostream>
using namespace std;

int main() {
	
	int numUm, numDois, numTres;
	
	cout << "Digite 3 numeros inteiros: ";
	cin >> numUm >> numDois >> numTres;
	
	if(numUm == numDois && numDois == numTres){
		cout << "Todos os n�meros s�o iguais.";
	}else if(numUm != numDois && numDois != numTres && numUm != numTres){
		cout << "Todos os n�meros s�o diferentes";
	}else if(numUm == numDois && numDois != numTres){
		cout << "Apenas dois n�meros s�o iguais";
	}else if(numUm == numTres && numTres != numDois){
		cout << "Apenas dois n�meros s�o iguais";
	}else if(numUm != numDois && numDois == numTres){
		cout << "Apenas dois n�meros s�o iguais";
	}else if(numUm != numTres && numDois == numUm){
		cout << "Apenas dois n�meros s�o iguais";
	}else{
		cout << "Inv�lido";
	}
	
	
}
