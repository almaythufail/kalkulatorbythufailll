/* Aplikasi Kalkulator Volume Kerucut by Al May Nabith Thufail
NRP 5010221007
Departemen Teknik Sistem dan Industri
Institut Teknologi Sepuluh Nopember
Algoritma dan Pemrograman Komputer (D)*/

#include <stdio.h>

int main () {
    
    float jari_jari,tinggi;
    
    printf ("Selamat Datang di Program Kalkulator Volume Kerucut by Al May Nabith Thufail\n");
    printf ("Pengguna Dapat Memasukkan Nilai Jari-Jari dan Tinggi Sebagai Volume dari Kerucut\n\n");
    
    printf ("Masukkan Jari-Jari Sebagai Jari-Jari Kerucut disini: ");
    scanf ("%f", &jari_jari);
    printf ("Kamu Telah Memasukkan %.3f Sebagai Jari-Jari Kerucut\n\n", jari_jari);
    
    printf ("Masukkan Tinggi sebagai Tinggi Kerucut disini: ");
    scanf ("%f", &tinggi);
    printf ("Kamu Telah Memasukkan %.3f Sebagai Tinggi Kerucut\n\n", tinggi);
    
    float phi = (3.14);
    float hasil = ((phi*jari_jari*jari_jari*tinggi)/3);
    printf ("Hasil dari Perhitungan Volume Kerucut Setelah Input Jari-Jari dan Tinggi Adalah: %.3f", hasil);
   
    return 0;
}
