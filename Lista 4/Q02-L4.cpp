/*Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final. */

#include <iostream>
using namespace std;

int main(){
	int v1[20], i, pares=0;
	
	for(i=0;i<=19;i++){
		cout << "\nDigite o numero: ";
		cin >> v1[i];
		cout << v1[i] << " ";
		
		if(v1[i]%2==0){
			v1[i]=0;
			pares++;
		}
	}
	cout << "\nPares: " << pares;
	cout << "\nVetor final: ";
	for(i=0;i<=19;i++){
		cout << v1[i] << " ";
	}
}
