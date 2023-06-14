#include <iostream>
using namespace std;
//konsep array: array itu mirip seperti variable, tetapi bedanya variable hanya dapat menyimpan satu nilai. sedangkan array dapat menyimpan lebih dari satu nilai
/*

*/
int main()
{
  /*
  string ketikan;
  cout << "Tulis apa yang mau lu tulis: ";
  //Masalah tersebut terjadi karena fungsi cin berhenti membaca setelah menemukan spasi. Untuk mengatasi masalah ini, Anda dapat menggunakan fungsi getline dari (cin)
  //Dengan cara ini, Anda dapat memasukkan string dengan spasi tanpa terputus.
  getline (cin,ketikan);
  cout << endl <<"Hasil ketikan: " << ketikan;
  */
  
  //Array adalah sekumpulan elemen data yang memiliki tipe data yang sama dan memiliki indeks yang berurutan.
  //Dalam C++, variabel array dapat dideklarasikan sebagai berikut:
  //tipedata nama_array[ukuran_array];
  
  //ini sudah menjadi variable array ada tanya kurung kotak
  //[]angka didalam kotak ini menandakan isi maksimumnya ada berapa. indeks array dimulai dari 0
  //int nilai[5];
  //dibawah ini indeks
 /*
  nilai[0] = 78;
  nilai[1] = 82;
  nilai[2] = 90;
  nilai[3] = 87;
  nilai[4] = 92;
  
  cout << nilai[0] << endl;
  cout << nilai[1] << endl;
  cout << nilai[2] << endl;
  cout << nilai[3] << endl;
  cout << nilai[4] << endl;
  */
  //sintaks array diatas masih primitif masih menyusahkan
  
  int nilaisiswa[5] = {80,90,85,75,100};
  
  //cout << nilaisiswa[0];
  
  //ada cara yang lebih mudah untuk menampilkan semua nilai pada array
  //x=x+1 sama saja dengan increment x++ sedangkan x=x-1 sama saja dengan decrement x--
  
  for (int x = 0; x < 5; x++){
  		cout << nilaisiswa[x] << " ";
  }
  return 0;
}
