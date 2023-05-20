/*O n�mero 3025 possui a seguinte caracter�stica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia 
N n�meros de 4 algarismos e escreva a mensagem �positivo� se o n�mero tiver essa caracter�stica e 
�negativo� se n�o tiver*/

#include <iostream>
using namespace std;

int main(){
	int qtdNum, numero, cont, armaz1, armaz2, armaz3;
	
	do{
	cout << "Quantos numeros inteiros de 4 algarismos lerei? ";
	cin >> qtdNum;
	}while(qtdNum<0);
	
	for(cont=1;cont<=qtdNum;cont++){
		do{
			cout << "\nDigite o numero: ";
			cin >> numero;	
		}while(numero<0 || numero>9999);
		armaz1=numero/100;
		armaz2=numero%100;
		armaz3=armaz1+armaz2;
		if(armaz3*armaz3==numero){
			cout << "\npositivo\n";
		}else{
			cout << "\nnegativo\n";
		}
	}
	cout << "\n\n\t\tFim de programa.";
	system("pause");
}
