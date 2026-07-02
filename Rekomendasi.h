#ifndef REKOMENDASI_H
#define REKOMENDASI_H

#include <string>
#include "perpustakaan.h"

using namespace std;

class Rekomendasi {
private:
    Perpustakaan* perpus;

public:
    Rekomendasi(Perpustakaan* p = nullptr);
    
    void menuRekomendasi();
    void rekomendasiBukuPopuler();
};

#endif
