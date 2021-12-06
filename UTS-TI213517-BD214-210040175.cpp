                    /*              UTS PRAKTIKUM

                    NAMA : I GUSTI AGUNG NGURAH ARTHA BAWA
                    NIM:210040175
                    KELAS:BD214


                    */

#include <iostream>

using namespace std;

void listFilm()
{
    cout<<"                             FILM YANG TERSEDIA                      "<<endl;
    cout<<" ------------------------------------------------------------------- "<<endl;
    cout<<"| JUDUL FILM    |     TEMPAT     |       KATEGORI    |     PUKUL    |"<<endl;
    cout<<" ------------------------------------------------------------------"<<endl;

    cout<<"1) DILAN 1998   |     TEATER 3   | REGULER/EKSEKUTIF |19.00 - 20.15 "<<endl;
    cout<<"2) JUMANJI      |     TEATER 2   | REGULER/EKSEKUTIF |14.00 - 15.30 "<<endl;
    cout<<"3) SPIDERMAN    |     TEATER 1   | REGULER/EKSEKUTIF |18.00 - 19.45 "<<endl;
    cout<<" ------------------------------------------------------------------"<<endl;
}

int main()
{
    int pilih;
    char ulang;
 do{

        char kategori,cetak;
        int jum_tik,total,harga;
        int a;

    cout << "                       WELCOME TO CINEPLEX DENPASAR                 " << endl;
    cout<<endl;
    listFilm();

    cout<<" PILIH YANG ANDA MAU (1/2/3): ";
    cin>>pilih;
    system("cls");

    switch(pilih)
    {
    case 1:

        cout<<"             ANDA MEMILIH FILM DILAN 1998         "<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<endl;
        cout<<" PILIH KATEGORI (regular = r || eksekutif = e) : ";
        cin>>kategori;
        cout<<"--------------------------------------------------"<<endl;



        if(kategori=='r')
        {
            cout<<"             ANDA MEMEILIH REGULAR          "<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"         HARGA TIKET/ORANG : 60.000            "<<endl;
            cout<<endl;
            cout<<"         JUMLAH TIKET YANG DI BELI : ";cin>>jum_tik;
            harga=60000;
            total=harga*jum_tik;
            cout<<endl;
            cout<<"         TOTAL : Rp."<<total<<endl;
            cout<<"-----------------------------------------------"<<endl;

            cout<<" CETAK TIKET (ketik (y))";cin>>cetak;
            system("cls");
            if(cetak)
            {
                for(a=0;a<jum_tik;a++)
                {
                    cout<<"                TIKET MASUK                      "<<endl;
                cout<<"  ================================================== "<<endl;
                cout<<"| JUDUL FILM     : DILAN 1998                       |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| KATEGORI       : REGULAR                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| TEATER         : TEATER 3                         |"<<endl;
                cout<<"| PUKUL          : 19.00 - 20.15                    |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"  ================================================== "<<endl;
                }
            }break;
        }


       else if (kategori=='e')
        {
            cout<<"             ANDA MEMEILIH EKSEKUTIF            "<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"         HARGA TIKET/ORANG : 100.000           "<<endl;
            cout<<endl;
            cout<<"         JUMLAH TIKET YANG DI BELI : ";cin>>jum_tik;
            harga=100000;
            total=harga*jum_tik;
            cout<<endl;
            cout<<"         TOTAL : Rp."<<total<<endl;
            cout<<"-----------------------------------------------"<<endl;

            cout<<" CETAK TIKET (ketik (y))";cin>>cetak;
            system("cls");
            if(cetak)
            {
                for(a=0;a<jum_tik;a++)
                {
                    cout<<"                TIKET MASUK                      "<<endl;
                cout<<"  ================================================== "<<endl;
                cout<<"| JUDUL FILM     : DILAN 1998                       |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| KATEGORI       : EKSEKUTIF                        |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| TEATER         : TEATER 3                         |"<<endl;
                cout<<"| PUKUL          : 19.00 - 20.15                    |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"  ================================================== "<<endl;
                }
            }break;
        }
         else
        {
            cout<<" SALAH INPUT KATEGORI , COBA KEMBALI "<<endl;
        }
        break;




        case 2:
        cout<<"             ANDA MEMILIH FILM JUMANJI            "<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<endl;
        cout<<" PILIH KATEGORI (regular = r || eksekutif = e) : ";
        cin>>kategori;
        cout<<"--------------------------------------------------"<<endl;
        system("cls");


        if(kategori=='r')
        {
            cout<<"             ANDA MEMEILIH REGULAR            "<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"         HARGA TIKET/ORANG : 60.000            "<<endl;
            cout<<endl;
            cout<<"         JUMLAH TIKET YANG DI BELI : ";cin>>jum_tik;
            harga=60000;
            total=harga*jum_tik;
            cout<<endl;
            cout<<"         TOTAL : Rp."<<total<<endl;
            cout<<"-----------------------------------------------"<<endl;

            cout<<" CETAK TIKET (ketik (y))";cin>>cetak;
            system("cls");
            if(cetak)
            {
                for(a=0;a<jum_tik;a++)
                {
                    cout<<"                TIKET MASUK                      "<<endl;
                cout<<"  ================================================== "<<endl;
                cout<<"| JUDUL FILM     : JUMANJI                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| KATEGORI       : REGULAR                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| TEATER         : TEATER 2                         |"<<endl;
                cout<<"| PUKUL          : 14.00 - 15.30                    |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"  ================================================== "<<endl;
                }
            }break;
        }


        else if (kategori=='e')
        {
            cout<<"             ANDA MEMEILIH EKSEKUTIF            "<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"         HARGA TIKET/ORANG : 100.000            "<<endl;
            cout<<endl;
            cout<<"         JUMLAH TIKET YANG DI BELI : ";cin>>jum_tik;
            harga=100000;
            total=harga*jum_tik;
            cout<<endl;
            cout<<"         TOTAL : Rp."<<total<<endl;
            cout<<"-----------------------------------------------"<<endl;

            cout<<" CETAK TIKET (ketik (y))";cin>>cetak;
            system("cls");
            if(cetak)
            {
                for(a=0;a<jum_tik;a++)
                {
                    cout<<"                TIKET MASUK                      "<<endl;
                cout<<"  ================================================== "<<endl;
                cout<<"| JUDUL FILM     : JUMANJI                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| KATEGORI       : EKSEKUTIF                        |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| TEATER         : TEATER 2                         |"<<endl;
                cout<<"| PUKUL          : 14.00 - 15.30                    |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"  ================================================== "<<endl;
                }
            }break;
        }
         else
        {
            cout<<" SALAH INPUT KATEGORI , COBA KEMBALI "<<endl;
        }
        break;

        case 3:
        cout<<"             ANDA MEMILIH FILM SPIDERMEN          "<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<endl;
        cout<<" PILIH KATEGORI (regular = r || eksekutif = e) : ";
        cin>>kategori;
        cout<<"--------------------------------------------------"<<endl;
        system("cls");


        if(kategori=='r')
        {
            cout<<"             ANDA MEMEILIH REGULAR            "<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"         HARGA TIKET/ORANG : 60.000            "<<endl;
            cout<<endl;
            cout<<"         JUMLAH TIKET YANG DI BELI : ";cin>>jum_tik;
            harga=60000;
            total=harga*jum_tik;
            cout<<endl;
            cout<<"         TOTAL : Rp."<<total<<endl;
            cout<<"-----------------------------------------------"<<endl;

            cout<<" CETAK TIKET (ketik (y))";cin>>cetak;
            system("cls");
            if(cetak)
            {
                for(a=0;a<jum_tik;a++)
                {
                    cout<<"                TIKET MASUK                      "<<endl;
                cout<<"  ================================================== "<<endl;
                cout<<"| JUDUL FILM     : SPIDERMEN                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| KATEGORI       : REGULAR                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| TEATER         : TEATER 1                         |"<<endl;
                cout<<"| PUKUL          : 18.00 - 19.45                    |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"  ================================================== "<<endl;
                }
            }break;
        }

        else if (kategori=='e')
        {
            cout<<"             ANDA MEMEILIH EKSEKUTIF            "<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"         HARGA TIKET/ORANG : 100.000            "<<endl;
            cout<<endl;
            cout<<"         JUMLAH TIKET YANG DI BELI : ";cin>>jum_tik;
            harga=100000;
            total=harga*jum_tik;
            cout<<endl;
            cout<<"         TOTAL : Rp."<<total<<endl;
            cout<<"-----------------------------------------------"<<endl;

            cout<<" CETAK TIKET (ketik (y))";cin>>cetak;
            system("cls");
            if(cetak)
            {
                for(a=0;a<jum_tik;a++)
                {
                    cout<<"                TIKET MASUK                      "<<endl;
                cout<<"  ================================================== "<<endl;
                cout<<"| JUDUL FILM     : SPIDERMEN                          |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| KATEGORI       : EKSEKUTIF                        |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"| TEATER         : TEATER 1                         |"<<endl;
                cout<<"| PUKUL          : 18.00 - 19.45                    |"<<endl;
                cout<<"|                                                   |"<<endl;
                cout<<"  ================================================== "<<endl;
                }
            }break;
        }
        else
        {
            cout<<" SALAH INPUT KATEGORI , COBA KEMBALI "<<endl;
        }
        break;

        default :
            cout<<" SALAH INPUT FILM ,COBA ULANGI " <<endl;
        break;
    }

    cout<<endl;

cout<<" APAKAH ANDA INGIN MENGULANG (y=ya||t=tidak) ? ";
cin>>ulang;
cout<<endl;
system("cls");
 }
 while(ulang!='t');
    cout<<"             TERIMA KASIH !!   SUDAH KE CINEPLEX DENPASAR     "<<endl;

    return 0;
}
