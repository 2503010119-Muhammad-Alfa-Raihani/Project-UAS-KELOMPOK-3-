#include "pengembalian.h"

using namespace std;

Pengembalian::Pengembalian(Perpustakaan* p) : perpus(p) {}

void Pengembalian::menuPengembalian() {
    int pilihan;
    
    do {
        cout << "\n=== MENU PENGEMBALIAN ===\n";
        cout << "1. Kembalikan Buku\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();
        
        switch(pilihan) {
            case 1:
                kembalikanBukuMenu();
                break;
        }
    } while(pilihan != 0);
}

void Pengembalian::kembalikanBukuMenu() {
    if(!perpus) {
        cout << "Error: Perpustakaan tidak tersedia!\n";
        return;
    }
    
    int idBuku;
    cout << "\nMasukkan ID Buku yang dikembalikan: ";
    cin >> idBuku;
    
    perpus->kembalikanBuku(idBuku);
}
