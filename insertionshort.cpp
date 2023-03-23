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
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionsort() {                         // Procedure Insertionsort
	
	int temp;                                // Membuat variable data temporer atau penyimpanan sementara
	int j;                                   // Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {           // Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];                   // simpan nilai arr[i] ke variable sementara temp

		j = 1;                     // setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)  // Looping while dimana nilai j lebih besar sama dengan 0 dan
		                                 // arr[j] lebih besar dari pada temp
		{
			arr[j + 1] = arr[j];        // simpan arr[j] ke dalam vaiable arr[j+1]
			j--;                        // decrement nilai j by 1
		}
		 
		arr[j + 1] = temp;         // simpan nilai tep ke dalam arr[j+1]

		cout << "\nStep " << i << ": ";     // Output ke layar
		for (int k = 0; k < n; k++) {       // Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";          // Output ke layar
		}

	}		
}

void display() {     // Procedure display
	cout << endl;      //Output baris kosong
	cout << "\n===============================" << endl;      // Output ke layar
	cout << "Element Array yang telah tersusun" << endl;      // Output ke layar
	cout << "\n===============================" << endl;      // Output ke layar

	for (int j = 0; j < n; j++) {     // Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;       // Output ke layar
	}
	cout << endl;    // Output baris kosong
}

int main() 
{ 
	input();              // Memanggil inputan
	insertionsort();      // Memanggil insertionsort
	display();            // Memanggil display
}
