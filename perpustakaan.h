#ifndef PERPUSTAKAAN_H
#define PERPUSTAKAAN_H

#include <string>
#include <iostream>
#include "Buku.h"

using namespace std;

#define MAX_BUKU 100

class Perpustakaan {
private:
    Buku daftarBuku[MAX_BUKU];
    int jumlahBuku;

public:
    Perpustakaan();
    
    // Menu
    void menuPerpustakaan();
    
    // Pengelolaan Buku
    void tambahBuku(Buku buku);
    void tampilkanBuku();
    void lihatBuku();
    
    // Pencarian
    void cariJudul(string judul);
    void cariPenulis(string penulis);
    void cariKategori(string kategori);
    
    // Peminjaman & Pengembalian
    bool pinjamBuku(int idBuku);
    bool kembalikanBuku(int idBuku);
    
    // Rekomendasi
    void rekomendasiBuku();
    
    // Getter
    Buku* getBuku(int index);
    int getJumlahBuku();
    Buku* cariBukuById(int id);
};

#endif
