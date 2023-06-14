//Apa itu programming?
/*Program adalah sebuah perintah yang akan dijalankan oleh komputer
  Programming adalah aktivitas seseorang mengetik sebuah perintah untuk dijalankan oleh komputer*/
//Apa itu Library?
/*Library adalah sebuah koleksi yang dapat dipakai oleh bahasa pemrograman komputer/program komputer
  Library itu biasanya berisi kode-kode yang sudah dibuat sebelumnya. jadi tinggal dipanggil saja
  tidak perlu membuat codenya ulang*/  
//Cara menjalankan sebuah program
/*Code yang telah kita ketik akan di compile menjadi bahasa yang dimengerti oleh komputer kita
  Program akan dijalankan oleh komputer
  karena komputer itu hanya mengerti angka 0 dan 1 benar/salah*/
//IPO MODEL
/*Input, Process, Output. Inti dari suatu program ada disini
  contohnya pada kalkulator: ketika kita menginputkan 1+2 kemudian diproses dengan menekan 
  tanda = maka dia akan menghitung kemudian akan mengeluarkan angka 3 sebagai outputnya
  contoh lainnya: saat bertransaksi inputnya saat kita membeli barang menekan tombol buy
  prosesnya dicek dlu apakah uang kita cukup atau apakah stok masih ada outputnya bisa jadi error
  karena stok tidak ada atau uang kita tidak cukup atau outpunya berhasil kita punya uang dan stok
  masih tersedia
*/
//Contoh bahasa pemrograman
//C, C++, Java, Go, Python, Javascript, PHP 

/*-------------------------------------------------------------------------------------------------*/

#include <iostream> 
//#include adalah preprocessor directive pada C++ yang digunakan untuk menyertakan file header ke dalam program. File header adalah file yang berisi deklarasi dan definisi untuk fungsi, kelas, atau objek yang digunakan dalam program.
//Secara umum, #include digunakan untuk memasukkan file header yang dibutuhkan oleh program. File header tersebut dapat berisi deklarasi fungsi, kelas, dan variabel yang dapat digunakan dalam program.
using namespace std; //untuk mempersingkat penulisan kode. biar tidak menuliskan std di setiap baris kode

int main() //blok utama program titik awal jalannya eksekusi program
{
	cout << "Selamat Datang" << endl; //command output perintah output. fungsi dari endl adalah menambahkan enter atau endline
	
	return 0;	
}

