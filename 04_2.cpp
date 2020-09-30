#include <iostream>
using namespace std;

int main() {
	
	int a, b, c;
	
	cout << "Masukkan nilai a : ";
	cin >> a;
	cout << "Masukkan nilai b : ";
	cin >> b;
	cout << "Masukkan nilai c : ";
	cin >> c;
	
	if ( a > c and a > b or a == c or a == b) {
		cout << "Nilai terbesar = " << a;
	} else if ( b > c and b > a or b == c or b == a) {
		cout << "Nilai terbesar = " << b;
	} else if ( c > a and c > b or c == a or c == b) {
		cout << "Nilai terbesar = " << c;
	} else{
		cout << "ERROR";
	}
}
