#include <iostream>
using namespace std;

int main() {
	float TC, F, R, K;
	
	cout << "Masukkan suhu TC : ";
	cin >> TC;
	
	F = (TC * 9 / 5) + 32;
	R = TC * 4 / 5;
	K = TC + 273;
	
	cout << "Konversi TC ke Fahrenheit = " << F << " Derajat" << endl;
	cout << "Konversi TC ke Reamur = " << R << " Derajat" << endl;
	cout << "Konversi TC ke Kelvin = " << K << " Derajat" << endl;
	
	return 0;
}
