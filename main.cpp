#include <iostream>
#include <conio.h>
using namespace std;

struct Cars // ! Data Mobil
{
    string brand[5] = {"Hyundai", "BMW", "Mercedes", "Audi", "Toyota"};
    string model[5] = {"Stargazer", "X5", "BenzC200", "A3", "Corolla"};
    string warna[5] = {"Merah", "Hitam", "Biru", "Putih", "Kuning"};
    int harga[5] = {84000, 62500, 800000, 67000, 47000};
    int tahun[5] = {2022, 1999, 1993, 1997, 1966};
};

struct userinfo // ! struktur pembayaran
{
    string kartu[5];
    string expire[5];
    int cvv[5];
    string nama[5];
    int postal[5];
    string alamat[5];
    int nominal[5];
};

Cars mobil;        // ! deklarasi mobil
userinfo datadiri; // ! deklarasi data diri


//////////////////////////////////////////////////////////


void Menu() // ! Untuk Print List Mobil
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

void Detail(int Pilihan) // ! Untuk Detail Mobil Yang Telah Dipilih ( Pilihan Untuk Pilihan Mobil )
{                        // ! Karena Array dimulai dari 0 , jadi Pilihan - 1
    system("cls");
    cout << "\n\n\n";
    cout << "\t\t\t=============================\n";
    cout << "\t\t\tKamu Telah Memilih - " << mobil.brand[Pilihan - 1] << endl;
    cout << "\t\t\t=============================\n\n\n";
    cout << "\t\t\tModel : " << mobil.tahun[Pilihan - 1] << "\t" << mobil.brand[Pilihan - 1] << "\t" << mobil.model[Pilihan - 1] << endl;
    cout << "\t\t\tWarna : " << mobil.warna[Pilihan - 1] << endl;
    cout << "\t\t\tHarga : Rp. " << mobil.harga[Pilihan - 1] << " / Jam " << endl;
}

void check(int a, int jam) // ! Pembayaran Berhasil / Tidak
{
    system("cls");
    if (datadiri.nominal[a] >= (mobil.harga[a] * jam)) // ! Jika Nominal >= harga maka print berhasil
        cout << "\n\n\n\t\t\tProses Berhasil !!! " << endl;
    else
        cout << "\n\n\n\t\t\tProses Gagal " << endl;
}

void debit(int Pilihan) // ! Metode Pembayaran Kredit
{
    int jam;
    int a = Pilihan - 1;
    cout << "\n\n\n\t\t\tMasukan Berapa Lama Anda Ingin Merental (Dalam Jam) : ";
    cin >> jam;
    cout << "\t\t\tTotal Yang Harus Di Bayar Adalah : Rp. " << mobil.harga[Pilihan - 1] * jam << endl;
    cout << "\t\t\tTekan Enter Untuk Lanjut... ";
    _getch();
    system("cls");
    cout << "\n\n\n\t\t\t==============================================" << endl;
    cout << "\t\t\t=     Pembayaran Menggunakan Kartu Debit     =" << endl;
    cout << "\t\t\t==============================================" << endl;
    cout << "\t\t\tMasukan Nomor Debit : ";
    cin >> datadiri.kartu[a];
    cout << "\t\t\tMasukan Tanggal Kadaluarsa Kartu MM / YY : ";
    cin.ignore();
    cin >> datadiri.expire[a];
    cout << "\t\t\tMasukan CVV anda : ";
    cin.ignore();
    cin >> datadiri.cvv[a];
    cout << "\t\t\tNama di Kartu : ";
    cin.ignore();
    getline(cin, datadiri.nama[a]);
    cout << "\t\t\tPostal Code : ";
    cin.ignore();
    cin >> datadiri.postal[a];
    cout << "\t\t\tAlamat : ";
    cin.ignore();
    getline(cin, datadiri.alamat[a]);
    cout << "\t\t\tMasukan Nominal Yang Akan Dibayar : Rp. ";
    cin >> datadiri.nominal[a];
    check(a, jam);
}

