#include <cstring>
#include <iostream>
using namespace std;
//declarando registros
struct tPreco{
	float varejo;
	float atacado;
};
struct tRoupa{
	tPreco preco;
	string tamanho;
	string tipo;
	int codigo; //campo chave primaria
};
int main(){
	tRoupa roupa[1000];
	int opcao, codigoAux, fim=0, i, aux, aux2;
	bool pode, mostrar[1000], achou;
	string tipoAux;
	
	do{
		cout << "\n\t       MENU PRINCIPAL";
		cout << "\n\t---------------------------------";
		cout << "\n\t1 - CADASTRAR";
		cout << "\n\t2 - PESQUISAR";
		cout << "\n\t3 - ALTERAR";
		cout << "\n\t4 - EXCLUIR";
		cout << "\n\t5 - LISTAR CADASTROS EXISTENTES";
		cout << "\n\t6 - SAIR DO SISTEMA";
		cout << "\n\t---------------------------------";
		cout << "\n\tESCOLHA A OPCAO DESEJADA: ";
		cin >> opcao;
	
		switch(opcao){
			case 1: // Cadastrar produto
				cout << "\n\t\tCADASTRAMENTO..." << endl; 
				cout << "\nCodigo do produto: ";
				cin >> codigoAux;
				pode=true;
				for(i=0;i<=fim;i++){ //Procurando se código já existe no sistema
					if(codigoAux == roupa[i].codigo)
						pode=false;
				}
				if(!pode){ // Caso ja exista esse codigo, o cadastro nao poderá ser realizado
					cout << "\nCodigo ja cadastrado no sistema.";
				}else{ // Caso não exista, o cadastramento continuará
					roupa[fim].codigo = codigoAux; // comecei a pedir infos para o usuario cadastrar um produto
					cout << "\nTipo da roupa: "; 
					getchar();
					getline(cin,roupa[fim].tipo);
					cout << "\nTamanho: ";
					getline(cin,roupa[fim].tamanho);
					cout << "\nPreco: ";
					cin >> roupa[fim].preco.varejo;
					do{
						cout << "\nDeseja cadastrar preco de atacado? (1 - SIM / 2 - NAO): ";
						cin >> opcao;
					}while(opcao!=1&&opcao!=2);
					if(opcao==1){
						cout << "\nPreco de Atacado: ";
						cin >> roupa[fim].preco.atacado;
						mostrar[fim]=true;
					}else{
						mostrar[fim]=false;
					}
					
					fim++; // Quantidade de cadastros já realizados
					cout << "\n\t\tCADASTRO REALIZADO!";
				}
				break;
			case 2: // Buscar algum(s) produto(s) cadastrado(s)
				do{
					cout << "\nPesquisa por TIPO (digite 1) ou por CODIGO (digite 2): "; // Dando opções de busca para o usuario 
					cin >> opcao;                                                                  //(tipo ou código da roupa)
				}while(opcao!=1&&opcao!=2); 
				switch(opcao){
					case 1: // Pesquisar por tipo do produto
						cout << "\nTipo de roupa: ";
						getchar();
						getline(cin,tipoAux);
						pode=false;
						for(i=0;i<fim;i++){ // Procurando a existencia de produtos desse tipo
							if(tipoAux==roupa[i].tipo){
								pode=true;
								cout << "-----------------------------" << endl; // Caso existam, serão mostrados
								cout << "Codigo: " << roupa[i].codigo << endl;
								cout << "Tipo: " << roupa[i].tipo << endl;
								cout << "Tamanho: " << roupa[i].tamanho << endl;
								cout << "Preco: " << roupa[i].preco.varejo << endl;
								if(mostrar[i]==true)
									cout << "Codigo do produto: " << roupa[i].preco.atacado << endl;
							}
						}
						if(!pode){ 
							cout << "\nNenhum cadastro com esse nome foi encontrado."; // Caso não existam, essa mensagem será mostrada
						}
						break;
					case 2: // Pesquisar por codigo do produto
						cout << "\nCodigo da roupa: ";
						cin >> codigoAux;
						pode=false;
						for(i=0;i<fim;i++){ // Procurando a existência do produto com esse código
							if(codigoAux==roupa[i].codigo){
								pode=true;
								cout << "-----------------------------" << endl; // Caso exista, será mostrado o produto com esse código
								cout << "Codigo: " << roupa[i].codigo << endl;
								cout << "Tipo: " << roupa[i].tipo << endl;
								cout << "Tamanho: " << roupa[i].tamanho << endl;
								cout << "Preco: " << roupa[i].preco.varejo << endl;
								if(mostrar[i]==true)
									cout << "Codigo do produto: " << roupa[i].preco.atacado << endl; 
							}
						}
						if(!pode){ 
							cout << "\nCodigo nao cadastrado no sistema."; // Caso não exista, essa mensagem será mostrada
						}
				}
				break;
			case 3: // ALterar algum cadastro já realizado
				cout << "\n\n\tDigite o codigo do produto que deseja alterar: ";
				cin >> aux;
				achou=false; 
				for(i=0;i<fim;i++){ // Procurando o código no sistema
					if(aux==roupa[i].codigo){
						achou=true; // Caso seja encontrado, a flag será verdadeira e 
						aux2=i; // o valor de 'i' será guardado para alteração dos dados referentes a 'i'
					}
				}
					if(achou){ // Código foi encontrado, possibilitando alterações no cadastro do produto
					
						cout << endl << "\t-----------------------------" << endl;          // Dados sendo mostrados para melhor
						cout << "\tCodigo do produto: " << roupa[aux2].codigo << endl; // entendimento do usuário ao alterar
						cout << "\tTipo: " << roupa[aux2].tipo << endl;                // algum dado
						cout << "\tTamanho: " << roupa[aux2].tamanho << endl;
						cout << "\tPreco do produto: " << roupa[aux2].preco.varejo << endl;
						if(mostrar[aux2]==true)
							cout << "\tPreco de Atacado do produto: " << roupa[aux2].preco.atacado << endl; 
						cout << "\t-----------------------------" << endl;
							
						do{
							do{
								cout << "\n\t1-Codigo/ 2-Tipo/ 3-Tamanho/ 4-Preco/ 5-Salvar"; // Dependendo de sua escolha, uma só parte do 
								cout << "\n\tDigite o que deseja alterar: ";         // cadastro será alterada por vez, até o usuário salvar
								cin >> opcao;
							}while(opcao<1||opcao>5);                                        
							switch(opcao){
								case 1: // Alterar código do produto
									cout << "\n\tDigite o novo codigo: ";
									cin >> roupa[aux2].codigo;
									break;
								case 2: // Alterar tipo do produto
									cout << "\n\tDigite o novo tipo: ";
									getchar();
									getline(cin,roupa[aux2].tipo);
									break;
								case 3: // Alterar tamanho do produto
									cout << "\n\tDigite o novo tamanho: ";
									getchar();
									getline(cin,roupa[aux2].tamanho);
									break;
								case 4: // Alterar preço do produto
									cout << "\n\tDigite o novo preco: ";
									cin >> roupa[aux2].preco.varejo;
									if(mostrar[aux2]==true){ // Se houver preço de atacado, usuário optará por alterá-lo também ou não
										do{
											cout << "\n\tDeseja alterar o preco de atacado?(1-SIM/2-NAO): ";
											cin >> opcao;
										}while(opcao!=1&&opcao!=2);
										if(opcao==1){ // Alterar preço de atacado do produto
											cout << "\n\tDigite o novo preco de atacado: ";
											cin >> roupa[aux2].preco.atacado;
										}
									}
									break;
								case 5: // Dados atualizados
									cout << "\n\n\tDADOS ATUALIZADOS COM SUCESSO!";
									
							}
						}while(opcao!=5);
						break;
					}else if(!achou)
						cout << "\n\tCodigo invalido.";
				break;
			case 4: // Excluir algum cadastro por completo.
				cout << "\n\t\tEXCLUSAO..." << endl;
				cout << "\n\n\tDigite o codigo do produto que deseja excluir: ";
				cin >> aux;
				achou=false; 
				for(i=0;i<=fim;i++){ // Procurando o código no sistema
					if(aux==roupa[i].codigo){
						achou=true; // Caso seja encontrado, a flag será verdadeira e 
						aux2=i; // o valor de 'i' será guardado para alteração dos dados referentes a 'i'
					}
				}
				if(achou){ // Código foi encontrado, possibilitando a exclusão do cadastro do produto
					
						cout << endl << "\t-----------------------------" << endl;          // Dados sendo mostrados para melhor
						cout << "\tCodigo do produto: " << roupa[aux2].codigo << endl; // entendimento do usuário ao excluir
						cout << "\tTipo: " << roupa[aux2].tipo << endl;                // o cadastro
						cout << "\tTamanho: " << roupa[aux2].tamanho << endl;
						cout << "\tPreco do produto: " << roupa[aux2].preco.varejo << endl;
						if(mostrar[i]==true)
							cout << "\tPreco de Atacado do produto: " << roupa[aux2].preco.atacado << endl; 
						cout << "\t-----------------------------" << endl;
						
						do{
							cout << "\n\n Tem certeza que deseja excluir o cadastro? (1 - Sim / 2 - Nao): ";
							cin >> opcao;
						}while(opcao!=1&&opcao!=2);
						
						if(opcao==1){
							roupa[aux2].codigo = roupa[aux2+1].codigo;
							roupa[aux2].tipo = roupa[aux2+1].tipo;             
							roupa[aux2].tamanho = roupa[aux2+1].tamanho;
							roupa[aux2].preco.varejo = roupa[aux2+1].preco.varejo;
							if(mostrar[aux2]==true)
								roupa[aux2].preco.atacado = roupa[aux2+1].preco.atacado;
							fim--;
							cout << "\n\t\tEXCLUSAO REALIZADA!";
						}
						break;
					}else if(!achou)
						cout << "\n\tCodigo invalido.";
				break;
			case 5:
				cout << "\n\nCADASTROS EXISTENTES: " << endl;
				for(i=0;i<fim;i++){
					cout << "-----------------------------" << endl;
					cout << "Codigo do produto: " << roupa[i].codigo << endl;
					cout << "Tipo: " << roupa[i].tipo << endl;
					cout << "Tamanho: " << roupa[i].tamanho << endl;
					cout << "Preco do produto: " << roupa[i].preco.varejo << endl;
					if(mostrar[i]==true)
						cout << "Preco de Atacado do produto: " << roupa[i].preco.atacado << endl; 
				}
				break;
			case 6:
				break;
			default: cout << "\nOPCAO INVALIDA." << endl;
		}
		cout << "\n\n\n\n\n";
		system("pause");
		system("cls");
	}while(opcao!=6);
}
