/*4.  Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada 
cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar 
nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e 
finalizar. OBS: Deve-se utilizar um vetor de registros na solução. */
#include <iostream>
#include <string>
using namespace std;
struct tcadastro{
	int identidade;
	string nome, endereco, telefone;
};

int main(){
	tcadastro cliente[20];
	int i;
	char resposta;
	cout << "\CADASTRO: ";
	for(i=0;i<20;i++){
		cout << "Identidade(escreva apenas numeros):";
		cin >> cliente[i].identidade;
		cout << "Seu nome:";
		getline(cin,cliente[i].nome);
		getchar();
		cout << "Endereço:";
		getline(cin,cliente[i].endereco);
		getchar();
		cout << "Telefone:";
		getline(cin,cliente[i].telefone);
		getchar();
		cout << "\nDeseja continuar?(S / N):";
		cin >> resposta;
		if(resposta ==  'N'){
			i=20;
		}
	}
	for(i=0;i<20;i++){
		cout << i << "° Cadastrado: " << endl;
		cout << "Identidade:" << cliente[i].identidade;
		cout << "Nome:" << cliente[i].nome;
		cout << "Endereço:" << cliente[i].endereco;
		cout << "Telefone:" << cliente[i].telefone;
	}
}
