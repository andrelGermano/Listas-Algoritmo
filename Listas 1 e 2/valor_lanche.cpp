//Escreva um algoritmo que leia o c�digo dos itens pedidos (um sanduiche e uma bebida) e a quantidade de cada um e calcule o valor a ser pago por aquele lanche.

#include <iostream>
using namespace std;

int main() {
	
	cout << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t|            Sandu�che             |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| C�digo | Descri��o | Pre�o/unid  |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| 100 | Cachorro-quente |  R$1,10  |" << endl;
	cout << "\t\t| 101 |  Baur� simples  |  R$1,30  |" << endl;
	cout << "\t\t| 102 |  Baur� com ovo  |  R$1,50  |" << endl;
	cout << "\t\t| 103 |   Hamburguer    |  R$1,10  |" << endl;
	cout << "\t\t| 104 |  Cheeseburguer  |  R$1,30  |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t|             Bebidas              |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| C�digo | Descri��o | Pre�o/unid  |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| 105 |   Refrigerante  |  R$1,00  |" << endl;
	cout << "\t\t| 106 |       Suco      |  R$2,00  |" << endl;
	cout << "\t\t| 107 |      Nescau     |  R$1,50  |" << endl;
	cout << "\t\t------------------------------------" << endl;
	
	int codigoUm;
	int codigoDois;
	float valorUm;
	float valorDois;
	int quantidadeUm;
	int quantidadeDois;
	
    cout << "\nC�digo do sandu�che: ";
	cin >> codigoUm;
	cout << "\nQuantidade: ";
	cin >> quantidadeUm;
	cout << "\nC�digo da bebida: ";
	cin >> codigoDois;
	cout << "\nQuantidade: ";
	cin >> quantidadeDois;
	
	switch(codigoUm){
		case 100: valorUm = 1.10 * quantidadeUm;
		break;
		case 101: valorUm = 1.30 * quantidadeUm;
		break;
		case 102: valorUm = 1.50 * quantidadeUm;
		break;
		case 103: valorUm = 1.10 * quantidadeUm;
		break;
		case 104: valorUm = 1.30 * quantidadeUm;
		break;
		defaul: cout << "\nC�digo inv�lido.";
	}
	switch(codigoDois){
		case 105: valorDois = 1.00 * quantidadeDois;
		break;
		case 106: valorDois = 2.00 * quantidadeDois;
		break;
		case 107: valorDois = 1.50 * quantidadeDois;
		break;
		default: cout << "\nC�digo inv�lido.";
	}
	cout << "\nSeu valor total ser� de: " << valorUm + valorDois << "0 reais.";
}
