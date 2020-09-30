#include <iostream>
using namespace std;

int main() {
	
	float IP;
	char nilai_E;
	
	cout << "Masukkan nilai IP ; ";
	cin >> IP;
	
	if(IP <= 1){
		cout << "Mahasiswa disarankan untuk mengundurkan diri";
	} else if(IP < 2) {
		cout << "Mahasiswa belum lulus TPB";
	} else if (IP >= 2){
		cout << "Apakah ada nilai E ? (y/n) ";
		cin >> nilai_E;
		if (nilai_E == 'n'){
			cout << "Mahasiswa dinyatakan lulus";
		} else if (nilai_E == 'y') {
			cout << "Mahasiswa belum lulus TPB";
		} else {
			cout << "error!";
		}
	}
	
	return 0;
}
