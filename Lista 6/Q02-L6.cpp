#include <iostream>
#include <string>
using namespace std;
struct tAnimal{
	string nome;
	string raca;
	int idade;
};
int main(){
	tAnimal animais[50];
	int i, cadastros=0, maisVelho=0, resposta;
	string racaAux;
	bool existe=false;
	
	do{ // Cadastrando animais até que o usuário decida parar
		cout << "\n   CADASTRAMENTO " << cadastros+1;
		cout << "\n----------------------";
		cout << "\n Nome: ";
		getline(cin,animais[cadastros].nome);
		cout << "\n Raca: ";
		getline(cin,animais[cadastros].raca);
		cout << "\n Idade: ";
		cin >> animais[cadastros].idade;
		cadastros++;
		do{
			cout << "\n Deseja cadastrar mais? 1 - SIM / 2 - NAO: "; 
			cin >> resposta;
			getchar();
		}while(resposta!=1&&resposta!=2); // Prendendo o usuário pra que não escreva nada diferente do que lhe foi pedido.
		system("cls");
	}while(resposta==1);
	
	for(i=0;i<cadastros;i++){ // Achando o mais velho e salvando seu índice pra mostrar seu nome.
		if(animais[i].idade>maisVelho){
			maisVelho=animais[i].idade;
			resposta=i;
		}
	}
	cout << "\n\n O nome do animal mais velho é " << animais[resposta].nome; // Mostrando o nome do mais velho.
	
	do{
		cout << "\n\nDeseja consultar os animais cadastrados pela raça? 1 - SIM / 2 - NAO: ";
		cin >> resposta;
	}while(resposta!=1&&resposta!=2); // Prendendo o usuário pra que não escreva nada diferente do que lhe foi pedido. 
	
	if(resposta==1){
		cout << "\n\n Pesquisar por raça: ";
		getchar();
		getline(cin,racaAux); 
		for(i=0;i<cadastros;i++){ // Procurando se existe essa raça cadastrada no sistema.
			if(racaAux==animais[i].raca){
				existe=true; // Se existir, o animal dessa raça é mostrado e 'existe' recebe 'true';
				cout << "\n ----------------------";
				cout << "\n Nome: " << animais[i].nome;
				cout << "\n Raca: " << animais[i].raca;
				cout << "\n Idade: " << animais[i].idade;
			}
		}
		if(!existe) // Se 'existe' for 'false', a mensagem abaixo será mostrada.
			cout << "\nRaca nao encontrada no sistema.";
	}
}
