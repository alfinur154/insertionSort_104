#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << " Masukkan jumlah data pada array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "\nArray yang anda masukkan maksimal 20 element. \n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukkan Element Aray" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}

}


	
	
