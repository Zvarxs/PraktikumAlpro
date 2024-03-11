# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center"Ananda Rizky
<p align="center">2311110019</p>

## Dasar Teori
Tipe data merupakan tipe-tipe data yang memiliki fungsi masing-masing dberdasarkan nama dan kegunaan nya di bidang masing-masing. Tipe data berguna agar kompiler dapat mengetahui tipe data apa yang akan di gunakan. Adapun beberapa tipe data adalah sebagai berikut,

## Guided

### 1.Tipe data primitif 
adalah salah satu tipe data yang paling mendasar dalam pemrograman terutama c++. 
macam-macam tipe primitif di antaranya,

- Int : adalah tipe data yang digunakan untuk menyimpan bilangan bulat
seperti 12, 1, 4, dan sebagainya.

- Float : tipe data yang digunakan untuk menyimpan bilangan desimal
seperti 1.5, 2.1, 3.14, dan sebagainya.

- Char : berfungsi untuk menyimpan data berupa sebuah huruf. Biasanya berupa gabungan huruf(kata).

- Boolean : tipe data ini digunakan untuk menyimpan nilai boolean yang
hanya memiliki dua nilai yaitu true dan false atau 1 & 0.

### 2. Tipe data absrak
Tipe data abstrak merupakan tipe data yang di buat atau di ciptakan programer itu sendiri yang mana di dalam nya banyak tipe data dan beragam,yang di ciptakan oleh si programer itu sedndiri.

### 3. Tipe data koleksi 
Tipe data koleksi merupakan tipe data yang di gunakan untuk menyimpan beberapa atau banyak objek dan nilai secara bersamaan.beberapa contoh nya adalah sebagai berikut,

- Array -> Array adalah tipe terstruktur yang mempunyai komponen dalam jumlah
yang tetap dan setiap komponen mempunyai tipe data yang sama. Posisi masingmasing komponen dalam array dinyatakan sebagai nomor index
- Vector -> adalah Standard Template Library (STL) jika di dalam
C/C++ memiliki bentuk std::vector . Umumnya, vector mirip seperti array
yang memiliki kemampuan untuk menyimpan data dalam bentuk
elemen-elemen yang alokasi memorinya dilakukan otomatis dan
bersebelahan
- Map -> data map adalah data yang seperti kamus yang mana di dalamnya terdapat kata, yang setiap kata memiliki definisi atau daftar alamat dimana setiap nama memiliki daftar yang terkait.

# Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas.
c++
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


