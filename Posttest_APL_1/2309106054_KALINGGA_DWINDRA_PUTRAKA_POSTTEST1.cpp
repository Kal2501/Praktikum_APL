#include <iostream>
using namespace std;

int main()
{
    string username, password, pilihan1, pilihan2, lanjut;
    float angka, hasil;
    int percobaan = 0;
    const int maxpercobaan = 3;

    cout<<"PROGRAM KONVERSI KECEPATAN (KALINGGA DWINDRA PUTRAKA/2309106054)"<<endl;
    cout<<endl;

    while (percobaan<maxpercobaan)
    {
        cout<<"Masukkan username : ";
        getline(cin,username);
        cout<<"Masukkan password : ";
        getline(cin,password);

        if(username == "Kalingga Dwindra Putraka" and password == "2309106054")
        {
            cout<<"Login Berhasil!"<<endl;;
            cout<<endl;
            while (true)
            {
                cout<<"Masukkan angka kecepatan yang ingin dikonversi : ";
                cin>>angka;
                cout<<endl;
                cout<<"Satuan awal"<<endl;
                cout<<"a. km/h"<<endl;
                cout<<"b. cm/s"<<endl;
                cout<<"c. m/s"<<endl;
                cout<<"d. mph"<<endl;
                cout<<"Masukkan pilihan : ";
                cin>>pilihan1;
                cout<<endl;
                if(pilihan1=="a")
                {
                    cout<<"Konversi ke?"<<endl;
                    cout<<"a. cm/s"<<endl;
                    cout<<"b. m/s"<<endl;
                    cout<<"c. mph"<<endl;
                    cout<<"Masukkan pilihan : ";
                    cin>>pilihan2;
                    if(pilihan2=="a")
                    {
                        hasil=angka*27.777778;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="b")
                    {
                        hasil=angka*0.277778;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="c")
                    {
                        hasil=angka*0.621371;
                        cout<<angka<<" = "<<hasil;
                    }
                    else
                    {
                        cout<<"Input tidak valid."<<endl;
                    }
                }
                else if(pilihan1=="b")
                {
                    cout<<"Konversi ke?"<<endl;
                    cout<<"a. km/h"<<endl;
                    cout<<"b. m/s"<<endl;
                    cout<<"c. mph"<<endl;
                    cout<<"Masukkan pilihan : ";
                    cin>>pilihan2;
                    if(pilihan2=="a")
                    {
                        hasil=angka*0.036;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="b")
                    {
                        hasil=angka*0.01;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="c")
                    {
                        hasil=angka*0.0223694;
                        cout<<angka<<" = "<<hasil;
                    }
                    else
                    {
                        cout<<"Input tidak valid."<<endl;
                    }
                }
                else if(pilihan1=="c")
                {
                    cout<<"Konversi ke?"<<endl;
                    cout<<"a. km/h"<<endl;
                    cout<<"b. cm/s"<<endl;
                    cout<<"c. mph"<<endl;
                    cout<<"Masukkan pilihan : ";
                    cin>>pilihan2;
                    if(pilihan2=="a")
                    {
                        hasil=angka*3.6;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="b")
                    {
                        hasil=angka*100;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="c")
                    {
                        hasil=angka*2.23694;
                        cout<<angka<<" = "<<hasil;
                    }
                    else
                    {
                        cout<<"Input tidak valid."<<endl;
                    }
                }
                else if(pilihan1=="d")
                {
                    cout<<"Konversi ke?"<<endl;
                    cout<<"a. km/h"<<endl;
                    cout<<"b. cm/s"<<endl;
                    cout<<"c. m/s"<<endl;
                    cout<<"Masukkan pilihan : ";
                    cin>>pilihan2;
                    if(pilihan2=="a")
                    {
                        hasil=angka*1.60934;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="b")
                    {
                        hasil=angka*44.704;
                        cout<<angka<<" = "<<hasil;
                    }
                    else if(pilihan2=="c")
                    {
                        hasil=angka*0.44704;
                        cout<<angka<<" = "<<hasil;
                    }
                    else
                    {
                        cout<<"Input tidak valid."<<endl;
                    }
                }
                else
                {
                    cout<<"Input tidak valid."<<endl;
                }
                cout<<endl;
                cout<<endl;
                cout<<"Apakah ingin melanjutkan konversi?(y/n)";
                cin>>lanjut;
                if(lanjut=="y")
                {
                    continue;
                }
                else
                {
                    cout<<"Program berhenti. Terima kasih.";
                    break;
                }
            }
        break;
        }
        else
        {
            percobaan +=1;
            cout<<"Login Gagal!";
            cout<<endl;
        }
    }
    return 0;
}