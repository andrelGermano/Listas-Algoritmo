/*5. Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando 
o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20 
clientes, a tela seja limpa e seja exibida uma nova tela perguntando se o usuário quer ver 
um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o 
sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente 
individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma 
busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente 
cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”.   */
#include <iostream>
#include <string>
using namespace std;
struct tcadastro{
	int identidade;
	string nome, endereco, telefone;
};

int main(){
	tcadastro cliente[20];
	int i, iAux, fim=0;
	char resposta;
	int numero;
	bool achou=false;
	for(i=0;i<20;i++){
		cout << "\n -------- CADASTRO " << i+1 << " --------" << endl;;
		cout << "\n Identidade(apenas numeros):";
		cin >> cliente[i].identidade;
		cout << "\n Seu nome:";
		getchar();
		getline(cin,cliente[i].nome);
		cout << "\n Endereço:";
		getline(cin,cliente[i].endereco);
		//getchar();
		cout << "\n Telefone:";
		getline(cin,cliente[i].telefone);
		//getchar();
		fim++;
		do{
			cout << "\nDeseja continuar?(S / N):";
			cin >> resposta;
		}while(resposta!='N'&&resposta!='S');
		if(resposta ==  'N'){
			i=20;
		}
		system("cls");
	}
	do{
		cout << "\n Digite '1' para ver um relatorio e '2' para consultar um cliente individualmente: ";
		cin >> numero;
	}while(numero!=1&&numero!=2);
	if(numero==1){
		for(i=0;i<fim;i++){
			cout << endl  << endl << i+1 << "° Cadastrado: ";
			cout << "\n Identidade:" << cliente[i].identidade;
			cout << "\n Nome:" << cliente[i].nome;
			cout << "\n Endereço:" << cliente[i].endereco;
			cout << "\n Telefone:" << cliente[i].telefone;
		}
	}else{
		cout << "\n Digite a identidade do cliente: ";
		cin >> numero;
		
		for(i=0;i<fim;i++){
			if(numero==cliente[i].identidade){
				iAux=i;
				achou=true;
			}
		}
		if(achou){
			cout << "\n Identidade:" << cliente[iAux].identidade;
			cout << "\n Nome:" << cliente[iAux].nome;
			cout << "\n Endereço:" << cliente[iAux].endereco;
			cout << "\n Telefone:" << cliente[iAux].telefone;
		}else{
			cout << "\n Cliente nao cadastrado";
		}
	}
}
