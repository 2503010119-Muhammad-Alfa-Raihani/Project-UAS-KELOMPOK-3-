#ifndef PERPUSTAKAAN_H
#define PERPUSTAKAAN_H

#include <vector>
#include "Buku.h"

using namespace std;

class Perpustakaan {
private:
    vector<Buku> daftarBuku;

public:
    // Kelola Buku
    void tambahBuku();
    void tampilkanBuku();

    // Fitur anggota lain
    void pinjamBuku();
    void kembalikanBuku();
    void cariBuku();
    void rekomendasiBuku();
};

#endif
