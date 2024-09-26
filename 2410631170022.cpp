#include <iostream>
#include <string>

using namespace std;

// Deklarasi fungsi
float pokok(int jamKerja);
float lembur(int jamKerja);
int makan(int jamKerja);
int transport(int jamKerja);

int main() {
    string NIP, Nama;
    int jamKerja;

    // Input data karyawan
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore(); // Mengabaikan karakter newline sebelumnya
    getline(cin, Nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Hitung gaji berdasarkan jam kerja
    float gajiPokok = pokok(jamKerja);
    float lemburGaji = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    // Tampilkan hasil perhitungan
    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << Nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Lembur: Rp. " << lemburGaji << endl;
    cout << "Uang Makan: Rp. " << uangMakan << endl;
    cout << "Transport: Rp. " << uangTransport << endl;
    cout << "Total Gaji Harian: Rp. " << (gajiPokok + lemburGaji + uangMakan + uangTransport) << endl;

    return 0;
}

// Fungsi untuk menghitung gaji pokok
float pokok(int jamKerja) {
    const float gajiPerJam = 7500;
    return (jamKerja <= 8) ? jamKerja * gajiPerJam : 8 * gajiPerJam;
}

// Fungsi untuk menghitung lembur
float lembur(int jamKerja) {
    const float gajiPerJam = 7500;
    if (jamKerja > 8) {
        return (jamKerja - 8) * 1.5 * gajiPerJam;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    return (jamKerja >= 9) ? 10000 : 0;
}

// Fungsi untuk menghitung uang transport
int transport(int jamKerja) {
    return (jamKerja >= 10) ? 13000 : 0;
}
