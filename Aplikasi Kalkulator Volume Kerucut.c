/* Aplikasi Penghitung Volume Kerucut by Al May Nabith Thufail
NRP 5010221007 
Departemen Teknik Sistem dan Industri
Institut Teknologi Sepuluh Nopember
Algoritma dan Pemrograman Komputer (D)*/

#include <stdio.h>

int main () {
    
    float jari_jari,tinggi;
    float phi = 3.14;
    
    printf ("Selamat Datang di Program Kalkulator Volume Kerucut by Al May Nabith Thufail\n");
    printf ("Pengguna Dapat Memasukkan Nilai Jari-Jari dan Tinggi dari Kerucut\n\n");
    
    printf ("Masukkan Jari-Jari Sebagai Jari-Jari Kerucut disini: ");
    scanf ("%f", &jari_jari);
    printf ("Kamu Telah Memasukkan %.3f Sebagai Jari-Jari Kerucut\n\n", jari_jari);
    
    printf ("Masukkan Jari-Jari Sebagai Tinggi Kerucut disini: ");
    scanf ("%f", &tinggi);
    printf ("Kamu Telah Memasukkan %.3f Sebagai Tinggi Kerucut\n\n", tinggi);
    
    float hasil = ((phi*(jari_jari*jari_jari)*tinggi)/3);

    printf ("Hasil dari Perhitungan Volume Kerucut Setelah Input Jari-Jari dan Tinggi Kerucut Adalah:  %.3f\n\n", hasil);
    
    printf ("Terima Kasih Sudah Menggunakan Program Kalkulator Volume Kerucut by Al May Nabith Thufail");
    return 0;
}