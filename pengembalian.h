#ifndef BUKU_H
#define BUKU_H

#include <string>
#include <iostream>
using namespace std;

class Buku {
private:
    string idBuku;
    string judul;
    string peminjam;
    bool statusPinjam; // true = dipinjam, false = ada di rak
    int dendaPerHari;

public:
    // Constructor
    Buku(string id, string jdl, int denda = 2000);
    
    // Method
    void pinjam(string nama);
    int kembalikan(int hariTerlambat);
    void tampilkanInfo();
    
    // Getter
    string getId();
    bool isDipinjam();
};

#endif
