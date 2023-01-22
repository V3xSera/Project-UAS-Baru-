#include <iostream>
#include <conio.h>
using namespace std;
struct Cars // Data Mobil
{
    string brand[5] = {"Hyundai", "BMW", "Mercedes", "Audi", "Toyota"};
    string model[5] = {"Stargazer", "X5", "BenzC200", "A3", "Corolla"};
    string warna[5] = {"Merah", "Hitam", "Biru", "Putih", "Kuning"};
    int harga[5] = {84000, 62500, 800000, 67000, 47000};
    int tahun[5] = {2022, 1999, 1993, 1997, 1966};
};
struct userinfo
{
    string kartu[5];
    string expire[5];
    int cvv[5];
    string nama[5];
    int postal[5];
    string alamat[5];
    int nominal[5];
};

Cars mobil;        // deklarasi mobil
userinfo datadiri; // deklarasi data diri
void Menu()
{

    int nomor = 1;
    int array = 0;
    do
    {
        cout << "\t\t\t\t";
        cout << "Enter " << nomor << "\t- To Select  " << mobil.brand[array] << endl;
        nomor++;
        array++;
    } while (nomor <= 5);
}

void Detail(int Pilihan)
{
    system("Cls");
    cout << "\n\n\n\t\t\t=============================\n";
    cout << "\t\t\tKamu Telah Memilih - " << mobil.brand[Pilihan - 1] << endl;
    cout << "\t\t\t=============================\n\n\n";
    cout << "\t\t\tModel : " << mobil.tahun[Pilihan - 1] << "\t" << mobil.brand[Pilihan - 1] << "\t" << mobil.model[Pilihan - 1] << endl;
    cout << "\t\t\tWarna : " << mobil.warna[Pilihan - 1] << endl;
    cout << "\t\t\tHarga : Rp. " << mobil.harga[Pilihan - 1] << " / Jam " << endl;
}

void check(int a, int jam)
{
    system("cls");
    if (datadiri.nominal[a] >= mobil.harga[a] * jam)
        cout << "\n\n\n\t\t\tProcess Berhasil !!! " << endl;
    else
        cout << "\n\n\n\t\t\tProses Gagal " << endl;
}

void debit(int Pilihan) // Metode Pembayaran Kredit
{
    int jam;
    cout << "\n\n\n\t\t\tMasukan Berapa Lama Anda Ingin Merental (Dalam Jam) : ";
    cin >> jam;
    cout << "\t\t\tTotal Yang Harus Di Bayar Adalah : Rp. " << mobil.harga[Pilihan - 1] * jam << endl;
    _getch();
    system("cls");
    int a = Pilihan - 1;
    cout << "\t\t\t==============================================" << endl;
    cout << "\t\t\t=     Pembayaran Menggunakan Kartu Debit     =" << endl;
    cout << "\t\t\t==============================================" << endl;
    cout << "\t\t\tMasukan Nomor Debit : ";
    cin >> datadiri.kartu[a];
    cout << "\t\t\tMasukan Tanggal Kadaluarsa Kartu MM / YY : ";
    cin >> datadiri.expire[a];
    cout << "\t\t\tMasukan CVV anda : ";
    cin >> datadiri.cvv[a];
    cout << "\t\t\tNama di Kartu : ";
    cin >> datadiri.nama[a];
    cout << "\t\t\tPostal Code : ";
    cin >> datadiri.postal[a];
    cout << "\t\t\tAlamat : ";
    cin >> datadiri.alamat[a];
    cout << "\t\t\tMasukan Nominal Yang Akan Dibayar : Rp. ";
    cin >> datadiri.nominal[a];
    check(a, jam);
}

