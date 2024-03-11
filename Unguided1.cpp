#include <iostream>
using namespace std;

// Fungsi(1) untuk menghitung luas persegi panjang
float luas_persegi_panjang(float panjang, float lebar) {
    return panjang * lebar;
}

// Fungsi(2) untuk menghitung luas segitiga
float luas_segitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

int main() {
    float panjang;
    cout << "Masukkan nilai panjang: ";
    cin >> panjang;

    float lebar;
    cout << "Masukkan nilai lebar: ";
    cin >> lebar;

    // Memanggil fungsi untuk menghitung luas persegi panjang
    float luaspj = luas_persegi_panjang(panjang, lebar);

    cout << "Luas persegi panjang adalah " << luaspj << endl;

    float alas_segitiga;
    cout << "Masukkan nilai alas segitiga: ";
    cin >> alas_segitiga;

    float tinggi_segitiga;
    cout << "Masukkan nilai tinggi segitiga: ";
    cin >> tinggi_segitiga;

    // Memanggil fungsi untuk menghitung luas segitiga
    float luassegitiga = luas_segitiga(alas_segitiga, tinggi_segitiga);

    cout << "Luas segitiga adalah " << luassegitiga << endl;

    cout << "Terimakasih sudah menggunakan program ini semoga harimu senin terus" << endl;

    return 0;
}