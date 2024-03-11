#include <iostream>
using namespace std;

// Main program
int main()
{
    char op;
    float num1, num2;

    // Meminta pengguna untuk memasukkan operator
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    // Meminta pengguna untuk memasukkan operand
    cout << "Masukkan dua operand: ";
    cin >> num1 >> num2;

    // Switch statement
    switch (op)
    {
        // Jika pengguna memasukkan '+'
        case '+':
            cout << "Hasil penjumlahan: " << num1 + num2 << endl;
            break;
        // Jika pengguna memasukkan '-'
        case '-':
            cout << "Hasil pengurangan: " << num1 - num2 << endl;
            break;
        // Jika pengguna memasukkan '*'
        case '*':
            cout << "Hasil perkalian: " << num1 * num2 << endl;
            break;
        // Jika pengguna memasukkan '/'
        case '/':
            // Memeriksa apakah num2 bukan nol untuk menghindari pembagian dengan nol
            if (num2 != 0)
                cout << "Hasil pembagian: " << num1 / num2 << endl;
            else
                cout << "Error! Pembagian dengan nol tidak diperbolehkan." << endl;
            break;
        // Jika operator tidak sesuai
        default:
            cout << "Error! Operator tidak sesuai." << endl;
    }

    return 0;
}
