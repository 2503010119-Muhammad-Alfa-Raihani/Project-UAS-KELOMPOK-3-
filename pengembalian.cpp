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
            case 0:
                cout << "\nKembali ke menu utama...\n";
                break;
            default:
                cout << "\nPilihan tidak valid! Silakan pilih 0 atau 1.\n";
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
