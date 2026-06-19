#include "Perpustakaan.h"
#include <iostream>
using namespace std;

void Perpustakaan::tambahBuku(Buku buku) {
    daftarBuku.push_back(buku);
}

void Perpustakaan::tampilkanBuku() {
    for (int i = 0; i < daftarBuku.size(); i++) {
        cout << "Judul : " << daftarBuku[i].getJudul() << endl;
        cout << "Penulis : " << daftarBuku[i].getPenulis() << endl;
        cout << "Kategori : " << daftarBuku[i].getKategori() << endl;
        cout << "Stok : " << daftarBuku[i].getStok() << endl;
        cout << "======================" << endl;
    }
}

void Perpustakaan::rekomendasiBuku() {
    cout << "\n=== REKOMENDASI BUKU ===\n";

    bool ada = false;

    for (int i = 0; i < daftarBuku.size(); i++) {
        if (daftarBuku[i].getStok() > 0) {
            cout << "Judul : " << daftarBuku[i].getJudul() << endl;
            cout << "Penulis : " << daftarBuku[i].getPenulis() << endl;
            cout << "Kategori : " << daftarBuku[i].getKategori() << endl;
            cout << "Stok : " << daftarBuku[i].getStok() << endl;
            cout << "----------------------" << endl;
            ada = true;
        }
    }

    if (!ada) {
        cout << "Tidak ada buku yang direkomendasikan." << endl;
    }
}
