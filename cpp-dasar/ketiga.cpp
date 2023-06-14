#include <iostream>

using namespace std;
//Tipe data dan variable

//int tipe data integer diberikan pada variable angka
//ada beberapa tipe data pada C++: 
//short, int, long => untuk bilangan bulat. untuk ukuran penampung datanya dari terkecil ke terbesar
//float, double => untuk bilangan pecahan. untuk ukuran penampung datanya dari kecil ke besar
//char => untuk menyimpan karakter tetapi hanya dapat menyimpan 1 karakter saja. dapat juga menyimpan kode ASCII dari karakter
//bool => logika benar/salah
//string => untuk menyimpan sekumpulan karakter, atau yang dikenal sebagai teks
/*----------------------------------------------------------------------------------------------*/
//variable => sebuah nama yang digunakan untuk menyimpan nilai-nilai yang dapat berubah-ubah selama program berjalan. Setiap variabel dideklarasikan dengan tipe data yang sesuai dan diberikan sebuah nama unik. Nilai yang disimpan dalam variabel dapat diubah selama program berjalan, sehingga memungkinkan program untuk melakukan perhitungan dan logika yang dinamis.

int main()
{
	short angka1 = 80; //tipe data short digunakan untuk menyimpan bilangan bulat dengan ukuran 2 byte (16 bit) dan memiliki batas maksimal yang dapat disimpan sekitar -32,768 hingga 32,767.
	int angka2 = 2147483647; //tipe data int digunakan untuk  menyimpan bilangan bulat dengan ukuran 4 byte (32 bit) dan memiliki batas maksimal yang dapat disimpan sekitar -2,147,483,648 hingga 2,147,483,647.
	long angka3 = 2147483647l; //tipe data long digunakan untuk menyimpan bilangan bulat dengan ukuran 4 byte (32 bit) atau 8 byte (64 bit) dan memiliki batas maksimal yang dapat disimpan sekitar -2,147,483,648 hingga 2,147,483,647 atau -9,223,372,036,854,775,808 hingga 9,223,372,036,854,775,807.
							//tanda "L" pada akhir nilai digunakan untuk menunjukkan bahwa nilai yang ditentukan seharusnya dianggap sebagai tipe data long, bukan int. karena kompiler menganggapnya int jika tidak diberi tanda l
	float angka4 = 8.75f; //tipe data float digunakan untuk menyimpan nilai desimal dengan jumlah angka di belakang koma yang terbatas, dengan ukuran 4 byte (32 bit). dapat menyimpan nilai dari -3.4 x 10^38 hingga +3.4 x 10^38 dengan keakuratan sekitar 7 digit desimal. 
						  //tanda "f" pada akhir nilai digunakan untuk menunjukkan bahwa nilai yang ditentukan seharusnya dianggap sebagai tipe data float, bukan double. karena kompiler menganggapnya double jika tidak diberi tanda f
						  //Ini berguna jika kita memiliki batasan pada penyimpanan yang tersedia, atau jika kita ingin mengontrol tingkat akurasi dengan lebih baik
	double angka5 = 0.0000078; //tipe data double digunakan untuk menyimpan nilai desimal dengan jumlah angka di belakang koma yang lebih banyak dibandingkan dengan tipe float, dengan ukuran 8 byte (64 bit). dapat menyimpan nilai dari -1.7 x 10^308 hingga +1.7 x 10^308 dengan keakuratan sekitar 15 digit desimal. 
	char karakter = 'A'; //cuman bisa nampung 1 nilai karakter
	bool logika = true; // nilainya true dan false doang
	string nama = "Danni Adhyatma"; //string tipe data yang digunakan untuk menyimpan teks atau kumpulan dari karakter.
	
	cout << angka1 << endl;
	cout << angka2 << endl;
	cout << angka3 << endl;
	cout << angka4 << endl;
	cout << angka5 << endl;
	cout << karakter << endl;
	cout << logika << endl;
	cout << nama << endl;
	
	
	return 0;
}
