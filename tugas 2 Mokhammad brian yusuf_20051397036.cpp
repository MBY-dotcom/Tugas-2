#include<iostream>

using namespace std;

int main()
{
    char nama[20], golongan;
    int jam;
    long gaji, lembur;
 	cout<<"===========================";
    cout<<"\n||      Hitung Gaji      ||";
    cout<<"\n|| Gunakan Huruf Kapital ||";
    cout<<"\n===========================";
    cout<<"\n";
    cout<<"Nama Karyawan  : ";
    cin>>nama;
    cout<<"Golongan       : ";
    cin>>golongan;
    cout<<"Jam Kerja      : ";
    cin>>jam;
 
    switch(golongan)
    {
        case 'A' :
            gaji = 5000;
            lembur = 4000;
        break;
        case 'B' :
            gaji = 7000;
            lembur = 4000;
            break;
        case 'C' :
            gaji = 8000;
            lembur = 4000;
            break;
        case 'D' :
            gaji = 10000;
            lembur = 4000;
            break;
        default :
            cout<<"Golongan Tidak Tersedia!"<<endl;
            gaji = 0;
            lembur = 0;
    }
 
    if(jam > 48)
        gaji += (jam - 48) * lembur;
 
    cout<<"Total Upah     : Rp. "<<gaji<<endl;

    return 0;
}
