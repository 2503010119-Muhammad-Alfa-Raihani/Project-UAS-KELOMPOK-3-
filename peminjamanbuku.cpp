#include "peminjamanbuku.h"
#include <iostream>

using namespace std;

PeminjamanBuku::PeminjamanBuku(Perpustakaan* p) : perpus(p) {}

void PeminjamanBuku::menuPeminjaman() {
    int pilihan;
    
    do {
        cout << "\n=== MENU PEMINJAMAN ===\n";
        cout << "1. Lihat Buku Tersedia\n";
        cout << "2. Pinjam Buku\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();
        
        switch(pilihan) {
            case 1:
                lihatBukuTersedia();
                break;
            case 2:
                pinjamBukuMenu();
                break;
        }
    } while(pilihan != 0);
}

void PeminjamanBuku::lihatBukuTersedia() {
    if(!perpus) {
        cout << "Error: Perpustakaan tidak tersedia!\n";
        return;
    }
    
    cout << "\n=== BUKU TERSEDIA UNTUK DIPINJAM ===\n";
    
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
        cout << "Semua buku sedang habis!\n";
    }
}

void PeminjamanBuku::pinjamBukuMenu() {
    if(!perpus) {
        cout << "Error: Perpustakaan tidak tersedia!\n";
        return;
    }
    
    int idBuku;
    cout << "\nMasukkan ID Buku yang ingin dipinjam: ";
    cin >> idBuku;
    
    perpus->pinjamBuku(idBuku);
}
