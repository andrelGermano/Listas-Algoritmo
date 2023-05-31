/*3. Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias 
para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma 
estrutura de registro para a construção deste cadastro. */
#include <iostream>
#include <string>
using namespace std;
struct tcadastro{
	int identidade;
	string nome, endereco, telefone;
};

int main(){
	tcadastro cliente[2];
	int i;
	cout << "\CADASTRO: ";
	for(i=0;i<2;i++){
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
	}
}
