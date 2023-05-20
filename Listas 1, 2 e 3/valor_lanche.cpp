//Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade de cada um e calcule o valor a ser pago por aquele lanche.

#include <iostream>
using namespace std;

int main() {
	
	cout << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t|            Sanduíche             |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| Código | Descrição | Preço/unid  |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| 100 | Cachorro-quente |  R$1,10  |" << endl;
	cout << "\t\t| 101 |  Baurú simples  |  R$1,30  |" << endl;
	cout << "\t\t| 102 |  Baurú com ovo  |  R$1,50  |" << endl;
	cout << "\t\t| 103 |   Hamburguer    |  R$1,10  |" << endl;
	cout << "\t\t| 104 |  Cheeseburguer  |  R$1,30  |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t|             Bebidas              |" << endl;
	cout << "\t\t------------------------------------" << endl;
	cout << "\t\t| Código | Descrição | Preço/unid  |" << endl;
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
	
    cout << "\nCódigo do sanduíche: ";
	cin >> codigoUm;
	cout << "\nQuantidade: ";
	cin >> quantidadeUm;
	cout << "\nCódigo da bebida: ";
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
		defaul: cout << "\nCódigo inválido.";
	}
	switch(codigoDois){
		case 105: valorDois = 1.00 * quantidadeDois;
		break;
		case 106: valorDois = 2.00 * quantidadeDois;
		break;
		case 107: valorDois = 1.50 * quantidadeDois;
		break;
		default: cout << "\nCódigo inválido.";
	}
	cout << "\nSeu valor total será de: " << valorUm + valorDois << "0 reais.";
}
