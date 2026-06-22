#include "Perpustakaan.h"
#include <iostream>

bool Perpustakaan::pinjamBuku(int idBuku) {
    for (size_t i = 0; i < daftarBuku.size(); i++) {
        if (daftarBuku[i].getId() == idBuku) {
            if (daftarBuku[i].getStok() > 0) {
                
                int stokSekarang = daftarBuku[i].getStok();
                daftarBuku[i].setStok(stokSekarang - 1);
                
                std::cout << "Berhasil meminjam buku: " << daftarBuku[i].getJudul() << "\n";
                return true;
            } else {
                std::cout << "Maaf, stok buku '" << daftarBuku[i].getJudul() << "' sedang habis!\n";
                return false;
            
        }
    }
    std::cout << "Buku dengan ID " << idBuku << " tidak ditemukan.\n";
    return false;
}
