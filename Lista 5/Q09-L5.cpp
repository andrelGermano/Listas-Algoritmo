#include <iostream>
using namespace std;
int main(){
	int i, j, valAux=97;
	bool fim=false, venceu=false;
	char jo[3][3], jogada, vez=0;

	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			jo[i][j]= static_cast<char>(valAux);
			valAux++;
		}
	}
	cout << "\n        JOGO  DA  VELHA      " << endl << endl;
	cout << "           |       |         " << endl;
	cout << "       " << jo[0][0] << "   |   " << jo[0][1]  << "   |   " << jo[0][2] << endl;
	cout << "           |       |         " << endl;
	cout << "   -------------------------" << endl;
	cout << "           |       |         " << endl;
	cout << "       " << jo[1][0] << "   |   " << jo[1][1]  << "   |   " << jo[1][2] << endl;
	cout << "           |       |         " << endl;
	cout << "   -------------------------" << endl;
	cout << "           |       |         " << endl;
	cout << "       " << jo[2][0] << "   |   " << jo[2][1]  << "   |   " << jo[2][2] << endl;
	cout << "           |       |         " << endl;
	do{
		do{
			cout << "\nJogador X, escolha sua letra: ";
			cin >> jogada;
		}while(jogada<97||jogada>105);
		vez++;
		fim=false;
		switch(jogada){
			case 97: jo[0][0] = 'X';
			break;
			case 98: jo[0][1] = 'X';
			break;
			case 99: jo[0][2] = 'X';
			break;
			case 100: jo[1][0] = 'X';
			break;
			case 101: jo[1][1] = 'X';
			break;
			case 102: jo[1][2] = 'X';
			break;
			case 103: jo[2][0] = 'X';
			break;
			case 104: jo[2][1] = 'X';
			break;
			case 105: jo[2][2] = 'X';
			break;
			}
		system("cls");
		cout << "\n        JOGO  DA  VELHA      " << endl << endl;
		cout << "           |       |         " << endl;
		cout << "       " << jo[0][0] << "   |   " << jo[0][1]  << "   |   " << jo[0][2] << endl;
		cout << "           |       |         " << endl;
		cout << "   -------------------------" << endl;
		cout << "           |       |         " << endl;
		cout << "       " << jo[1][0] << "   |   " << jo[1][1]  << "   |   " << jo[1][2] << endl;
		cout << "           |       |         " << endl;
		cout << "   -------------------------" << endl;
		cout << "           |       |         " << endl;
		cout << "       " << jo[2][0] << "   |   " << jo[2][1]  << "   |   " << jo[2][2] << endl;
		cout << "           |       |         " << endl;
		for(i=0;i<=2;i++){
			for(j=0;j<=2;j++){
				if(jo[0][j]==jo[1][j]&&jo[1][j]==jo[2][j]){
					venceu=true;
				}
			}
			if(jo[i][0]==jo[i][1]&&jo[i][1]==jo[i][2]){
				venceu=true;
			}
		}
		if((jo[0][0]==jo[1][1]&&jo[1][1]==jo[2][2])||(jo[2][0]==jo[1][1]&&jo[1][1]==jo[0][2])){
			venceu=true;
		}
		if(venceu==true){
			cout << "\nJogador X ganhou!";
			fim=true;
		}
		if(fim==false){
			do{
				cout << "\nJogador O, escolha sua letra: ";
				cin >> jogada;
			}while(jogada<97||jogada>105);
			vez++;
			switch(jogada){
				case 97: jo[0][0] = 'O';
				break;
				case 98: jo[0][1] = 'O';
				break;
				case 99: jo[0][2] = 'O';
				break;
				case 100: jo[1][0] = 'O';
				break;
				case 101: jo[1][1] = 'O';
				break;
				case 102: jo[1][2] = 'O';
				break;
				case 103: jo[2][0] = 'O';
				break;
				case 104: jo[2][1] = 'O';
				break;
				case 105: jo[2][2] = 'O';
				break;
				}
			system("cls");
			cout << "\n        JOGO  DA  VELHA      " << endl << endl;
			cout << "           |       |         " << endl;
			cout << "       " << jo[0][0] << "   |   " << jo[0][1]  << "   |   " << jo[0][2] << endl;
			cout << "           |       |         " << endl;
			cout << "   -------------------------" << endl;
			cout << "           |       |         " << endl;
			cout << "       " << jo[1][0] << "   |   " << jo[1][1]  << "   |   " << jo[1][2] << endl;
			cout << "           |       |         " << endl;
			cout << "   -------------------------" << endl;
			cout << "           |       |         " << endl;
			cout << "       " << jo[2][0] << "   |   " << jo[2][1]  << "   |   " << jo[2][2] << endl;
			cout << "           |       |         " << endl;
			for(i=0;i<=2;i++){
				for(j=0;j<=2;j++){
					if(jo[0][j]==jo[1][j]&&jo[1][j]==jo[2][j]){
						venceu=true;
					}
				}
				if(jo[i][0]==jo[i][1]&&jo[i][1]==jo[i][2]){
					venceu=true;
				}
			}
			if((jo[0][0]==jo[1][1]&&jo[1][1]==jo[2][2])||(jo[2][0]==jo[1][1]&&jo[1][1]==jo[0][2])){
				venceu=true;
			}
			if(venceu==true){
				cout << "\nJogador O ganhou!";
				fim=true;
			}
		}
		if(vez==9){
			fim=true;
			if(venceu==false){
				cout << "\nDeu velha!";
			}
		}
	}while(fim==false);
}
