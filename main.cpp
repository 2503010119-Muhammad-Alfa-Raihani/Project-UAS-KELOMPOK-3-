#include <iostream>
#include "perpustakaan.h"
#include "peminjamanbuku.h"
#include "Rekomendasi.h"
#include "Pencarian.h"
#include "pengembalian.h"

using namespace std;

int main() {
    Perpustakaan perpus;
    PeminjamanBuku pb(&perpus);
    Rekomendasi r(&perpus);
    Pencarian pc(&perpus);
    Pengembalian pg(&perpus);

    int pilihan;

    do {
        cout << "\n============================================\n";
        cout << "     SISTEM MANAJEMEN PERPUSTAKAAN MODERN\n";
        cout << "============================================\n";
        cout << "1. Kelola Buku\n";
        cout << "2. Peminjaman Buku\n";
        cout << "3. Pengembalian Buku\n";
        cout << "4. Pencarian Buku\n";
        cout << "5. Rekomendasi Buku\n";
        cout << "0. Keluar\n";
        cout << "============================================\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch(pilihan) {
            case 1:
                perpus.menuPerpustakaan();
                break;

            case 2:
                pb.menuPeminjaman();
                break;
                
            case 3:
                pg.menuPengembalian();
                break;
                
            case 4:
                pc.menuPencarian();
                break;

            case 5:
                r.menuRekomendasi();
                break;
                
            case 0:
                cout << "\nTerima kasih telah menggunakan sistem perpustakaan!\n";
                break;
                
            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while(pilihan != 0);

    return 0;
}