### output 
![prak1](https://github.com/Zvarxs/PraktikumAlpro/assets/162097128/8a1746c0-8c54-4e55-9b14-e7791fc59a9d)

//// penjelasan 
program di atas suda menggunakan 2 fungsi yaitu luas segitiga dan luas persigi panjang
yang mana saya menggunakan tipe data float untuk dapat menampilkan output yang memiliki
nilai desimal yang dapat di akses di dalam input.

//// kesimpulan
Tipe data primitif sendiri merupakan tipe data yang sudah ditentukan oleh sistem, tipe data
primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada
jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada
bahasa pemrograman,compiler dan sistem operasinya yang mana setiap tipe data memiliki fungsi yang
berbeda-beda

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya
 c++
/// CONTOH PROGRAM 

#include <stdio.h>

//Struct

struct Mahasiswa

{
const char *name;
const char *address;
int age;
};

int main()
{
// menggunakan struct

struct Mahasiswa mhs1, mhs2;

// mengisi nilai ke struct

mhs1.name = "Anto";

mhs1.address = "Surakarta";

mhs1.age = 19;

mhs2.name = "Adit";

mhs2.address = "Majenang";

mhs2.age = 18;

// mencetak isi struct

printf("## Mahasiswa 1 ##\n");

printf("Nama: %s\n", mhs1.name);

printf("Alamat: %s\n", mhs1.address);

printf("Umur: %d\n", mhs1.age);

printf("## Mahasiswa 2 ##\n");

printf("Nama: %s\n", mhs2.name);

printf("Alamat: %s\n", mhs2.address);

printf("Umur: %d\n", mhs2.age);

return 0;
}



### output 
![prak2](https://github.com/Zvarxs/PraktikumAlpro/assets/162097128/3f4d15cf-0728-49a3-ab5b-2063048a75ee)>

#### Penjelasan 
- Class adalah salah satu dari konsep OOP yang digunakan untuk membungkus data abstraksi procedural 
sebagai deskripsi tergeneralisir atau rancangan dari sebuah object untuk mendefinisikan atau 
menggambarkan isi dan tingkah laku sebagai entitas dari object.
Secara detail Class memungkinkan pengembang untuk mengelompokkan data bersama-sama dengan operasi-
operasi yang beroperasi pada data tersebut juga membantu dalam menyembunyikan rincian implementasi 
dari pengguna kelas, sehingga hanya antarmuka publik yang dapat diakses oleh pengguna. Lalu class 
menyediakan tingkat abstraksi di mana detail implementasi dari sebuah objek dapat disembunyikan 
dari pengguna. Pengguna hanya perlu mengetahui bagaimana menggunakan antarmuka publik yang 
disediakan oleh class, tanpa perlu memahami detail bagaimana operasi-operasi tersebut 
diimplementasikan di dalam class juga abstraksi memungkinkan pemisahan antara bagaimana sesuatu 
dilakukan dan apa yang dilakukan, yang memungkinkan pengembang untuk fokus pada fungsionalitas yang
ingin dicapai daripada detail implementasi.

- Struct dalam pemrograman C++, adalah sekumpulan data yang dikelompokkan ke dalam sebuah “tabel”
yang memiliki elemen-elemen (atau field-field seperti dalam database) yang saling terkait. Selain 
itu struck juga dapat digunakan untuk membuat tipe data baru yang sesuai dengan kebutuhan. Ini 
memungkinkan untuk membuat entitas yang sesuai dengan domain spesifik, sehingga mempermudah 
pengelolaan dan manipulasi data dalam program.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

 c++
#include <map>

int main() {

    // Membuat map untuk menyimpan nilai mahasiswa

    map<string, int> nilai;

    // Menambahkan nilai mahasiswa ke dalam map
    nilai["Ari"] = 79;
    nilai["Pari"] = 90;
    nilai["Kanto"] = 77;

    // untuk Menampilkan nilai mahasiswa
    cout << "Nilai Mahasiswa: " << endl;
    for (const auto& pair : nilai) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Menambahkan nilai mahasiswa lainnya
    nilai["Pohu"] = 87;
    nilai["Heseh"] = 92;

    // untul Mengakses nilai mahasiswa
    string nama;
    cout << "\nMasukkan nama mahasiswa: ";
    cin >> nama;

    if (nilai.find(nama) != nilai.end()) {
        cout << "Nilai " << nama << ": " << nilai[nama] << endl;
    } else {
        cout << "Mahasiswa dengan nama " << nama << " tidak ditemukan." << endl;
    }

    return 0;
}

### output 

![prak3](https://github.com/Zvarxs/PraktikumAlpro/assets/162097128/9045aae6-0027-4818-8da7-59de648648bb)>




### Penjelasan
- Array merupakan struktur data linier yang terdiri dari kumpulan elemen dengan tipe 
data yang sama, yang diindeks oleh bilangan bulat. Array digunakan untuk menyimpan 
kumpulan data dengan urutan tertentu dan akses ke elemen-elemennya dilakukan melalui 
indeks. Sedangkan map merupakan struktur data yang berfungsi sebagai associative 
array, di mana setiap elemen memiliki pasangan kunci-nilai. Kunci (key) dapat berupa 
tipe data apa pun (biasanya bilangan bulat atau string), sedangkan nilai (value) 
juga dapat berupa tipe data apa pun. Map digunakan untuk menyimpan pasangan kunci-
nilai yang tidak memiliki urutan tertentu, dan akses ke nilai-nilainya dilakukan 
berdasarkan kunci-kunci yang unik.


## Kesimpulan
Dari modul tipe data, intinya adalah kita harus paham jenis data apa yang bisa dimasukkan dan digunakan dalam program. Ada data angka (bilangan bulat, desimal), teks, dan juga data yang cuma bisa jadi benar atau salah (boolean). Pemilihan jenis data yang pas bisa bantu program jadi lebih cepat dan hemat memori. Juga, kita perlu tahu cara ubah jenis data kalau diperlukan, serta cara kerja data yang diatur dalam kelompok-kelompok seperti list atau array. Dengan paham tentang tipe data, program bisa jadi lebih efisien dan hasilnya lebih akurat.

## Referensi
https://jurnalmms.web.id/cpluscplus/tipe-data-dalam-cplusplus/