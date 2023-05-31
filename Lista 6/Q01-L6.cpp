/*1. Elabore um algoritmo preencha o cadastro de 3 alunos contendo matricula, nome, 
endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final. */
#include <iostream>
using namespace std;

struct aluno{
	int matricula;
	string nome, endereco;
	float media;
};
int main(){
	aluno cadastro[3];
	int i;
	
	for(i=0;i<3;i++){
		cout << "\nMatricula:";
		cin >> cadastro[i].matricula;
		getchar();
		cout << "\nNome:";
		getline(cin,cadastro[i].nome);
		cout << "\nEndereco:";
		getline(cin,cadastro[i].endereco);
		cout << "\nMedia geral:";
		cin >> cadastro[i].media;
	}
	for(i=0;i<3;i++){
		if(cadastro[i].media>5){
			cadastro[i].media+=0.5;
		}
	}
	for(i=0;i<3;i++){
		cout << "matricula: " << cadastro[i].matricula << endl;
		cout << "nome: " << cadastro[i].nome << endl;
		cout << "endereco: " << cadastro[i].endereco << endl;
		cout << "media: " << cadastro[i].media << endl;
	}
}
