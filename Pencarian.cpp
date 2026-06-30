#include "Perpustakaan.h"

void Perpustakaan::tambahBuku(Buku buku) {
    daftarBuku.push_back(buku);
}

vector<Buku> Perpustakaan::cariJudul(string judul) {
    vector<Buku> hasil;

    for (const auto& buku : daftarBuku) {
        if (buku.judul == judul) {
            hasil.push_back(buku);
        }
    }

    return hasil;
}

vector<Buku> Perpustakaan::cariPenulis(string penulis) {
    vector<Buku> hasil;

    for (const auto& buku : daftarBuku) {
        if (buku.penulis == penulis) {
            hasil.push_back(buku);
        }
    }

    return hasil;
}

vector<Buku> Perpustakaan::cariKategori(string kategori) {
    vector<Buku> hasil;

    for (const auto& buku : daftarBuku) {
        if (buku.kategori == kategori) {
            hasil.push_back(buku);
        }
    }

    return hasil;
}