void kredit(int Pilihan) // Metode Pembayaran Kredit
{
    system("cls");
    int jam;
    int a = Pilihan - 1;
    cout << "\n\n\n\t\t\tMasukan Berapa Lama Anda Ingin Merental (Dalam Jam) : ";
    cin >> jam;
    cout << "\t\t\tTotal Yang Harus Di Bayar Adalah : Rp. " << mobil.harga[Pilihan - 1] * jam << endl;
    _getch();
    cout << "\t\t\t===============================================" << std::endl;
    cout << "\t\t\t=     Pembayaran Menggunakan Kartu Kredit     =" << std::endl;
    cout << "\t\t\t===============================================" << std::endl;
    cout << "\t\t\tMasukan Nomor Kartu : ";
    cin >> datadiri.kartu[a];
    cout << "\t\t\tMasukan Tanggal Kadaluarsa Kartu MM / YY : ";
    cin >> datadiri.expire[a];
    cout << "\t\t\tMasukan CVV anda : ";
    cin >> datadiri.cvv[a];
    cout << "\t\t\tNama di Kartu : ";
    cin >> datadiri.nama[a];
    cout << "\t\t\tPostal Code : ";
    cin >> datadiri.postal[a];
    cout << "\t\t\tAlamat : ";
    cin >> datadiri.alamat[a];
    cout << "\t\t\tMasukan Nominal Yang Akan Dibayar : Rp. ";
    cin >> datadiri.nominal[a];
    check(a, jam);
}

int login() // Login Menu
{
    string pass;
    char ch;
    cout << "\n\n\n\n\n\n\n\t\t\t\t\t=====================================";
    cout << "\n\t\t\t\t\t=     Rental Mobil Login System     =";
    cout << "\n\t\t\t\t\t=====================================";
    cout << "\n\n\n\n\n\t\t\t\t\t     Masukan Password: ";
    ch = _getch();
    while (ch != 13) // char 13 adalah ENTER
    {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (pass == "ifnuganteng123")
    {
        cout << "\n\n\n\n\t\t\t\t\t  Akses Didapatkan ! Selamat Datang \n\n";
        system("PAUSE");
        system("CLS");
    }
    else
    {
        cout << "\n\n\n\n\t\t\t\t\tAkses Ditolak ...Silahkan Coba Lagi !!\n";
        system("PAUSE");
        system("CLS");
        login();
    }
    return 0;
}

int main() // Main Program
{
    login();
    string pilih;
MENUU:
    cout << "\t\t\t\t==========================================================" << endl;
    cout << "\t\t\t\t=              Rental Mobil Pt. Surya Abadi              =" << endl;
    cout << "\t\t\t\t==========================================================" << endl;
    while (pilih != "Exit")
    {
        Menu();
        cout << "\n\n\n\t\t\t\tPilihan Mu : ";
        int Pilihan, mP;
        string data, metode;
        cin >> Pilihan;
        Detail(Pilihan);
        cout << "\n\n\n\t\t\tApakah Kamu Yakin Ingin Rental Mobil Ini ? ( Ya / Tidak / Exit ) ";
        cin >> pilih;
        if (pilih == "Ya" && "ya")
        {

            system("cls");
            cout << "\n\n\n\t\t\t============================\n";
            cout << "\t\t\tPilih Metode Pembayaran\n";
            cout << "\t\t\t============================\n\n\n";
            cout << "\t\t\t1. Debit\n";
            cout << "\t\t\t2. Kredit\n";
            cout << "\n\t\t\tPilihan : ";
            cin >> mP;
            if (mP == 1)
            {
                debit(Pilihan);
                cout << "\n\n\n\t\t\tLanjutkan ? ( Ya / Tidak ) : ";
                cin >> metode;
                if (metode == "Tidak")
                {
                    break;
                }
                else
                {
                    system("cls");
                    goto MENUU;
                }
                system("cls");
            }
            else if (mP == 2)
            {
                kredit(Pilihan);
                cout << "\n\n\n\t\t\tLanjutkan ? ( Ya / Tidak ) : ";
                cin >> metode;
                if (metode == "Tidak")
                {
                    break;
                }
                else
                {
                    system("cls");
                    goto MENUU;
                }
                system("cls");
            }
        }

        else
        {
            if (pilih == "Tidak")
            {
                system("cls");
                continue;
            }
            else if (pilih == "exit")
            {
                system("CLS");
                cout << "\n\n\n\t\t\tDibuat Oleh Maulana Ifnu Syafi";
                break;
            }
        }
    }
}
