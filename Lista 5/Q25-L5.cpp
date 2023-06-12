#include <iostream>
#include <string>
using namespace std;

int main(){
	string frase, aux;
	int i,j, qtdEspacos=0;
	bool palindromo=true;
	
	cout << "\n:Frase/palavra: "; // pedindo a frase
	getline(cin,frase);
	
	for(i=0;i<frase.size();i++){  // contando quantos espaços (' ') tem na frase, adicionando na variavel qtdEspacos
		if(frase[i]==' ')
			qtdEspacos+=1;
	}
	
	for(i=0;i<frase.size()-qtdEspacos;i++){  // inicializando 'aux' com o tamanho da 'frase', sem os espaços, para não dar erro
		aux[i]=frase[i];                     // na hora de verificar se é um palíndromo
	}
	
	j=0; // inicializando o 'j'
	for(i=0;i<frase.size();i++){  // atribuindo os valores de 'frase' (sem espaços) em 'aux'
		if(frase[i]!=' '){
			aux[j]=frase[i];
			j++;
		}
	}
	
	j=(aux.size()-1);  // verificando se é um palíndromo
	for(i=0;i<aux.size();i++){
		if(aux[i]!=aux[j])
			palindromo=false;
		j--;
	}
	
	if(!palindromo){
		cout << "\nNao e um palindromo";
	}else{
		cout << "\nE um palindromo";
	}
}
