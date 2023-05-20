#include <iostream>
using namespace std;

int main(){
	float numeroD, decimal;
	int numeroI, arredondamento, resposta;
	
	do{
		cout << "\nNúmero: ";
		cin >> numeroD;
		numeroI=numeroD;
		decimal=numeroD-numeroI;
		if(decimal>0.5){
			arredondamento=numeroI+1;
		}else if(decimal<0.5){
			arredondamento=numeroI;
		}else{
			cout << "Deseja arredondamento para mais (1) ou para menos (2)? ";
			cin >> resposta;
			if(resposta==2){
				arredondamento=numeroI;
			}else if(resposta==1){
				arredondamento=numeroI+1;
			}else{
				cout << "Tchau!";
			}
		}
		cout << arredondamento;
	}while(numeroD!=0);
}
