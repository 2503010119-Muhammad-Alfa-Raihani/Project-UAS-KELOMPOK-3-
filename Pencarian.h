#ifndef PERPUSTAKAAN_H
#define PERPUSTAKAAN_H

#include <vector>
#include <string>

using namespace std;

struct Buku {
    string judul;
    string penulis;
    string kategori;
};

class Perpustakaan {
private:
    vector<Buku> daftarBuku;

public:
    void tambahBuku(Buku buku);

    vector<Buku> cariJudul(string judul);
    vector<Buku> cariPenulis(string penulis);
    vector<Buku> cariKategori(string kategori);
};

#endif
