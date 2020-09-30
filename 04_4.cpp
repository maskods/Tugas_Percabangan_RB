#include <iostream>

using namespace std;

int main() {
	string user_in, pass_in;
	string username = "Andi";
	string password = "12345678";
	
	
	cout << "Masukkan Username : ";
	cin >> user_in;
	cout << "Masukkan Password : ";
	cin >> pass_in;
	
	if(user_in == username) {	
		if(pass_in == password) {
		cout << "Login Berhasil";
		} else {
		cout << "Login Gagal";
		}
	} else {
	cout << "Login Gagal";
}
return 0;
}

