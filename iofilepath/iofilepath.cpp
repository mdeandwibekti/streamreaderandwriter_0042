#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "masukan nama file : ";
	cin >> namafile;

	ofstream outfile;
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}

	outfile.close();
	
	ifstream infile;
	infile.open(namafile + ".txt,ios::in");

	cout << endl << ">= membuka dan membaca file" << endl;

	if (infile.is_open())
	{
		while (getline(infile, baris))
		{
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "Unable to open file";
	return 0;

	
}

	