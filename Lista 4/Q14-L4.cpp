#include <iostream>
using namespace std;
int main() {
  int v[20], i, j=19;
  bool palindromo=true;
  
  for(i=0;i<=19;i++){
    cout << "\nNumero: ";
    cin >> v[i];
  }
  for(i=0;i<=1;i++){
    if(v[i]!=v[j]){
      palindromo=false;
    }
    j--;
  }
  
  if(palindromo==false){
    cout << "\nNao e um palindromo.";
  }else{
    cout << "\nE um palindromo";
  }
}