void kredit(int Pilihan) // ! Metode Pembayaran Kredit
{
    int jam;
    int a = Pilihan - 1;
    cout << "\n\n\n\t\t\tMasukan Berapa Lama Anda Ingin Merental (Dalam Jam) : ";
    cin >> jam;
    cout << "\t\t\tTotal Yang Harus Di Bayar Adalah : Rp. " << mobil.harga[Pilihan - 1] * jam << endl;
    cout << "\t\t\tTekan Enter Untuk Lanjut... ";
    _getch();
    system("cls");
    cout << "\n\n\n\t\t\t===============================================" << endl;
    cout << "\t\t\t=     Pembayaran Menggunakan Kartu Kredit     =" << endl;
    cout << "\t\t\t===============================================" << endl;
    cout << "\t\t\tMasukan Nomor Kartu : ";
    cin.ignore();
    cin >> datadiri.kartu[a];
    cout << "\t\t\tMasukan Tanggal Kadaluarsa Kartu MM / YY : ";
    cin.ignore();
    cin >> datadiri.expire[a];
    cout << "\t\t\tMasukan CVV anda : ";
    cin.ignore();
    cin >> datadiri.cvv[a];
    cout << "\t\t\tNama di Kartu : ";
    cin.ignore();
    getline(cin, datadiri.nama[a]);
    cout << "\t\t\tPostal Code : ";
    cin.ignore();
    cin >> datadiri.postal[a];
    cout << "\t\t\tAlamat : ";
    cin.ignore();
    getline(cin, datadiri.alamat[a]);
    cout << "\t\t\tMasukan Nominal Yang Akan Dibayar : Rp. ";
    cin >> datadiri.nominal[a];
    check(a, jam);
}

int login() // ! Login Menu
{
    string pass, username;
    char ch;
    cout << "\n\n\n\n\n\n";
    cout << "\n\t\t\t\t\t================================================";
    cout << "\n\t\t\t\t\t=     Rental Mobil Rahasia Pt. Surya Abadi     =";
    cout << "\n\t\t\t\t\t=                 Login System                 =";
    cout << "\n\t\t\t\t\t================================================";
    cout << "\n\n\n\n\t\t\t\t\t\tMasukan Username : ";
    getline(cin, username);
    cout << "\n\t\t\t\t\t\tMasukan Password : ";
    while ((ch = _getch()) != 13) // ! char 13 adalah untuk enter
    {
        if (ch == 8) // ! char 8 adalah untuk backspace
        {
            if (pass.size() > 0)
            {
                pass.resize(pass.size() - 1, 1);
                cout << "\b \b";
            }
        }
        else
        {
            pass.push_back(ch);
            cout << "*";
        }
    }
    if (username == "ifnu" && pass == "12345") // ! Username dan Password yang harus dimasukan
    {
        cout << "\n\n\n\n\t\t\t\t\t  Akses Didapatkan ! Selamat Datang \n\n";
        cout << "\t\t\t\t\tTekan Enter Untuk Melanjutkan.........";
        _getch();
        system("cls");
    }
    else
    {
        cout << "\n\n\n\n\t\t\t\t\tAkses Ditolak ...Silahkan Coba Lagi !!\n";
        system("PAUSE");
        system("cls");
        login();
    }
    return 0;
}

int main() // ! Program Utama
{
    login();
    string pilih;
MENUU:
    cout << "\n\n\n\t\t\t\t==========================================================" << endl;
    cout << "\t\t\t\t=              Rental Mobil Pt. Surya Abadi              =" << endl;
    cout << "\t\t\t\t==========================================================" << endl;
    while (pilih != "Exit")
    {
        Menu();
        cout << "\n\n\n\t\t\t\tPilihan Mu : ";
        int Pilihan, mP;
        string data, metode;
        cin >> Pilihan;
        if (Pilihan > 0 && Pilihan <= 5)
        {
            Detail(Pilihan);
        }
        else
        {
            cout << "\t\t\t\tError Input" << endl;
            cout << "\t\t\t\tTekan Enter Untuk Kembali.....";
            _getch();
            system("cls");
            goto MENUU;
        }
        cout << "\n\n\n\t\t\tApakah Kamu Yakin Ingin Rental Mobil Ini ? ( Ya / Tidak / Exit ) : ";
        cin >> pilih;
        if (pilih == "Ya" || pilih == "ya")
        {
        METODE:
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
                    cout << "\n\n\n\t\t\tDibuat Oleh Maulana Ifnu S.";
                    _getch();
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
                    cout << "\n\n\n\t\t\tDibuat Oleh Maulana Ifnu S.";
                    _getch();
                    break;
                }
                else
                {
                    system("cls");
                    goto MENUU;
                }
                system("cls");
            }

            else
            {
                cout << "\t\t\tError Input...";
                _getch();
                goto METODE;
            }
        }

        else if (pilih == "Tidak" || pilih == "tidak")
        {
            system("cls");
            goto MENUU;
        }

        else
        {
            cout << "Dibuat Oleh Maulana Ifnu S.\n";
            _getch();
            break;
        }
    }
    return 0;
}
