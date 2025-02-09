#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_SISWA = 100;
    int totalSiswa = 0;

    string nama[MAX_SISWA];
    int nis[MAX_SISWA];   
    int nisn[MAX_SISWA];  
    int nilai_siswa[MAX_SISWA][10];
    int total_nilai[MAX_SISWA];
    double rata_rata[MAX_SISWA];

    string kategori[15] = {
        "Bahasa Indonesia", "Pendidikan Jasmani", "Sejarah", "Mapel Konsentrasi",
        "Basis Data", "Pemrograman Mobile", "Pemrograman Grafis", "Proyek Kreatif",
        "PKWU", "MAPIL", "Sakit", "Izin", "Alpha", "Total Nilai", "Rata-Rata"
    };
/*Entitas bernama Windah barusadar tol cipularang atau hantu batu bara suka mencuri tugas coding orang lain 
sangat berbahaya, karna nilai dari tugas coding sang korban lebih rendah dari pencuri yang satu ini*/
    int jumlahSiswa;
    cout << "=========================================\n";
    cout << "      PROGRAM HITUNG NILAI AKHIR        \n";
    cout << "=========================================\n";
    cout << "MASUKKAN JUMLAH SISWA: ";
    cin >> jumlahSiswa;

    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "\n=========================================\n";
        cout << "        DATA SISWA KE-" << (i + 1) << "\n";
        cout << "=========================================\n";

        cout << "NIS SISWA      : ";
        cin >> nis[totalSiswa];

        cout << "NISN SISWA     : ";
        cin >> nisn[totalSiswa];

        cout << "NAMA SISWA     : ";
        cin.ignore();
        getline(cin, nama[totalSiswa]);

        total_nilai[totalSiswa] = 0;

       
        for (int j = 0; j < 10; j++) {
            cout << "Masukkan nilai " << kategori[j] << " : ";
            cin >> nilai_siswa[totalSiswa][j];
            total_nilai[totalSiswa] += nilai_siswa[totalSiswa][j];
        }

        
        rata_rata[totalSiswa] = total_nilai[totalSiswa] / 10.0;
        totalSiswa++;
    }

// dimas mabar slebew 
    
    cout << "\n=============================================================================================================================================================================\n";
    cout << "| No |    NIS    |    NISN     |        Nama Siswa      | B.Indo | PJOK  | Sejarah | Konsentrasi | Basis Data | Mobile | Grafis | Proyek | PKWU  | MAPIL | Total | Rata-rata |\n";
    cout << "==============================================================================================================================================================================\n";

    for (int i = 0; i < totalSiswa; i++) {
        cout << "| " << setw(2) << (i + 1) << " | "
             << setw(10) << nis[i] << " | "
             << setw(10) << nisn[i] << " | "
             << setw(22) << nama[i] << "|";

        for (int j = 0; j < 10; j++) {
            cout << setw(7) << nilai_siswa[i][j] << " | ";
        }

        cout << setw(5) << total_nilai[i] << " | "
             << setw(9) << fixed << setprecision(2) << rata_rata[i] << " |\n";
    }

    cout << "============================================================================================================================================================================\n";

    cout << "\nTerima kasih telah menggunakan program ini!\n";


}