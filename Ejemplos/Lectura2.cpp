#include <iostream>

using namespace std;

int main() {
  // Lee dos numeros hasta el final del archivo
  // 1 1
  // 1 0
  // 0 1
  // 0 0
  //
  // En este caso el programa imprimira las parejas de numeros:
  // 1 1
  // 1 0
  // 0 1
  // 0 0
  int n, m;
  while (cin >> n >> m) {
    cout << n << ' ' << m << '\n';
  }
  return 0;
}
