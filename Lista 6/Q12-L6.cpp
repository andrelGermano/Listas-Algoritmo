#include <iostream>
#include <cstring>
using namespace std;
struct tNumero{
	int conta;
	int agencia;
	int banco;
};
struct tConta{
	tNumero numero;
	float saldo;
	string nome, senha;
};
int main(){
	tConta cadastro[100];
	int i=0, resposta, numAux, iAux, iAux2, j;
	bool sair, existe, certo;
	string senhaAux;
	float saldoAux;
	
	do{
		if(i!=99){ // Só pedirá cadastramento se houver espaço para tal
			cout << "\n------- CADASTRO " << i+1 << " -------" << endl; // Pedindo cadastramento do usuário
			cout << "\nNumero do banco: "; 
			cin >> cadastro[i].numero.banco;
			cout << "\nNumero da agencia: ";
			cin >> cadastro[i].numero.agencia;
			cout << "\nNumero da conta: ";
			cin >> cadastro[i].numero.conta;
			cout << "\nNome completo: ";
			getchar();
			getline(cin,cadastro[i].nome);
			cout << "\nSua senha: ";
			getline(cin,cadastro[i].senha);
			cout << "\nSaldo atual: ";
			cin >> cadastro[i].saldo;
			cout << "\nDigite 1 para continuar e 2 para sair: ";
			cin >> resposta;
			i++; // Incrementando o indice 'i' para cadastros futuros
			system("cls");
		}else{ // Se não houver mais espaço para cadastro, essa mensagem será mostrada e passará para a próxima parte do sistema
			cout << "\nSem mais cadastros disponiveis.";
			resposta=2;
		}
	}while(resposta==1);
	sair=false;
	do{
		cout << "\n\t--------------";
		cout << "\n\t| 1 - ENTRAR | ";
		cout << "\n\t| 2 - SAIR   |  ";
		cout << "\n\t--------------";
		cout << "\n\n  Digite a opcao escolhida: ";
		cin >> resposta;
		system("cls");
		switch(resposta){
			case 1: // Caso o usuário escolha entrar, o número da conta será pedido
				cout << "\n\t---- ENTRAR ----" << endl;
				cout << "\n\tNumero da conta: ";
				cin >> numAux;
				existe=false;
				for(j=0;j<=i;j++){ // Verificação da existência da conta
					if(numAux==cadastro[j].numero.conta)
						existe=true; 
				}
				if(existe){ // Se o número da conta existir, a senha será pedida para verificação
					cout << "\n\tSenha: ";
					getchar();
					getline(cin,senhaAux);
					certo=false;
					for(j=0;j<=i;j++){ // Verificação da senha
						if(senhaAux==cadastro[j].senha){
							certo=true;
							iAux=j; // Guardando valor de 'j' para realizar as operações futuras com a conta desse indice
						}
					} // Se a senha estiver correta, o painel abaixo será mostrado 
					if(certo){
						do{
							cout << "\n\t---------------------------------";
							cout << "\n\t1 - Saque";
							cout << "\n\t2 - Deposito";
							cout << "\n\t3 - Saldo";
							cout << "\n\t4 - Voltar para a tela anterior";
							cout << "\n\t---------------------------------";
							do{
								cout << "\n\n\tEscolha: ";
								cin >> resposta;
							}while(resposta<1||resposta>4);
							system("cls");
							switch(resposta){
								case 1: // Se escolher 'Saque'
									cout << "\n\t---- SAQUE ----" << endl;
									do{
										cout << "\n  Digite a quantia desejada: "; // Pedindo pro usuário o valor do saque
										cin >> saldoAux;
										if(saldoAux>cadastro[iAux].saldo) // Não permite valor de saque maior que o saldo atual
											cout << "\n  Nao e possivel efetuar um saque maior que o saldo disponivel na conta." << endl;
									}while(saldoAux>cadastro[iAux].saldo);
									do{
										cout << "\n  Confirma o saque? (1 - SIM / 2 - NAO): "; // Pedindo pra confirmar o saque
										cin >> resposta;
									}while(resposta!=1&&resposta!=2);
									if(resposta==1){ // Se confirmar, a mensagem abaixo aparecerá e será descontado do saldo atual
										cadastro[iAux].saldo-=saldoAux;
										cout << "\n  Saque efetuado com sucesso!" << endl << endl << endl << endl << endl << endl << endl;
										system("pause");
										system("cls");
									}else{ // Se não confirmar, voltará para o painel acima
										system("cls");
									}
									break;
								case 2: // Se escolher 'Depósito'
									cout << "\n\t ---- Deposito ----" << endl;
									cout << "\n  Digite o numero da conta a ser depositada: "; // Pedindo conta cujo depósito será feito
									cin >> saldoAux;
									existe=false;
									for(j=0;j<=i;j++){ // Verificação da existência dessa conta 
										if(saldoAux==cadastro[j].numero.conta){
											existe=true; 
											iAux2=j;
										}
									}
									if(existe){ // Se existir, a operação será continuada
										do{
											cout <<"\n  Digite o valor a ser  depositado: ";
											cin >> saldoAux;
											if(saldoAux>cadastro[iAux].saldo) // Não permite valor de deposito maior que o saldo atual
												cout << "\n  Nao e possivel efetuar um deposito maior que o saldo disponivel na conta." << endl;
										}while(saldoAux>cadastro[iAux].saldo);
										do{
											cout << "\n  Confirma o deposito? (1 - SIM / 2 - NAO): "; // Pedindo pra confirmar o depósito
											cin >> resposta;
										}while(resposta!=1&&resposta!=2);
										if(resposta==1){ // Se confirmar, a mensagem abaixo aparecerá e será descontado do saldo atual e depositado na conta escolhida
											cadastro[iAux].saldo-=saldoAux; // Retirando valor da conta que fez o depósito
											cadastro[iAux2].saldo+=saldoAux; // Depositando valor na conta selecionada
											cout << "\n  Deposito efetuado com sucesso!" << endl << endl << endl << endl << endl << endl << endl;
											system("pause");
											system("cls");
										}else{ // Se não confirmar, voltará para o painel acima
											system("cls");
										}
									}else{ // Se não existir, a mensagem abaixo será mostrada
										cout << "\n  Erro de busca, nao existe conta com esses dados.";
									}
									break;
								case 3: // Se escolher 'Saldo'
									cout << "\n\tSeu saldo atual é de:";
									cout << "\n\tR$" << cadastro[iAux].saldo << endl << endl << endl << endl << endl << endl << endl;
									system("pause");
									system("cls");
									break;
							}
						}while(resposta!=4);
					}else{ // Se a senha não estiver correta, a mensagem abaixo será mostrada
						cout << "\nErro de busca.";
					}
				}else{ // Se o número da conta não existir, essa mensagem será mostrada e voltará para o painel 'entrar-sair'
					cout << "\nErro de busca.";
				}
				break;
			case 2: // Caso o usuário escolha sair, o programa se encerrará
				sair=true;
				break;
			default: // Caso a opção não esteja disponível, a mensagem abaixo será mostrada e o painel voltará a ser mostrado
				cout << "\nOpcao invalida";
		}
	}while(!sair);
	cout << "\n  Fim de programa.";
}
