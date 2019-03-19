#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <string.h>

using namespace std;

struct data {
    long nim;
    char nama[99];
    char jenis_kelamin;
    char jurusan[99];
	float nilai_harian1;
	float nilai_harian2;
	float nilai_harian3;
	float rata;
};


main() {

mulai:

struct data mhs[999], Swap;
int jum, a, s, pil, cari, out;
bool ketemu;


cout<<"--------Menu----------\n";
cout<<" 1. Input data mahasiswa        \n";
cout<<" 2. Tampilkan Data                \n";
cout<<" 3. Search        \n";
cout<<" 4. Exit                \n";
cout<<"----------------------\n";
cout<<"Masukan Pilihan anda[1..4]= ";cin>>pil;
switch (pil) {
case 1:
 cout<<"masukkan jumlah data yang ingin di masukkan : ";cin>>jum;
    a=0;
    for (int i=0; i<jum; i++) {
    a=a+1;
    cout<<"\nMahasiswa ke -"<<a<<endl;
    cout<<"NIM\t\t:";cin>>mhs[i].nim;
    cout<<"Nama\t\t:";cin>>mhs[i].nama;
    cout<<"Jenis kelamin\t:";cin>>mhs[i].jenis_kelamin;
    cout<<"Jurusan\t\t:";cin>>mhs[i].jurusan;
    cout<<"Nilai harian 1\t:";cin>>mhs[i].nilai_harian1;
    cout<<"Nilai harian 2\t:";cin>>mhs[i].nilai_harian2;
    cout<<"Nilai harian 3\t:";cin>>mhs[i].nilai_harian3;
    mhs[i].rata=(mhs[i].nilai_harian1+mhs[i].nilai_harian2+mhs[i].nilai_harian3)/3;
    cout<<"Nilai rata-rata\t:"<<mhs[i].rata;
    cout<<endl;
    }

getch();
goto mulai;
case 2:
    for ( int n=1; n<jum-1; n++) {
        for (int m=0; m<jum-1; m++) {
            if(mhs[m].rata>mhs[m+1].rata)
            {
                Swap = mhs[m];
                mhs[m] = mhs[m+1];
                mhs[m+1] = Swap;

            }
        }
    }

    for (int x=0; x<jum; x++) {
        cout<<"\n";
        cout<<"Rata-Rata\t: "<<mhs[x].rata<<endl;
        cout<<"Nim\t\t: "<<mhs[x].nim<<endl;
        cout<<"Nama\t\t: "<<mhs[x].nama<<endl;
        cout<<"Jenis kelamin\t: "<<mhs[x].jenis_kelamin<<endl;
        cout<<"Jurusan\t\t: "<<mhs[x].jurusan<<endl;
        cout<<"Nilai Harian 1\t: "<<mhs[x].nilai_harian1<<endl;
        cout<<"Nilai Harian 2\t: "<<mhs[x].nilai_harian2<<endl;
        cout<<"Nilai Harian 3\t: "<<mhs[x].nilai_harian3<<endl;
        cout<<"\n";
    }
getch();
goto mulai;
case 3:

cout<<"Data yang dicari = ";
cin >>cari;
ketemu = false;
s=0;
while ((s<10)&(!ketemu))
{
    if (mhs[s].nim==cari)
    ketemu=true;
    else{
    s=s+1;
    }
}
cout<<endl;

if(ketemu){
cout<<"Ditemukan      : "<<cari<<endl;
cout<<"Nim            : "<<mhs[s].nim<<endl;
cout<<"Nama           : "<<mhs[s].nama<<endl;
cout<<"Jenis kelamin  : "<<mhs[s].jenis_kelamin<<endl;
cout<<"Jurusan        : "<<mhs[s].jurusan<<endl;
cout<<"Nilai harian 1 : "<<mhs[s].nilai_harian1<<endl;
cout<<"Nilai harian 2 : "<<mhs[s].nilai_harian2<<endl;
cout<<"Nilai harian 3 : "<<mhs[s].nilai_harian3<<endl;
cout<<"Rata rata      : "<<mhs[s].rata<<endl;
}
else{
cout<<"nim "<<cari<<"tidak ada dalam data";
}

getch();
goto mulai;
case 4:
cout<<"\n";
cout<<"=================================="<<endl;
cout<<"Program di buat oleh Wahyu Putra"<<endl;
cout<<"=================================="<<endl;
cout<<"\n";
cout<<"Anda yakin ingin keluar?? [Y/T] : ";cin>>out;
while (!((out=='Y')||(out=='T'))){
    out=getch ();
    out=toupper(out);
}

getch();
goto mulai;
default: cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar";
getch();
goto mulai;
}


getch();
return 0;
}
