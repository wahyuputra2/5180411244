#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct data {
 char nama[20];
 char jenis_kelamin[10];
 char alamat[20];
 int kode_pasien;


 char nama_poli[20];
 char alamat_poli[20];
 char nama_dokter[20];
 int kode_poli;

 int tgl[10];

};


int main () {
mulai :
    struct data pas[100];
    int pil, pil_1, pil_2, a, b, c, d, e , f, g, h, j, k, i, l;


        cout<<"-------------------------------------------------------------\n";
        cout<<"\t\t\tMENU\n";
        cout<<"-------------------------------------------------------------\n";
        cout<<"\n1. Data Pasien ";
        cout<<"\n2. Data Poli ";
        cout<<"\n3. Transaksi ";
        cout<<"\n4. keluar \n";
        cout<<"-------------------------------------------------------------\n";
        cout<<"pilih : ";cin>>pil;
    switch(pil) {
    case 1:

        pas :
        system("cls");
        cout<<"----------------------------\n";
        cout<<"\tData Pasien\n";
        cout<<"----------------------------\n";
        cout<<"\n1. input data pasien ";
        cout<<"\n2. tampilkan data pasien ";
        cout<<"\n3. hapus data pasien ";
        cout<<"\n4. ubah data pasien ";
        cout<<"\n0. kembali \n";
        cout<<"-----------------------------\n";
        cout<<"pilih : ";cin>>pil_1;
    switch(pil_1) {
    case 1:
        cout<<"masukkan jumlah data yang akan diinput : ";cin>>a;
        b=0;
        for(int c=0; c<a; c++){
            b=b+1;
            cout<<"pasien ke -"<<b<<endl;
            cout<<"Nama Pasien : "; cin>>pas[c].nama;
            cout<<"Jenis Kelamin : "; cin>>pas[c].jenis_kelamin;
            cout<<"alamat : "; cin>>pas[c].alamat;
            cout<<"Kode pasien : "; cin>>pas[c].kode_pasien;
            cout<<endl;}
            getch();
            goto pas;
    case 2:
        cout<<"0. kembali \n";
        cout<<"-----------------------------------------------------------------------------------------------------------\n";
        cout<<"||\tNO\t||\tKode Pasien\t||\tNama\t||\tJenis kelamin\t||\talamat\t||\n";
        d=0;
        for (int e=0; e<a; e++){
            d=d+1;
            cout<<"-----------------------------------------------------------------------------------------------------------\n";
            cout<<"||\t"<<d<<"\t||";
            cout<<pas[e].kode_pasien<<"\t\t\t||";
            cout<<pas[e].nama<<"\t\t||";
            cout<<pas[e].jenis_kelamin<<"\t\t\t||";
            cout<<pas[e].alamat<<"\t\t||\n";
            }
            cout<<"------------------------------------------------------------------------------------------------------------\n";
            cout<<endl;
            cin>>l;
            goto pas;
            getch();
    case 3:
        cout<<"hapus data ke : ";cin>>f;
        g=f-1;
        c--;
        for( int h=g; h<c; h++)
        {
            pas[h]=pas[h+1];
        }
         a -=1;
         cout<<"data ke-"<<f<<" terhapus";
         cout<<endl;
         getch();
         goto pas;
    case 4:
        cout<<"pilih data yang ingin di ganti : ";cin>>d;
        i=d-1;
        cout<<"Alamat yang baru : ";cin>>pas[i].alamat;

        getch();
        goto pas;
    case 0:
        system("cls");
        goto mulai;
        getch();
    default:
        cout<<"pilihan tidak ada, masukkan pilihan yang ada pada daftar."<<endl;
            getch();
            break;
        }

    case 2:
        do{
        poli :
        system("cls");
        cout<<"----------------------------\n";
        cout<<"\tData Poli\n";
        cout<<"----------------------------\n";
        cout<<"\n1. input data Poli ";
        cout<<"\n2. tampilkan data poli ";
        cout<<"\n3. hapus data poli ";
        cout<<"\n4. ubah data poli ";
        cout<<"\n0. kembali \n";
        cout<<"-----------------------------\n";
        cout<<"pilih : ";cin>>pil_2;
    switch(pil_2) {
    case 1:
        cout<<"masukkan jumlah data yang akan diinput : ";cin>>a;
        b=0;
        for(int c=0; c<a; c++){
            b=b+1;
            cout<<"Poliklinik ke -"<<b<<endl;
            cout<<"Nama Poliklinik : "; cin>>pas[c].nama_poli;
            cout<<"Dokter : "; cin>>pas[c].nama_dokter;
            cout<<"alamat : "; cin>>pas[c].alamat;
            cout<<"Kode Poliklinik : "; cin>>pas[c].kode_poli;
            cout<<endl;}
            getch();
            goto poli;
    case 2:
        cout<<"0. kembali \n";
        cout<<"-----------------------------------------------------------------------------------------------------------\n";
        cout<<"||\tNO\t||\tKode Poliklinik\t||\tNama poliklinik\t||\tDokter\t||\talamat\t||\n";
        d=0;
        for (int e=0; e<a; e++){
            d=d+1;
            cout<<"-----------------------------------------------------------------------------------------------------------\n";
            cout<<"||\t"<<d<<"\t||";
            cout<<pas[e].kode_poli<<"\t\t\t||";
            cout<<pas[e].nama_poli<<"\t\t||";
            cout<<pas[e].nama_dokter<<"\t\t\t||";
            cout<<pas[e].alamat<<"\t\t||\n";
            }
            cout<<"------------------------------------------------------------------------------------------------------------\n";
            cout<<endl;
            cin>>l;
            goto poli;
            getch();
    case 3:
        cout<<"hapus data ke : ";cin>>f;
        g=f-1;
        c--;
        for( int h=g; h<c; h++)
        {
            pas[h]=pas[h+1];
        }
         a -=1;
         cout<<"data ke-"<<f<<" terhapus";
         cout<<endl;
         getch();
         goto poli;
    case 4:
        cout<<"pilih data yang ingin di ganti : ";cin>>d;
        i=d-1;
        cout<<"Dokter pengganti : ";cin>>pas[i].nama_dokter;

        getch();
        goto poli;
    case 0:
        system("cls");
        goto mulai;
        getch();
    default:
        cout<<"pilihan tidak ada, masukkan pilihan yang ada pada daftar."<<endl;
            getch();
            break;
        }
        }while (pil_2!=0);

    }
}

