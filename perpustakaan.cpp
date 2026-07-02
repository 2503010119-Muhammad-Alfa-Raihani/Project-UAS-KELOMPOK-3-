#include <iostream>
#include "perpustakaan.h"

using namespace std;

Perpustakaan::Perpustakaan() {
    jumlahBuku = 0;
    
    // Inisialisasi daftar buku dengan sample data
    daftarBuku[0] = Buku(1, "Cara Jago Ngoding", "Adi Pratama", "Teknologi", 5, 2000);
    daftarBuku[1] = Buku(2, "Cara Tidur Cepat", "Dr. Sleep Well", "Kesehatan", 3, 2000);
    daftarBuku[2] = Buku(3, "Cara Dapat Uang Banyak", "Money Master", "Bisnis", 4, 2000);
    jumlahBuku = 3;
}

void Perpustakaan::menuPerpustakaan() {
    int pilihan;
    
    do {
        cout << "\n=== MENU PERPUSTAKAAN ===\n";
        cout << "1. Lihat Daftar Buku\n";
        cout << "2. Cari Buku\n";
        cout << "0. Kembali\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();
        
        switch(pilihan) {
            case 1:
                tampilkanBuku();
                break;
            case 2:
                cout << "Menu pencarian akan ditambahkan...\n";
                break;
        }
    } while(pilihan != 0);
}

void Perpustakaan::tambahBuku(Buku buku) {
    if(jumlahBuku < MAX_BUKU) {
        daftarBuku[jumlahBuku] = buku;
        jumlahBuku++;
        cout << "Buku '" << buku.getJudul() << "' berhasil ditambahkan!\n";
    } else {
        cout << "Kapasitas buku penuh!\n";
    }
}

void Perpustakaan::tampilkanBuku() {
    if(jumlahBuku == 0) {
        cout << "\nTidak ada buku di perpustakaan.\n";
        return;
    }
    
    cout << "\n========== DAFTAR BUKU ==========\n";
    for(int i = 0; i < jumlahBuku; i++) {
        cout << "\n[Buku ke-" << (i+1) << "]\n";
        daftarBuku[i].tampilkanInfo();
    }
}

void Perpustakaan::lihatBuku() {
    tampilkanBuku();
}

void Perpustakaan::cariJudul(string judul) {
    cout << "\n=== HASIL PENCARIAN JUDUL ===\n";
    bool ketemu = false;
    
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getJudul().find(judul) != string::npos) {
            cout << "\nID       : " << daftarBuku[i].getId() << endl;
            cout << "Judul    : " << daftarBuku[i].getJudul() << endl;
            cout << "Penulis  : " << daftarBuku[i].getPenulis() << endl;
            cout << "Kategori : " << daftarBuku[i].getKategori() << endl;
            cout << "Stok     : " << daftarBuku[i].getStok() << endl;
            ketemu = true;
        }
    }
    
    if(!ketemu) {
        cout << "Buku dengan judul '" << judul << "' tidak ditemukan.\n";
    }
}

void Perpustakaan::cariPenulis(string penulis) {
    cout << "\n=== HASIL PENCARIAN PENULIS ===\n";
    bool ketemu = false;
    
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getPenulis().find(penulis) != string::npos) {
            cout << "\nID       : " << daftarBuku[i].getId() << endl;
            cout << "Judul    : " << daftarBuku[i].getJudul() << endl;
            cout << "Penulis  : " << daftarBuku[i].getPenulis() << endl;
            cout << "Kategori : " << daftarBuku[i].getKategori() << endl;
            cout << "Stok     : " << daftarBuku[i].getStok() << endl;
            ketemu = true;
        }
    }
    
    if(!ketemu) {
        cout << "Buku dengan penulis '" << penulis << "' tidak ditemukan.\n";
    }
}

void Perpustakaan::cariKategori(string kategori) {
    cout << "\n=== HASIL PENCARIAN KATEGORI ===\n";
    bool ketemu = false;
    
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getKategori().find(kategori) != string::npos) {
            cout << "\nID       : " << daftarBuku[i].getId() << endl;
            cout << "Judul    : " << daftarBuku[i].getJudul() << endl;
            cout << "Penulis  : " << daftarBuku[i].getPenulis() << endl;
            cout << "Kategori : " << daftarBuku[i].getKategori() << endl;
            cout << "Stok     : " << daftarBuku[i].getStok() << endl;
            ketemu = true;
        }
    }
    
    if(!ketemu) {
        cout << "Buku dengan kategori '" << kategori << "' tidak ditemukan.\n";
    }
}

bool Perpustakaan::pinjamBuku(int idBuku) {
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getId() == idBuku) {
            if(daftarBuku[i].getStok() > 0) {
                daftarBuku[i].setStok(daftarBuku[i].getStok() - 1);
                cout << "\nBerhasil meminjam: " << daftarBuku[i].getJudul() << endl;
                cout << "Stok tersisa: " << daftarBuku[i].getStok() << endl;
                return true;
            } else {
                cout << "\nMaaf, stok buku '" << daftarBuku[i].getJudul() << "' sedang habis!\n";
                return false;
            }
        }
    }
    cout << "\nBuku dengan ID " << idBuku << " tidak ditemukan!\n";
    return false;
}

bool Perpustakaan::kembalikanBuku(int idBuku) {
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getId() == idBuku) {
            daftarBuku[i].setStok(daftarBuku[i].getStok() + 1);
            cout << "\nBuku '" << daftarBuku[i].getJudul() << "' berhasil dikembalikan!\n";
            cout << "Stok sekarang: " << daftarBuku[i].getStok() << endl;
            return true;
        }
    }
    cout << "\nBuku dengan ID " << idBuku << " tidak ditemukan!\n";
    return false;
}

void Perpustakaan::rekomendasiBuku() {
    cout << "\n=== REKOMENDASI BUKU ===\n";
    cout << "Berikut adalah buku-buku dengan stok tersedia:\n";
    
    bool ada = false;
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getStok() > 0) {
            cout << "\n- " << daftarBuku[i].getJudul() << " oleh " << daftarBuku[i].getPenulis();
            cout << " (Stok: " << daftarBuku[i].getStok() << ")\n";
            ada = true;
        }
    }
    
    if(!ada) {
        cout << "Semua buku sedang habis.\n";
    }
}

Buku* Perpustakaan::getBuku(int index) {
    if(index >= 0 && index < jumlahBuku) {
        return &daftarBuku[index];
    }
    return nullptr;
}

int Perpustakaan::getJumlahBuku() {
    return jumlahBuku;
}

Buku* Perpustakaan::cariBukuById(int id) {
    for(int i = 0; i < jumlahBuku; i++) {
        if(daftarBuku[i].getId() == id) {
            return &daftarBuku[i];
        }
    }
    return nullptr;
}
