/*19. Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada. 
Entrada: “uma frase qualquer” 
Saída: “reuqlauq esarf amu”*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string qualquer;
	int i;
	
	cout << "\nDigite: ";
	getline(cin,qualquer);
	
	for(i=qualquer.length();i>=0;i--){
		cout << qualquer[i];
	} 
}
