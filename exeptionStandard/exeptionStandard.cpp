#include <iostream>
#include <exception>

//untuk objek exception yg akan digunakan
#include <array>
//untuk objek array akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal program" << endl; //penanda 1
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array int 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan di eksekusi karena array data hanya 
		memiliki 3 element*/
	}
	cout << "Baris program yg terakhir" << endl;
	/*penanda 2: bahwa program bejalan tanpa berhenti
	meskipun terjadi keselahan*/
	return 0;
}

