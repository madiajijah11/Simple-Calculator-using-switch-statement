#include <iostream>
using namespace std;
int main(){
  float luas, keliling, r, d;
  const float phi = 3.14;
  cout << "=====================================\n";
  cout << "Menghitung Luas Lingkaran\n";
  cout << "=====================================\n";
  cout << "Masukan jari - jari lingkaran: ";
  cin >> r;
  luas = phi * r * r; //rumus menghitung luas lingkaran
  cout << "Luas Lingkaran adalah: " << luas << endl;
  cout << "=====================================\n";
  cout << "Menghitung Keliling Lingkaran\n";
  cout << "=====================================\n";
  cout << "Masukan diameter lingkaran: ";
  cin >> d;
  keliling = phi * d; //rumus menghitung keliling lingkaran dengan diameter
  cout << "Keliling Lingkaran adalah: " << keliling << endl;
  return 0;
}