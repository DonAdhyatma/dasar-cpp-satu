#include <iostream>
using namespace std;
//struktur percabangan if else 
//If-else adalah sebuah kontrol aliran pada bahasa C++ yang digunakan untuk mengeksekusi suatu pernyataan atau blok pernyataan berdasarkan kondisi yang ditentukan. Jika kondisi tersebut bernilai benar (true), maka pernyataan atau blok pernyataan yang ditentukan dalam if akan dijalankan. Jika kondisi tersebut bernilai salah (false), maka pernyataan atau blok pernyataan yang ditentukan dalam else akan dijalankan.
//Kondisi dalam if-else bisa berupa suatu ekspresi yang menghasilkan nilai true atau false, seperti perbandingan antar variabel, atau suatu ekspresi logika.
/*
if (kondisi)
*/
int main()
{
	//contoh sintaks inisialisasi seperti dibawah ini
	//int nilai = 10;
	int nilai;
	cout << "Masukkan nilai ujianmu : ";
	cin >> nilai;
	//kasus 1 if
	/*
	if (nilai >=75){
		cout << "Kamu lulus" << endl;
	}
	*/
	//kasus 2 if dan else
	/*
	if (nilai >= 75){
		cout << "Kamu lulus" << endl;
	}
	else {
		cout << "Kamu Ngulang" << endl;
	}
	*/
	//kasus 3 menggunakan if else if 
	
	if (nilai >=0 && nilai <= 25) {
		cout << "Nilai kamu E blok!" << endl;
	} else if (nilai >= 26 && nilai <= 40) {
		cout << "Nilai kamu D banyak belajar!" << endl;
	}
	else if (nilai >= 41 && nilai <= 65){
		cout << "Nilai kamu C tingkatkan lagi!" << endl;
	}
	else if (nilai >= 66 && nilai <= 73){
		cout << "Nilai kamu B Oke lah" << endl;
	}
	else if (nilai >= 74 && nilai <= 79){
		cout << "Nilai kamu A- Dikit lagi A" << endl;
	}
	else if (nilai >= 80 && nilai <= 100){
		cout << "Nilai kamu A Selamat!" << endl;
	}
	else {
		cout << "Masukkan angka yang bener dong!" << endl;
	} 
	return 0;
}
