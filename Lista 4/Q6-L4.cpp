/*Elabore um algoritmo que leia um vetor A de 20 posi��es. Em seguida, trocar o primeiro elemento com o 
�ltimo, o segundo com o pen�ltimo, o terceiro com o antepen�ltimo, e assim sucessivamente. Ao final, 
escreva o vetor A modificado.*/

#include <iostream>
using namespace std;

int main(){
	int A[20], i, i2=19;
	
	for(i=0;i<=19;i++){
		cout << "\nNumero: ";
		cin >> A[i];
	}
	for(i=0;i<=19;i++){
		A[i]=A[i2];
		cout << A[i] << " ";
		i2--;
	}
	
}
