#ifndef PERPUSTAKAAN_H
#define PERPUSTAKAAN_H

#include <vector>
#include "Buku.h"
using namespace std;

class Perpustakaan {
private:
    vector<Buku> daftarBuku;

public:
    void tambahBuku(Buku buku);
    void tampilkanBuku();

    // Fungsi rekomendasi buku
    void rekomendasiBuku();
};

#endif
