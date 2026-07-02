#ifndef PENGEMBALIAN_H
#define PENGEMBALIAN_H

#include <iostream>
#include <string>
#include "perpustakaan.h"

using namespace std;

class Pengembalian {
private:
    Perpustakaan* perpus;

public:
    Pengembalian(Perpustakaan* p = nullptr);
    
    void menuPengembalian();
    void kembalikanBukuMenu();
};

#endif
