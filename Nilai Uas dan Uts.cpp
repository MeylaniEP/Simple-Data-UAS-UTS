#include <iostream>
using namespace std;
//meylani

float uts=0.4;
float uas=0.6;
float hasil;

int main ()
{
	int nilaiuas,nilaiuts;
	string nama,no,kelas,semester;

	cout << "KALKULASI NILAI MAHASISWA\n";
	cout << "\nNama Mahasiswa \t\t\t: ";
	getline(cin,nama);
	cout<< "Nomer Mahasiswa \t\t: ";
	cin>>no;
	cout<< "Kelas Mahasiswa \t\t: ";
	cin>>kelas;
	cout<< "Sedang Menempuh Semester \t: ";
	cin>>semester;
	cout<< "\n======================================\n"<<endl;
	cout <<"Masukan Nilai UTS : ";
	cin>>nilaiuts;
	cout<<"Masukan Nilai UAS : ";
	cin>>nilaiuas;
	
	hasil=(nilaiuts*uts)+(nilaiuas*uas);
	
	cout<<"\n==========================\n"<<endl;
	cout<<"Nama Mahasiswa "<<nama<<" dengan no mahasiswa "<<no<<" kelas "<<kelas<<" telah selesai menempuh semester "<<semester<<" dengan total nilai yang didapat "<<hasil<<endl;
	
}


