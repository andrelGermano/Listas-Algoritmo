/*Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente. Ao final, escreva os vetores A e B. */

#include <iostream>
using namespace std;

int main(){
	int A[20], B[20], i, i2=19;
	
	for(i=0;i<=19;i++){
		cout << "\nNumero: ";
		cin >> A[i];
		B[i2]=A[i];
		i2--;
	}
	cout << "\nElementos dos vetores A e B nesse formato(A1/B1 A2/B2 A3/B3...): ";
	for(i=0;i<=19;i++){
		cout << A[i] << "/" << B[i] << " ";
	}
}
