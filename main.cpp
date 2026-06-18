#include <iostream>
#include "Perpustakaan.h"

using namespace std;

int main() {

    Perpustakaan p;
    int pilihan;

    do {

        cout << "\n=== SISTEM PERPUSTAKAAN MODERN ===\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Tampilkan Buku\n";
        cout << "3. Peminjaman Buku\n";
        cout << "4. Pengembalian Buku\n";
        cout << "5. Pencarian Buku\n";
        cout << "6. Rekomendasi Buku\n";
        cout << "0. Keluar\n";
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                p.tambahBuku();
                break;

            case 2:
                p.tampilkanBuku();
                break;

            case 3:
                p.pinjamBuku();
                break;

            case 4:
                p.kembalikanBuku();
                break;

            case 5:
                p.cariBuku();
                break;

            case 6:
                p.rekomendasiBuku();
                break;

            case 0:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 0);

    return 0;
}
