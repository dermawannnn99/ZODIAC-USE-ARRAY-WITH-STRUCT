#include <iostream>
#include <string>
using namespace std;

    //STRUCT UNTUK MENYIMPAN DATA ZODIAK
    struct Zodiak {
        string nama;
        int HariMulai, BulanMulai, HariSelesai, BulanSelesai;
    };

    int main () {
        //DAFTAR ZODIAK BESERTA DESKRIPSINYA, TANGGAL DAN BULAN MULAI, SERTA TANGGAL DAN BULAN SELESAI
        Zodiak DaftarZodiak [12] = {
            {"CAPRICORN\nKamu bisa dengan mudah menentukan keputusan yang terbaik dalam hidup.", 22, 12, 19, 1},
            {"AQUARIUS\nKamu adalah pribadi yang apa adanya. Selalu bertindak jujur terhadap orang di sekitar.", 20, 1, 18, 2},
            {"PISCES\nKamu adalah pribadi yang peduli dan sensitif terhadap kebutuhan orang lain.", 19, 2, 20, 3},
            {"ARIES\nKamu yang memiliki zodiak Aries sangat dicintai karena sosoknya.", 21, 3, 19, 4},
            {"TAURUS\nKamu akan selalu menjadi orang pertama yang menawarkan bantuan kepada teman atau keluarga yang sedang memiliki masalah.", 20, 4, 20, 5},
            {"GEMINI\nDisadari atau tidak, hal ini menarik orang-orang di sekitar merasa nyaman dan senang berada di dekatmu.", 21, 5, 20, 6},
            {"CANCER\nKamu memiliki pengertian yang kuat pada lingkungan. Saat orang di sekitar mendapat masalah, kamu akan dengan mudah merasakannya secara emosional.", 21, 6, 22, 7},
            {"LEO\nLayaknya seekor singa, kamu dengan mudah membuat orang-orang di sekitar jatuh cinta dengan memperlihatkan keberanian dalam menyelesaikan masalah.", 23, 7, 22, 8},
            {"VIRGO\nKamu yang berzodiak Virgo akan dengan mudah menemani teman atau keluarga melalui kesulitannya.", 23, 8, 22, 9},
            {"LIBRA\nApa pun yang kamu lakukan dan kerjakan selalu dengan hati. Libra akan menolong orang-orang di sekitarnya dengan sepenuh hati.", 23, 9, 22, 10},
            {"SCORPIO\nKamu memang tidak bisa melakukan semuanya, tapi dengan kekuatan yang dimiliki membuat orang-orang di sekitar merasa aman.", 23, 10, 21, 11},
            {"SAGITTARIUS\nKamu selalu yakin dengan jalan hidup yang dipilih. Menginspirasi orang-orang di sekitarmu untuk melakukan hal yang sama.", 22, 11, 21, 12}
        };

        cout << "---------------------------------------------------------------" << endl;
        cout << "|                                                             |" << endl;
        cout << "|    SELAMAT DATANG DI PROGRAM MENENTUKAN ZODIAK KELAHIRAN    |" << endl;
        cout << "|                                                             |" << endl;
        cout << "---------------------------------------------------------------" << endl << endl;

        char ulangi = 'y';
            while (ulangi == 'y' || ulangi == 'Y') {

        int hari, bulan, tahun;
        //INPUT USER TANGGAL BULAN DAN TAHUN
        cout << "Silahkan masukan tanggal lahir anda\n" << "=> ";
        cin >> hari;
        cout << "Silahkan masukan bulan lahir anda\n" << "=> ";
        cin >> bulan;
        cout << "Silahkan masukan tahun lahir anda\n" << "=> " ;
        cin >> tahun;

        cout << endl;

        //VARIABEL ZODIAK UTK MENYIMPAN NAMA ZODIAK SESUAI DENGAN INPUTAN USER
        string Zodiak;

            //CEK SETIAP ZODIAK APAKAH SESUAI INPUTAN USER
            if ((bulan == DaftarZodiak[0]. BulanMulai && hari >= DaftarZodiak[0]. HariMulai) || (bulan == DaftarZodiak[0]. BulanSelesai && hari <= DaftarZodiak[0]. HariSelesai)) {
                Zodiak = DaftarZodiak[0]. nama;
           } else if ((bulan == DaftarZodiak[1].BulanMulai && hari >= DaftarZodiak[1].HariMulai) || (bulan == DaftarZodiak[1]. BulanSelesai && hari <= DaftarZodiak[1].HariSelesai)) {
                Zodiak = DaftarZodiak[1].nama;
           } else if ((bulan == DaftarZodiak[2].BulanMulai && hari >= DaftarZodiak[2].HariMulai) || (bulan == DaftarZodiak[2]. BulanSelesai && hari <= DaftarZodiak[2].HariSelesai)) {
                Zodiak = DaftarZodiak[2].nama;
           } else if ((bulan == DaftarZodiak[3].BulanMulai && hari >= DaftarZodiak[3].HariMulai) || (bulan == DaftarZodiak[3]. BulanSelesai && hari <= DaftarZodiak[3].HariSelesai)) {
                Zodiak = DaftarZodiak[3].nama;
           } else if ((bulan == DaftarZodiak[4].BulanMulai && hari >= DaftarZodiak[4].HariMulai) || (bulan == DaftarZodiak[4]. BulanSelesai && hari <= DaftarZodiak[4].HariSelesai)) {
                Zodiak = DaftarZodiak[4].nama;
           } else if ((bulan == DaftarZodiak[5].BulanMulai && hari >= DaftarZodiak[5].HariMulai) || (bulan == DaftarZodiak[5]. BulanSelesai && hari <= DaftarZodiak[5].HariSelesai)) {
                Zodiak = DaftarZodiak[5].nama;
           } else if ((bulan == DaftarZodiak[6].BulanMulai && hari >= DaftarZodiak[6].HariMulai) || (bulan == DaftarZodiak[6]. BulanSelesai && hari <= DaftarZodiak[6].HariSelesai)) {
                Zodiak = DaftarZodiak[6].nama;
           } else if ((bulan == DaftarZodiak[7].BulanMulai && hari >= DaftarZodiak[7].HariMulai) || (bulan == DaftarZodiak[7]. BulanSelesai && hari <= DaftarZodiak[7].HariSelesai)) {
                Zodiak = DaftarZodiak[7].nama;
           } else if ((bulan == DaftarZodiak[8].BulanMulai && hari >= DaftarZodiak[8].HariMulai) || (bulan == DaftarZodiak[8]. BulanSelesai && hari <= DaftarZodiak[8].HariSelesai)) {
                Zodiak = DaftarZodiak[8].nama;
           } else if ((bulan == DaftarZodiak[9].BulanMulai && hari >= DaftarZodiak[9].HariMulai) || (bulan == DaftarZodiak[9]. BulanSelesai && hari <= DaftarZodiak[9].HariSelesai)) {
                Zodiak = DaftarZodiak[9].nama;
           } else if ((bulan == DaftarZodiak[10].BulanMulai && hari >= DaftarZodiak[10].HariMulai) || (bulan == DaftarZodiak[10]. BulanSelesai && hari <= DaftarZodiak[10].HariSelesai)) {
                Zodiak = DaftarZodiak[10].nama;
           } else if ((bulan == DaftarZodiak[11].BulanMulai && hari >= DaftarZodiak[11].HariMulai) || (bulan == DaftarZodiak[11]. BulanSelesai && hari <= DaftarZodiak[11].HariSelesai)) {
                Zodiak = DaftarZodiak[11].nama;
           } else if ((bulan == DaftarZodiak[12].BulanMulai && hari >= DaftarZodiak[12].HariMulai) || (bulan == DaftarZodiak[12]. BulanSelesai && hari <= DaftarZodiak[12].HariSelesai)) {
                Zodiak = DaftarZodiak[12].nama;
           } else {
                Zodiak = "Zodiak tidak di ketahui !";
           }

           //OUTPUT USER
           cout << "--------------------------------------" << endl;
           cout << "terlampir data diri anda [tgl-bln-thn]" << endl;
           cout << "Tanggal : " << hari << endl;
           cout << "Bulan   : " << bulan << endl;
           cout << "Tahun   : " << tahun << endl << endl;

           //MENAMPILKAN ZODIAKNYA
           cout << "-----------------------------------------------------------------------" << endl;
           cout << "Zodiak anda adalah " << Zodiak << endl;
           cout << "-----------------------------------------------------------------------" << endl << endl << endl;

           //USER APAKAH INGIN MENGULANG PROGRAM
           cout << "Apakah anda ingin mencoba program ini lagi? (y/n) : ";
           cin >> ulangi;

           cout << endl;
           }
                //JIKA USER TIDAK MELANJUTKAN PROGRAM
                cout << "-----------------------------------------" << endl;
                cout << "Terimakasih telah memakai program ini ^_^" << endl;
                cout << "-----------------------------------------" << endl;

        return 0;
    }
