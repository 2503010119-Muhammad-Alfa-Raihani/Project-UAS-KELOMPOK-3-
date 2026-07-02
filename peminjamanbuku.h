#ifndef PERPUSTAKAAN_H
#define PERPUSTAKAAN_H

#include <vector>
#include <string>
#include "Buku.h" 

class Perpustakaan {
private:
    std::vector<Buku> daftarBuku; 

public:A
    
    bool pinjamBuku(int idBuku);     
};

#endif
