#include <iostream>
#include "perpustakaan.h"
#include "peminjamanbuku.h"
#include "Rekomendasi.h"

using namespace std;

int main() {
    Perpustakaan p;
    PeminjamanBuku pb;
    Rekomendasi r;

    int pilihan;

    do {
        cout << "\n=== SISTEM PERPUSTAKAAN ===\n";
        cout << "1. Kelola Buku\n";
        cout << "2. Peminjaman Buku\n";
        cout << "3. Rekomendasi\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                p.menuPerpustakaan();
                break;

            case 2:
                pb.menuPeminjaman();
                break;

            case 3:
                r.menuRekomendasi();
                break;
        }

    } while(pilihan != 0);

    return 0;
}
