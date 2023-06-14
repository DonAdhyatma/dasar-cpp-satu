#include <iostream>
using namespace std;

//struktur perulangan -> fungsi untuk melakukan sesuatu berulang-ulang
//ada 3 struktur perulangan: 1. for, 2. while 3. do-while
int main()
{
	//for untuk melakukan perulangan sebanyak yang kita inginkan
	// ++ merupakan operator increment, digunakan untuk menambah variable sebanyak 1 angka sedangkan -- merupakan operator decrement, digunakan untuk mengurangi variable sebanyak 1 angka. tanda operator tersebut digunakan untuk operasi pada c++ contohnya x++ dan x-- . operator tersebut merupakan penulisan singkat dari x=x+1 dan x=x-1. 
//for biasa
/*	for (int x = 1; x<=9843; x++){
		cout << x << endl;
	}
	*/
//nested for
	
//	for (int x = 1; x <= 5000; x++) {
//		cout << x << ". Andika";
//		for (int y = 1; y <= 1; y++){
//			cout << endl << "   Ulangi kebawah" <<endl;
//	}
//}	
//while sintaks
//int ojad_1un = 10 ;
//int tebak;
//cout << "Coba lu tebak dah berapa angka yang benernya? ";
//while(cin >> tebak){
//	if (ojad_1un == tebak){
//	cout << "Bener coy ";
//	break;
//	} else if(tebak < ojad_1un){
//	  cout << "Angka yang dicari lebih besar dari ini " << tebak << endl;	
//	} else if(tebak > ojad_1un){
//		cout << "Angka yang dicari lebih kecil dari ini " << tebak << endl;
//	}
//}
	
//do while. menjalankan perintah perulangan terlebih dahulu baru meriksa kondisi

int x = 10;
do {
	cout << x << " ";
	x--;
} while(x>=5);

 return 0;	
}
