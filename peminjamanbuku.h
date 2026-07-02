#ifndef PEMINJAMANBUKU_H
#define PEMINJAMANBUKU_H

#include <iostream>
#include <string>
#include "perpustakaan.h"

using namespace std;

class PeminjamanBuku {
private:
    Perpustakaan* perpus;

public:
    PeminjamanBuku(Perpustakaan* p = nullptr);
    
    void menuPeminjaman();
    void pinjamBukuMenu();
    void lihatBukuTersedia();
};

#endif
