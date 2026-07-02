#include "Buku.h"
#include <vector>

int main() {
    vector<Buku> daftarBuku;
    daftarBuku.push_back(Buku("B001", "Laskar Pelangi"));
    daftarBuku.push_back(Buku("B002", "Bumi Manusia"));
    daftarBuku.push_back(Buku("B003", "Negeri 5 Menara"));

    int pilihan;
    do {
        cout << "\n=== SISTEM PENGEMBALIAN BUKU ===\n";
        cout << "1. Tampilkan Semua Buku\n";
        cout << "2. Pinjam Buku\n";
        cout << "3. Kembalikan Buku\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore(); // buang enter

        if (pilihan == 1) {
            cout << "\n--- Daftar Buku ---\n";
            for (auto &b : daftarBuku) {
                b.tampilkanInfo();
            }
        } 
        else if (pilihan == 2) {
            string id, nama;
            cout << "Masukkan ID Buku: "; getline(cin, id);
            cout << "Nama Peminjam: "; getline(cin, nama);
            for (auto &b : daftarBuku) {
                if (b.getId() == id) {
                    b.pinjam(nama);
                    break;
                }
            }
        }
        else if (pilihan == 3) {
            string id;
            int telat;
            cout << "Masukkan ID Buku: "; getline(cin, id);
            cout << "Terlambat berapa hari? "; cin >> telat;
            cin.ignore();
            for (auto &b : daftarBuku) {
                if (b.getId() == id) {
                    b.kembalikan(telat);
                    break;
                }
            }
        }
    } while (pilihan != 0);

    cout << "Terima kasih sudah pakai sistem perpustakaan.\n";
    return 0;
}
