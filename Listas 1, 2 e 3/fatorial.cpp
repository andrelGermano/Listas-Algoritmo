/* Elabore um algoritmo que leia um n�mero inteiro e escreva o seu fatorial. Ex.: Fatorial de 4 = 4! = 4 X 3 X 
2 X 1 = 24. Ap�s o fatorial, verifique e escreva o pr�ximo n�mero divis�vel pelo n�mero digitado.*/

#include <iostream>
using namespace std;

int main(){
	int cont, numero, fatorial=1;;
	
	cout << "Escreva o numero: ";
	cin>> numero;
	
	for(cont=numero; cont>=1; cont--){
		fatorial=fatorial*cont;
		if(cont>1){
			cout << cont << " X ";
		}else{
			cout << cont << " = " << fatorial << "." << endl;
		}
	}
}
