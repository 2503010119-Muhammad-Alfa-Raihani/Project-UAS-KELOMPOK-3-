#include <iostream>
#include "Peminjaman.h"
#include "Pengembalian.h"
#include "Pencarian.h"
#include "Rekomendasi.h"

using namespace std;

int main() {

    int pilihan;

    Peminjaman pinjam;
    Pengembalian kembali;
    Pencarian cari;
    Rekomendasi rekomendasi;

    do {

        cout << "\n=== SISTEM PERPUSTAKAAN MODERN ===\n";
        cout << "1. Peminjaman Buku\n";
        cout << "2. Pengembalian Buku\n";
        cout << "3. Pencarian Buku\n";
        cout << "4. Rekomendasi Buku\n";
        cout << "0. Keluar\n";
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                pinjam.pinjamBuku();
                break;

            case 2:
                kembali.kembalikanBuku();
                break;

            case 3:
                cari.cariBuku();
                break;

            case 4:
                rekomendasi.rekomendasiBuku();
                break;

            case 0:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak tersedia.\n";
        }

    } while (pilihan != 0);

    return 0;
}
