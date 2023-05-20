#include <iostream>
using namespace std;
int main(){
	int v1[6], v2[6], i, j, n, cont, acerto;
	
	cout << "\nMega Sena ORIGINAL\n";
	for(i=0;i<=5;i++){
		cout << "Numero " << i+1 << ": ";
		cin >> v1[i];
	} 
	system("cls");
	
	cout << "\nQuantos apostadores? ";
	cin >> n;
	
	for(cont=1;cont<=n;cont++){
		acerto=0;
		cout << "\n\n\n\n   Apostador " << cont << endl;
		for(i=0;i<=5;i++){
			cout << "\nSeu " << i+1 << "° numero: ";
			cin >> v2[i];
			for(j=0;j<=5;j++){
				if(v2[i]==v1[j]){
					acerto++;
				}
			}
		}
		if(acerto==4){
			cout << "\nGanhou a quadra!";
		}else if(acerto==5){
			cout << "\nGanhou a quina!";
		}else if(acerto==6){
			cout << "\nGANHOU A MEGA!";
		}else{
			cout << "\nNao ganhou.";
		}
	}
}
