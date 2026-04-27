#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2;

public:
    void inputData() {
        cout << "Masukkan diagonal 1 layang-layang: ";
        cin >> d1;
        cout << "Masukkan diagonal 2 layang-layang: ";
        cin >> d2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
};

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void inputData() {
        cout << "Masukkan diagonal 1 belah ketupat: ";
        cin >> d1;
        cout << "Masukkan diagonal 2 belah ketupat: ";
        cin >> d2;
        cout << "Masukkan sisi belah ketupat: ";
        cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }
};

void tampilkanKeliling(BelahKetupat &bk) {
    cout << "Keliling Belah Ketupat : " << bk.hitungKeliling() << endl;
}

int main() {
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;

    // input data
    ObjectLayang.inputData();
    ObjectBelah.inputData();

    cout << "\n--- Hasil Luas ---" << endl;
    cout << "Luas Layang-Layang : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat : " << ObjectBelah.hitungLuas() << endl;

    cout << "\n--- Keliling ---" << endl;
    tampilkanKeliling(ObjectBelah);

    return 0;
}