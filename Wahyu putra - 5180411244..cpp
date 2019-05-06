#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct data {
char nama[10];
char jenis_kelamin;
char alamat;
float no_telp;
float no_ktp;
float id_pasien;
} pas[100];
int j, d ,c;

void input()
{
    cout<<"\njumlah data yang akan dimasukkan : ";cin>>j;
    d=0;
    for (c=0; c<j; c++){
        d=d+1;
        cout<<"data ke-"<<d<<endl;
        cout<<"nama : \t";cin>>pas[c].nama;
        cout<<"jenis kelamin : ";cin>>pas[c].jenis_kelamin;
        cout<<"alamat : \t";cin>>pas[c].alamat;
        cout<<"no telp : \t";cin>>pas[c].no_telp;
        cout<<"no ktp : \t";cin>>pas[c].no_ktp;
        cout<<"id pasien : \t";cin>>pas[c].id_pasien;
        cout<<endl;
    }
}

void lihat()
{
    int p, q;
    cout<<"\n menampilkan data\n\n";
    p=0;
    for (q=0;q<c;q++){
        cout<<"nama : "<<pas[q].nama;
        cout<<"jenis kelamin : "<<pas[q].jenis_kelamin;
        cout<<"alamat : "<<pas[q].alamat;
        cout<<"no telp : "<<pas[q].no_telp;
        cout<<"no ktp : "<<pas[q].no_ktp;
        cout<<"id pasien : "<<pas[q].id_pasien;

    }
}

void hapus()
{
    int x,y;
    cout<<"hapus data ke-";cin>>x;
    y=x-1;
    c--;
    for(int q=y;q<c;q++)
    {
        pas[q]=pas[q+1];
    }
    cout<<"data ke-"<<x<<" terhapus";
}

void edit()
{
    int k, l;
    cout<<"masukkan data yang akan di update : ";cin>>k;
    l=k-1;
        cout<<"nama : "<<pas[l].nama;
        cout<<"jenis kelamin : "<<pas[l].jenis_kelamin;
        cout<<"alamat : "<<pas[l].alamat;
        cout<<"no telp : "<<pas[l].no_telp;
        cout<<"no ktp : "<<pas[l].no_ktp;
        cout<<"id pasien : "<<pas[l].id_pasien;
        lihat();

}

int main () {
int pil;

do { system("cls");
    cout<<"\n1 masukkan data pasien"
        <<"\n2 lihat data pasien"
        <<"\n3 hapus data pasien"
        <<"\n4 edit data pasien"
        <<"\n\n>>pilih : ";cin>>pil;
    switch(pil){
        case 1:
            input();getch();
            break;
        case 2:
            lihat();getch();
            break;
        case 3:
            hapus();getch();
            break;
        case 4:
            edit();getch();
            break;
        default:
            cout<<"pilihan tidak ada, masukkan pilihan yang ada pada daftar."<<endl;
            getch();
            break;
    }
    system("pause");
}while(pil !=4);
}
