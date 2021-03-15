#include <iostream>
#include <string.h>
using namespace std;


struct student {
    string nama, indeks;
    double kehadiran,tugas, kuis, uts, uas, hasil;
};


double nilaiakhir(int i, student mahasiswa[]) { 
    return (mahasiswa[i].kehadiran * 0.2) + (mahasiswa[i].tugas * 0.4) + (mahasiswa[i].kuis * 0.3) + (mahasiswa[i].uts * 0.4) + (mahasiswa[i].uas * 0);
}

string nilaitertinggi(student mahasiswa[], int jml) {
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

    cout << "--------------------------------------------------------------------" << endl;
    cout << "\t\t MENGHITUNG NILAI AKHIR \t\t" << endl;
    cout << "\t MAHASISWA TEKNIK INFORMASI UNIVERSITAS UNKLAB \t" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;

    
    i = 0;
    do {
    
        cout << "=====================================" << endl;
        cout << "\tDATA MAHASISWA KE\t " << i+1 << endl;
        cout << "=====================================" << endl;

        

        cout << "Masukkan NAMA mahasiswa ke-" << i+1 << endl;
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

        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "NAMA" << "\t" <<"KEHADIRAN" << "\t"<< "TUGAS" << "\t" << "KUIS" << "\t" << "UTS" << "\t" << "UAS" << "\t" << "NILAI AKHIR" << "\t" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;

       
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
        } else if(mahasiswa[i].hasil >= 40){
            cout << " (D) " << endl;
        } else {
            cout << " (E) " << endl;
        }
        
        cout << endl;

        i = i + 1;
    } while (i < jumlah_mahasiswa);
    

   

    cout << endl;
}
