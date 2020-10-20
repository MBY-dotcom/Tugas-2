#include <iostream>
#include <cmath>

using namespace std;

main(){
 int pilih, alas, tinggi,sisi1,sisi2,sisi3;
 float luas, sisimiring, keliling;
 char ulang[1];
 menu:
 cout<<"Tugas 3\n";
 cout<<"Menghitung luas, sisi miring dan keliling segitiga\n\n\n";
 cout<<"Pilih Menu Yang Akan Dilakukan\n";
 cout<<"[1]Luas Segitiga\n[2]Sisi miring segitiga\n[3]Keliling segitiga";
 cout<<"\nPilihan : ";cin>>pilih;
 cout<<"\n\n\n";
 if(pilih ==1){
  cout<<"Menghitung Luas Segitiga\n";
  cout<<"Masukkan Alas Segitiga : "; cin>>alas;
  cout<<"Masukkan Tinggi Segitiga : "; cin>>tinggi;
  cout<<"---------------------------------------------\n";
  
  //Memasukkan Rumus Luas Segitiga (1/2*alas*tinggi)
  luas = 0.5*alas*tinggi;
  cout<<"Luas Segitiga : "<<luas;
  }else if(pilih ==2){
  cout<<"Menghitung Sisi Miring Segitiga\n";
  cout<<"Masukkan Alas Segitiga : "; cin>>alas;
  cout<<"Masukkan Tinggi Segitiga : "; cin>>tinggi;
  cout<<"---------------------------------------------\n";
  
  //Memasukkan Rumus sisimiring Segitiga sqrt(alas*alas + tinggi*tinggi)
  sisimiring = sqrt(alas*alas + tinggi*tinggi);
  cout<<"Sisi Miring Segitiga : "<<sisimiring;
 }else if(pilih ==3){
  cout<<"Menghitung Keliling Segitiga\n";
  cout<<"Masukkan Sisi 1 Segitiga : "; cin>>sisi1;
  cout<<"Masukkan Sisi 2 Segitiga : "; cin>>sisi2;
  cout<<"Masukkan Sisi 3 Segitiga : "; cin>>sisi3;
  cout<<"---------------------------------------------\n";
  
  //Memasukkan Rumus keliling Segitiga (sisi1 + sisi2 + sisi3)
  keliling = sisi1+sisi2+sisi3;
  cout<<"Keliling Segitiga : "<<keliling;
 } else{
  cout<<"Maaf, Pilihan Tidak tersedia";
 }
 cout<<"\n\nApakah Ingin Mengulang lagi?(Y/T)"; cin>>ulang;
    goto menu;
 return 0;
}

