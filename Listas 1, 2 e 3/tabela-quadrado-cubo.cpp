/*Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número
negativo, solicitar que o usuário digite novamente até que o número seja positivo. */

#include <iostream>
using namespace std;

int main(){
	float val1, val2, val3, val4, soma;

	do{
		do{
			cout << "\nDigite os valores de A, B, C, e D, respectivamente: ";
			cin >> val1 >> val2 >> val3 >> val4;
		}while((val1<0) || (val2<0) || (val3<0) || (val4<0));
		soma=val1+val2+val3+val4;
		
		if(soma!=0){
		cout << "|----------------------------|" << endl;
		cout << "| VALOR | QUADRADO |  CUBO   |" << endl;
		cout << "|----------------------------|" << endl;
		cout << "|   A   |    "<<val1*val1<<"\t|\t"<< val1*val1*val1<<"\t|\t" << endl;
		cout << "|----------------------------|" << endl;
		cout << "|   B   |    "<<val2*val2<<"\t|\t"<< val2*val2*val2<<"\t|\t" << endl;
		cout << "|----------------------------|" << endl;
		cout << "|   C   |    "<<val3*val3<<"\t|\t"<< val3*val3*val3<<"\t|\t" << endl;
		cout << "|----------------------------|" << endl;
		cout << "|   D   |    "<<val4*val4<<"\t|\t"<< val4*val4*val4<<"\t|\t" << endl;
		cout << "|----------------------------|" << endl;
		}
	}while(soma!=0);
}
