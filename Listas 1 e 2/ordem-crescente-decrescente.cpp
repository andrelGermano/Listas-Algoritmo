//Elabore um algoritmo que leia 3 n�meros inteiros e uma ordem (�c� � crescente ou �d� � decrescente) e escreva-os na ordem solicitada.

#include <iostream>
using namespace std;

int main() {
	
	float primeiro;
	float segundo;
	float terceiro;
	char letra;
	
	cout << "Digite 3 n�meros, teclando enter entre eles:\n";
	cin >> primeiro >> segundo >> terceiro;
	cout << "Agora digite 'c' para crescente e 'd' para decrescente: ";
	cin >> letra;
	
	if(letra == 'd'){
		if(primeiro > segundo && segundo > terceiro){
			cout << "\nA ordem decrescente desses n�meros �: " << primeiro << ", " << segundo << ", " << terceiro; 
		}else if(primeiro > terceiro && terceiro > segundo){
			cout << "\nA ordem decrescente desses n�meros �: " << primeiro << ", " << terceiro << ", " << segundo;
		}else if(segundo > primeiro && primeiro > terceiro){
			cout << "\nA ordem decrescente desses n�meros �: " << segundo << ", " << primeiro << ", " << terceiro;
		}else if(segundo > terceiro && terceiro > primeiro){
			cout << "\nA ordem decrescente desses n�meros �: " << segundo << ", " << terceiro << ", " << primeiro;
		}else if(terceiro > segundo && segundo > primeiro){
			cout << "\nA ordem decrescente desses n�meros �: " << terceiro << ", " << segundo << ", " << primeiro;
		}else if(terceiro > primeiro && primeiro > segundo){
			cout << "\nA ordem decrescente desses n�meros �: " << terceiro << ", " << primeiro << ", " << segundo;
		}
		
	}else if(letra == 'c'){
		if(primeiro > segundo && segundo > terceiro){
			cout << "\nA ordem crescente desses n�meros �: " << terceiro << ", " << segundo << ", " << primeiro; 
		}else if(primeiro > terceiro && terceiro > segundo){
			cout << "\nA ordem crescente desses n�meros �: " << segundo << ", " << terceiro << ", " << primeiro;
		}else if(segundo > primeiro && primeiro > terceiro){
			cout << "\nA ordem crescente desses n�meros �: " << terceiro << ", " << primeiro << ", " << segundo;
		}else if(segundo > terceiro && terceiro > primeiro){
			cout << "\nA ordem crescente desses n�meros �: " << primeiro << ", " << terceiro << ", " << segundo;
		}else if(terceiro > segundo && segundo > primeiro){
			cout << "\nA ordem crescente desses n�meros �: " << primeiro << ", " << segundo << ", " << terceiro;
		}else if(terceiro > primeiro && primeiro > segundo){
			cout << "\nA ordem crescente desses n�meros �: " << segundo << ", " << primeiro << ", " << terceiro;
		}
	}else{
		cout << "\nAlgo inv�lido foi digitado.";
	}
	cout << "\n\t\t\t\t\tFim do programa";
}
