/*Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
elementos. */

#include <iostream>
using namespace std;

int main(){
	int vet[20], dif=0, i, vet1, vet2;
	
	for(i=0;i<=19;i++){
		cout << "\nDigite o numero: ";
		cin >> vet[i];
		if(vet[i]-(vet[i-1])>dif){
			dif=vet[i]-vet[i-1];
			vet1=i;
			vet2=vet[i-1];
		}
	}
	cout << "\nMaior diferença: " << "indice " << vet1 << " - " << "indice " << vet2 << " = " << dif;
}
