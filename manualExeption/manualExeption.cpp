#include <iostream>
using namespace std;

int main() 
{
	try {
		cout << "Selamat belajar Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "Pengecualian akan di eksekusi" << endl;
	}
	catch (...) {
		//jika selain int maka blok ini akan di eksekusi
		cout << "default akan di eksekusi" << endl;
	}
	return 0;
}
