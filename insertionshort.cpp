#include <iostream>
using namespace std;

int arr[20];   // Membuat array dengan panjang data 20
int n;         // Membuat variable inmputan n

void input() {       //Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";        // Membuat inputan jumlah Element Array
		cin >> n;                                            // Memanggil variable inputan n

		if (n <= 20) {                           // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n";   // Menampilkan pesan jika data lebih ari 20
		}
	}
	cout << endl;                                    // Membuat jarak per baris program
	cout << "======================" << endl;        // Membuat tampilan susunan data element pada array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)   // Menggunakan perulangan for untuk menyimpan data array
	{

	}



}
