/*Escreva um algoritmo leia dois n�meros, A e B, verifique e escreva se s�o primos entre si. Considere que 
dois n�meros inteiros s�o ditos primos entre si se n�o existir divisor comum aos dois n�meros. Caso n�o 
sejam digitados valores positivos, o algoritmo deve solicitar que o usu�rio digite novamente at� que esta 
condi��o seja satisfeita.*/

#include <iostream>
using namespace std;

int main(){
	int A, B, cont, cont1, cont2, divisorA, divisorB;
	
	cout << "\nNumero A: ";
	cin >> A;
	cout << "\nNumero B: ";
	cin >> B;
	
	while((B<=0)||(A<=0)){
	cout << "\nNumero A: ";
	cin >> A;
	cout << "\nNumero B: ";
	cin >> B;
	}
	
	for(cont1=2;cont1<=A;cont1++){
		for(cont2=2;cont2<=B;cont2++){
			if (A%cont1==0 && B%cont2==0){
                cont++;
			}
        }
    }
     if (cont==0){
        cout << "Os numeros sao primos entre si.";
    } else {
        cout << "Os numeros nao sao primos entre si.";
    }
}
