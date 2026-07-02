#ifndef PENCARIAN_H
#define PENCARIAN_H

#include <string>
#include "perpustakaan.h"

using namespace std;

class Pencarian {
private:
    Perpustakaan* perpus;

public:
    Pencarian(Perpustakaan* p = nullptr);
    
    void menuPencarian();
    void cariByJudul();
    void cariByPenulis();
    void cariByKategori();
};

#endif
