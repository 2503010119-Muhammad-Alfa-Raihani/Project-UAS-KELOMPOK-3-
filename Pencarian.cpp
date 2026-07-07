#include "Pencarian.h"

Pencarian::Pencarian(Perpustakaan* p) : perpus(p) {}

void Pencarian::menuPencarian() {
    int pilihan;
    
    do {
        cout << "\n=== MENU PENCARIAN ===\n";
        cout << "1. Cari berdasarkan Judul\n";
        cout << "2. Cari berdasarkan Penulis\n";
        cout << "3. Cari berdasarkan Kategori\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();
        
        switch(pilihan) {
            case 1:
                cariByJudul();
                break;
            case 2:
                cariByPenulis();
                break;
            case 3:
                cariByKategori();
                break;
            case 0:
                cout << "\nKembali ke menu utama...\n";
                break;
            default:
                cout << "\nPilihan tidak valid! Silakan pilih 0-3.\n";
        }
    } while(pilihan != 0);
}

void Pencarian::cariByJudul() {
    if(!perpus) return;
    
    string judul;
    cout << "\nMasukkan judul buku: ";
    getline(cin, judul);
    
    perpus->cariJudul(judul);
}

void Pencarian::cariByPenulis() {
    if(!perpus) return;
    
    string penulis;
    cout << "\nMasukkan nama penulis: ";
    getline(cin, penulis);
    
    perpus->cariPenulis(penulis);
}

void Pencarian::cariByKategori() {
    if(!perpus) return;
    
    string kategori;
    cout << "\nMasukkan kategori: ";
    getline(cin, kategori);
    
    perpus->cariKategori(kategori);
}
