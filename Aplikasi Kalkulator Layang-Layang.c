/* Aplikasi Penghitung Luas Layang-Layang by Al May Nabith Thufail
NRP 5010221007 
Departemen Teknik Sistem dan Industri
Institut Teknologi Sepuluh Nopember
Algoritma dan Pemrograman Komputer (D)*/

#include <stdio.h>

int main () {
    
    float diameter_1,diameter_2;
    
    printf ("Selamat Datang di Program Kalkulator Luas Layang-Layang by Al May Nabith Thufail\n");
    printf ("Pengguna Dapat Memasukkan Nilai Diameter 1 dan Diameter 2 Sebagai Diameter dari Layang-Layang\n\n");
    
    printf ("Masukkan diameter_1 Sebagai Diameter 1 Layang-Layang disini: ");
    scanf ("%f", &diameter_1);
    printf ("Kamu Telah Memasukkan %.3f Sebagai Diameter 1 Layang-Layang\n\n", diameter_1);
    
    printf ("Masukkan diameter_2 sebagai Diameter 2 Layang-Layang disini: ");
    scanf ("%f", &diameter_2);
    printf ("Kamu Telah Memasukkan %.3f Sebagai Diameter 2 Layang-Layang\n\n", diameter_2);
    
    float hasil = ((diameter_1*diameter_2)/2);
    printf ("Hasil dari Perhitungan Luas Layang-Layang Setelah Input Diameter Adalah:  %.3f\n\n", hasil);
    
    printf ("Terima Kasih Sudah Menggunakan Program Kalkulator Layang-Layang by Al May Nabith Thufail");
    return 0;
}