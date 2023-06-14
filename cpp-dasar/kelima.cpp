#include <iostream>
using namespace std;
//bentuk lain struktur percabangan yaitu switch case
//Switch adalah sebuah kontrol aliran pada bahasa C++ yang digunakan untuk memilih salah satu dari beberapa pernyataan yang akan dijalankan berdasarkan nilai dari suatu variabel yang ditentukan
//pada switch, kita akan membandingkan nilai dari suatu variabel dengan setiap case yang ditentukan. Jika nilai variabel sama dengan salah satu nilai dari case, maka pernyataan yang ditentukan pada case tersebut akan dijalankan. Jika tidak ada case yang cocok dengan nilai variabel, maka pernyataan yang ditentukan pada default akan dijalankan.
//mirip dengan if-else
int main()
{
	int bebek;
	
	cout << "Masukan nilai yang mau diperiksa : " ;
	cin >> bebek;
	
	//switch = alihkan / ganti /pindah
	//break; untuk menghentikan eksekusi. agar tidak menjalankan fungsi dibawahnya (istirahat) 
	
	switch(bebek){
		case 1:
			cout << "Satu" << endl;
			break;
		case 2:
			cout << "Dua" << endl;
			break; 
		case 3:
			cout << "Tiga" << endl;
			break;
		case 4:
			cout << "Empat" << endl;
			break;
		case 5:
			cout << "Lima" << endl;
			break;
		default:
			cout << "Komputer tidak mengenali karakter tersebut" << endl;
			break;	
	}
	
	return 0;
}
