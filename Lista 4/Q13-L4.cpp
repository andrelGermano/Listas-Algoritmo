#include <iostream>
using namespace std;
int main() {
  int n, i, aux, x;
  cout << "\nValor de N: ";
  cin >> n;
  int v[n];
  v[0]=n;
  cout << "\nVetor inicial: " << v[0] << " ";
  for(i=1;i<=n-1;i++){
    v[i]=v[i-1]*2;
    cout << v[i] << " ";
  }
  cout << "\n\nValor de X: ";
  cin >> x;
  cout << "\nVetor final: ";
  for(i=0;i<=n-1;i++){
    if(x==v[i]){
      x=v[i];
      v[0]=x;
    }
  }
  for(i=0;i<=n-1;i++){
    cout << v[i] << " ";
  }
}
