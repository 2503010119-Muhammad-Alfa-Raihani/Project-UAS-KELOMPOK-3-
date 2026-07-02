#include "Rekomendasi.h"

using namespace std;

Rekomendasi::Rekomendasi(Perpustakaan* p) : perpus(p) {}

void Rekomendasi::menuRekomendasi() {
    int pilihan;
    
    do {
        cout << "\n=== MENU REKOMENDASI ===\n";
        cout << "1. Lihat Buku Populer (Stok Tersedia)\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();
        
        switch(pilihan) {
            case 1:
                rekomendasiBukuPopuler();
                break;
            case 0:
                cout << "\nKembali ke menu utama...\n";
                break;
            default:
                cout << "\nPilihan tidak valid! Silakan pilih 0 atau 1.\n";
        }
    } while(pilihan != 0);
}

void Rekomendasi::rekomendasiBukuPopuler() {
    if(!perpus) {
        cout << "Error: Perpustakaan tidak tersedia!\n";
        return;
    }
    
    cout << "\n=== REKOMENDASI BUKU POPULER ===\n";
    
    int jumlah = perpus->getJumlahBuku();
    bool ada = false;
    
    for(int i = 0; i < jumlah; i++) {
        Buku* buku = perpus->getBuku(i);
        if(buku && buku->getStok() > 0) {
            cout << "\nID       : " << buku->getId() << endl;
            cout << "Judul    : " << buku->getJudul() << endl;
            cout << "Penulis  : " << buku->getPenulis() << endl;
            cout << "Kategori : " << buku->getKategori() << endl;
            cout << "Stok     : " << buku->getStok() << endl;
            ada = true;
        }
    }
    
    if(!ada) {
        cout << "Tidak ada buku yang tersedia untuk direkomensasikan.\n";
    }
}
