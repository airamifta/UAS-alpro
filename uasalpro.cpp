#include <iostream>
using namespace std;

typedef struct data
{
public:
    string nama_pasien,noRm,alamat_tinggal;
    char jk[1];
} Data;

typedef struct desain{
    public:
        void garis(string tipeGaris, int pjg){
            for(int i = 0; i < pjg; i++){
                cout << tipeGaris;
            }
        }
        void beriSpasi(int pjg){
            for(int i = 0; i < pjg; i++){
                cout << " ";
            }
        }
} Desain;


void nama()
{
    Desain desain;

    desain.garis("=-=", 14);
    cout << endl;
    cout << "       Ainur Rahma Miftakhul Rizqi     " << endl;
    cout << "               A11.2022.14579          " << endl;
    desain.garis("=-=", 14);
}
void jalankan()
{
    int jumlah;
    Desain desain;
    nama();
    cout << endl;

    cout << "Jumlah Pasien: ";
    cin >> jumlah;
    Data* pasien = new Data[jumlah];

    for (int i = 0; i < jumlah; i++)
    {
        desain.garis("-", 20);
        cout << endl;
        cout << "Pasien ke (" << i + 1 << ")" << endl;

        cout << "Masukkan No.Rm : ";
        cin.ignore();
        getline(cin, pasien[i].noRm);

        cout << "Masukkan Nama : ";
        // cin.ignore();
        getline(cin, pasien[i].nama_pasien);

        cout << "Masukkan Alamat Tinggal : ";
        // cin.ignore();
        getline(cin, pasien[i].alamat_tinggal);

        cout << "Masukkan Jenis Kelamin: ";
        cin >> pasien[i].jk;
        cin.ignore();
    }
    cout<<endl;

     desain.garis("=-=", 14);
    cout << endl;
    cout << "      Data Pasien     " << endl;
    desain.garis("=-=", 14);

    cout<<endl;

    for (int i = 0; i < jumlah; i++)
    {

        cout << "No.RM          : " << pasien[i].noRm << endl;

        cout << "Nama Pasien    : " <<pasien[i].nama_pasien<<endl;

        cout << "Alamat Tinggal : " << pasien[i].alamat_tinggal<<endl;

        cout << "Jenis Kelamin  : " <<pasien[i].jk <<endl;

        cout << "Alamat Pointer : " << &pasien[i]<<endl;
        cout << endl;
    }
        desain.garis("-", 104);

}

int main()
{

    jalankan();

    return 0;
}
