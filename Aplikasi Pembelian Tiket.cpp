#include <iostream> //header file libray
#include <conio.h>
#include <iomanip>
using namespace std;

// Nama : M Nandana Aruna Apta Baswara
// NIM  : 223140714111134
// Kelas: T2D

int main()
{
    // deklarasi variabel
    int jenis_tiket, jenis_hari, jumlahjp1, jumlahjp2, jumlahpaket1, jumlahpaket2, jumlahEGP, total_pembelian;
    char kembali;
    double total_diskon, total_pembayaran;

    // do while untuk melakukan pengulangan program (Melakukan pemesanan tiket lagi)
    do
    {
        // Menampilkan pilihan Jenis Tiket
        // Meminta input dari user sesuai pilihan Jenis Tiket
        cout << "-------Jenis Tiket-------" << endl
             << "1.Tiket Reguler" << endl
             << "2.Tiket Terusan" << endl
             << "-------------------------" << endl
             << "Masukkan Jenis Tiket(1/2) = ";
        cin >> jenis_tiket;
        cout << endl;

        // Meminta input dari user sesuai pilihan Jenis Hari
        // Menampilkan pilihan Jenis Hari
        cout << "--------Jenis Hari-------" << endl
             << "1.Weekday" << endl
             << "2.Weekend" << endl
             << "-------------------------" << endl
             << "Masukkan Jenis Hari (1/2) = ";
        cin >> jenis_hari;
        cout << endl;

        switch (jenis_tiket) // Menggunakan switch case untuk memproses input Jenis Tiket
        {
        case 1: // jika jenis tiket = reguler, mengisi nilai variabel berdasarkan Tiket Reguler
        {
            switch (jenis_hari) // Menggunakan switch case untuk memproses input Jenis Hari
            {
            case 1: // jika jenis hari = weekday, mengisi nilai variabel berdasarkan Jenis Hari Weekday
                // Menampilkan Harga Tiket Reguler saat Weekday
                cout << "-----Harga Tiket Reguler-----" << endl
                     << "Tiket Jatim Park 1   = Rp. 70.000" << endl
                     << "Tiket Jatim Park 2   = Rp. 80.000" << endl
                     << "Tiket Eco Green Park = Rp. 50.000" << endl
                     << endl;

                // Meminta input dari user untuk macam jumlah pembelian tiket
                cout << "Masukkan Jumlah pembelian tiket Jatim Park 1   = ";
                cin >> jumlahjp1;
                cout << "Masukkan Jumlah pembelian tiket Jatim Park 2   = ";
                cin >> jumlahjp2;
                cout << "Masukkan Jumlah pembelian tiket Eco Green Park = ";
                cin >> jumlahEGP;
                cout << endl;

                // Menampilkan jumlah tiket dan  macam harga dari pembelian berdasarkan jumlah tiket
                cout << jumlahjp1 << " Tiket Jatim Park 1     Rp. 70.000 = " << jumlahjp1 * 70000 << endl
                     << jumlahjp2 << " Tiket Jatim Park 2     Rp. 80.000 = " << jumlahjp2 * 80000 << endl
                     << jumlahEGP << " Tiket Eco Green Park   Rp. 50.000 = " << jumlahEGP * 50000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                // Menghitung total pembelian tiket
                // Menampilkan Harga Total pembelian tiket
                total_pembelian = jumlahjp1 * 70000 + jumlahjp2 * 80000 + jumlahEGP * 50000;
                cout << "Total Pembelian  = Rp. " << fixed << setprecision(0) << total_pembelian << endl;
                break;
            case 2: // jika jenis hari = Weekend, mengisi nilai variabel berdasarkan Jenis Hari Weekend
                // Menampilkan Harga Tiket Reguler saat Weekend
                cout << "-----Harga Tiket Reguler-----" << endl
                     << "Tiket Jatim Park 1   = Rp. 100.000" << endl
                     << "Tiket jatim Park 2   = Rp. 120.000" << endl
                     << "Tiket Eco Green Park = Rp.  70.000" << endl
                     << endl;

                // Meminta input dari user untuk macam jumlah pembelian tiket
                cout << "Masukkan Jumlah pembelian tiket Jatim Park 1   = ";
                cin >> jumlahjp1;
                cout << "Masukkan Jumlah pembelian tiket Jatim Park 2   = ";
                cin >> jumlahjp2;
                cout << "Masukkan Jumlah pembelian tiket Eco Green Park = ";
                cin >> jumlahEGP;
                cout << endl;

                // Menampilkan jumlah tiket dan  macam harga dari pembelian berdasarkan jumlah tiket
                cout << jumlahjp1 << " Tiket Jatim Park 1     Rp. 100.000 = " << jumlahjp1 * 100000 << endl
                     << jumlahjp2 << " Tiket Jatim Park 2     Rp. 120.000 = " << jumlahjp2 * 120000 << endl
                     << jumlahEGP << " Tiket Eco Green Park   Rp.  70.000 = " << jumlahEGP * 70000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                // Menghitung total pembelian tiket
                // Menampilkan Harga Total pembelian tiket
                total_pembelian = jumlahjp1 * 110000 + jumlahjp2 * 120000 + jumlahEGP * 70000;
                cout << "Total Pembelian  = Rp. " << fixed << setprecision(0) << total_pembelian << endl;
                break;
            default: // jika input jenis hari tidak valid, mengeluarkan pesan error dan keluar dari program
                cout << "Anda Salah Memilih Jenis Hari!" << endl;
                return 0;
            }
            break;
        }
        case 2: // jika jenis tiket = terusan, mengisi nilai variabel berdasarkan Tiket Terusan
        {
            switch (jenis_hari) // Menggunakan switch case untuk memproses input Jenis hari
            {
            case 1: // jika jenis tiket = terusan, mengisi nilai variabel berdasarkan Tiket Terusan
                // Menampilkan Harga Tiket Terusan saat Weekday
                cout << "-----Harga Tiket Terusan-----" << endl
                     << "Paket 1 Jatim Park 1 dan Predator Fun Park = Rp.  80.000" << endl
                     << "Paket 2 Jatim Park 1 dan Eco Green Park    = Rp. 110.000" << endl
                     << endl;

                // Meminta input dari user untuk macam jumlah pembelian tiket
                cout << "Masukkan Jumlah pembelian Tiket Paket 1    = ";
                cin >> jumlahpaket1;
                cout << "Masukkan Jumlah pembelian Tiket Paket 2    = ";
                cin >> jumlahpaket2;
                cout << endl;

                // Menampilkan jumlah tiket dan  macam harga dari pembelian berdasarkan jumlah tiket
                cout << jumlahpaket1 << " Tiket Paket 1   Rp.  80.000 = " << jumlahpaket1 * 80000 << endl
                     << jumlahpaket2 << " Tiket Paket 2   Rp. 110.000 = " << jumlahpaket2 * 110000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                // Menghitung total pembelian tiket
                // Menampilkan Harga Total pembelian tiket
                total_pembelian = jumlahpaket1 * 80000 + jumlahpaket2 * 110000;
                cout << "Total Pembelian  = Rp. " << fixed << setprecision(0) << total_pembelian << endl;
                break;
            case 2: // jika jenis tiket = terusan, mengisi nilai variabel berdasarkan Tiket Terusan
                // Menampilkan Harga Tiket Terusan saat Weekend
                cout << "-----Harga Tiket Terusan-----" << endl
                     << "Paket 1 Jatim Park 1 dan Predator Fun Park = Rp. 110.000" << endl
                     << "Paket 2 Jatim Park 1 dan Eco Green Park    = Rp. 130.000" << endl
                     << endl;

                // Meminta input dari user untuk macam jumlah pembelian tiket
                cout << "Masukkan Jumlah pembelian Tiket Paket 1    = ";
                cin >> jumlahpaket1;
                cout << "Masukkan Jumlah pembelian Tiket Paket 2    = ";
                cin >> jumlahpaket2;
                cout << endl;

                // Menampilkan jumlah tiket dan  macam harga dari pembelian berdasarkan jumlah tiket
                cout << jumlahpaket1 << " Tiket Paket 1    Rp. 110.000 = " << jumlahpaket1 * 110000 << endl
                     << jumlahpaket2 << " Tiket Paket 2    Rp. 130.000 = " << jumlahpaket2 * 130000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                // Menghitung Harga total pembelian tiket
                // Menampilkan Harga Total pembelian tiket
                total_pembelian = jumlahpaket1 * 110000 + jumlahpaket2 * 130000;
                cout << "Total Pembelian  = Rp. " << fixed << setprecision(0) << total_pembelian << endl;
                break;
            default: // jika input jenis hari tidak valid, mengeluarkan pesan error dan keluar dari program
                cout << "Anda Salah Memilih Jenis Hari!" << endl;
                return 0;
            }
            break;
        }
        default: // jika input jenis tiket tidak valid, mengeluarkan pesan error dan keluar dari program
            cout << "Anda Salah Memilih Jenis Tiket!" << endl;
        }

        // memberikan diskon sesuai dengan jumlah pembelian
        if (total_pembelian >= 500000 && total_pembelian < 1000000) // jika total pembelian antara 500000 dan 1000000
        {
            total_diskon = 0.05 * total_pembelian; // berikan diskon sebesar 5% dari total pembelian
        }
        else if (total_pembelian >= 1000000) // jika total pembelian lebih dari atau sama dengan 1000000
        {
            total_diskon = 0.1 * total_pembelian; // berikan diskon sebesar 10% dari total pembelian
        }
        else // jika total pembelian kurang dari 500000
        {
            total_diskon = 0; // tidak ada diskon yang diberikan
        }

        // Menampilkan total diskon
        cout << "Total Diskon     = Rp.  " << total_diskon << endl
             << "-------------------------------------------------------------------------" << endl;

        // Menghitung total pembayaran
        // Menampilkan total pembayaran
        total_pembayaran = total_pembelian - total_diskon;
        cout << "Total Pembayaran = Rp. " << fixed << setprecision(0) << total_pembayaran
             << endl;

        cout << ("Anda Ingin Memesan Kembali [Y/T]   : "); // meminta input dari user untuk melakukan pemesanan tiket kembali atau tidak
        cin >> kembali;

    } while (kembali == 'Y' || kembali == 'y');
    getch();
}