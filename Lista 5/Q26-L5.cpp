/*26. Elabore um algoritmo que leia uma string e a escreva sem as suas vogais.*/
#include <cstring>
#include <iostream>
using namespace std;
int main(){
	string frase;
	int i;
	
	cout << "\nFrase: ";
	getline(cin,frase);
	cout << "\n Frase sem vogais: ";
	for(i=0;i<frase.size();i++){
		if(frase[i]!='a'&&frase[i]!='A'&&frase[i]!='e'&&frase[i]!='E'&&frase[i]!='i'&&frase[i]!='I'&&frase[i]!='o'&&frase[i]!='O'&&frase[i]!='u'&&frase[i]!='U'){
			cout << frase[i];
	}
}
