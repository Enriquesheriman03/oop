#include <iostream>
#include <string.h>
using namespace std;


struct student {
    string nama, indeks;
    double kehadiran, tugas, kuis, uts, uas, hasil;
};


double nilaiakhir(int i, student mahasiswa[]) { 
    return (mahasiswa[i].kehadiran * 10/100) + (mahasiswa[i].tugas * 20/100) + 
	(mahasiswa[i].kuis *10/100) + (mahasiswa[i].uts * 30/100) + (mahasiswa[i].uas * 30/100);
}
string nilaiakhir(student mahasiswa[], int jml) {
    string ket;
    int max = 0;
    for (int i = 0; i < jml; i++) {
        if (max < mahasiswa[i].hasil) {
            max = mahasiswa[i].hasil;
            
        }
    }
    return ket;

}

int main(){
    const int jumlah_mahasiswa = 10;
    student mahasiswa[jumlah_mahasiswa];
    int i;
    double hasil;
    cout << "Enrique Sheriman" << endl;

    cout << "--------------------------------------------------------------------" << endl;
    cout << " MENGHITUNG NILAI AKHIR(Grading) MAHASISWA TEKNIK INFORMASI UNIVERSITAS UNKLAB " << endl;
    
    cout << endl;

    i = 0;
    do {cout << "\tDATA MAHASISWA NOMOR\t " << i+1 << endl;
        cout << "=====================================" << endl;

        cout << "Masukkan NAMA mahasiswa nomor\t" << i+1 << endl;
        cin >> mahasiswa[i].nama;
        
		cout <<"Masukkan KEHADIRAN dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].kehadiran;
        cout << endl;

        cout << "Masukkan NILAI TUGAS dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].tugas;
        cout << endl;

        cout << "Masukkan NILAI KUIS dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].kuis;
        cout << endl;

        cout << "Masukkan NILAI UTS dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].uts;
        cout << endl;

        cout << "Masukkan NILAI UAS dari " << mahasiswa[i].nama << ": ";
        cin >> mahasiswa[i].uas;
        cout << endl;

        
        cout << "NAMA" << "\t" <<"KEHADIRAN" << "\t"<< "TUGAS" << "\t" << "KUIS" << "\t" << "UTS" << "\t" << "UAS" << "\t" << "NILAI AKHIR" << "\t" << endl;


	mahasiswa[i].hasil = nilaiakhir(i, mahasiswa);
       
	   cout << mahasiswa[i].nama << "\t" << "\t" << mahasiswa[i].kehadiran << "\t" << mahasiswa[i].tugas << "\t" << mahasiswa[i].kuis << "\t" << mahasiswa[i].uts << "\t" << mahasiswa[i].uas << "\t" ;
        printf("%.2f ", mahasiswa[i].hasil);

        if(mahasiswa[i].hasil >= 91){
            cout << " (A) " << endl;
        } else if(mahasiswa[i].hasil >=85){
        	cout << " (-A)" << endl;
		} else if(mahasiswa[i].hasil >=81){
			cout << " (+B)" << endl;
		}
		else if(mahasiswa[i].hasil >= 78){
            cout << " (B) " << endl;
        } else if(mahasiswa[i].hasil >= 75){
            cout << " (-B) " << endl;
        } else if(mahasiswa[i].hasil >= 65){
            cout << " (C) " << endl;
        } else {
            cout << " (D) " << endl;
        }
        
        cout << endl;

        i = i + 1;
    } while (i < jumlah_mahasiswa);
    

   cout << endl;
}
