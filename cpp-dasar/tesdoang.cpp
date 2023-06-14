#include <iostream>

using namespace std;

int main()
{
	int nilai;
	
	cout << "Masukkan Nilai Ujian: ";
	cin >> nilai;
	
	if (nilai >= 0 && nilai <= 25)
	{
		cout << "Nilai kamu E Ngulang dek!" << endl;
	}
	else if (nilai >=26 && nilai <=45)
	{
		cout << "Nilai kamu D belajar dek!" << endl;
	}
	else if (nilai >=46 && nilai <=67)
	{
		cout << "Nilai kamu C tingkatkan dek!" << endl;
	}
	else if (nilai >=68 && nilai <=79)
	{
		cout << "Nilai kamu B Lumayan dek!" << endl;
	}
	else if (nilai >=80 && nilai <= 90)
	{
		cout << "Nilai kamu A- Nice one!" << endl;
	}
	else if (nilai >= 91 && nilai <= 100)
	{
		cout << "Nilai kamu A Pertahankan!" << endl;
	}
	else {
		cout << "Tolong masukkan nilai yang bener dong!" << endl;
	}
	
	return 0;
}
