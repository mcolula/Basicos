#include <iostream>

using namespace std;

int main() {
  // Lee dos numeros hasta que ambos numeros leidos son cero, por ejemplo:
  // 1 1
  // 1 0
  // 0 1
  // 0 0
  //
  // En este caso el programa imprimira las parejas de numeros:
  // 1 1
  // 1 0
  // 0 1
  //
  int n, m;
  while (cin >> n >> m && (n != 0 || m != 0)) {
    cout << n << ' ' << m << '\n';
  }
  return 0;
}
