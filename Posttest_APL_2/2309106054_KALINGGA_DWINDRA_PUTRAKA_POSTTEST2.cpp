#include <iostream>
using namespace std;

int main(){
    int jumlahPart=0, menu, indexPart, percobaan=0;
    const int maksimalPart=15, maxpercobaan=3;
    string Part[maksimalPart], ulang="y", username, password;

    cout<<"SISTEM PENDATAAN KETERSEDIAAN SPARE PART MOBIL (KALINGGA DWINDRA PUTRAKA/2309106054)"<<endl;
    cout<<endl;

    while (percobaan<maxpercobaan)
    {
        cout<<"Masukkan username : ";
        getline(cin,username);
        cout<<"Masukkan password : ";
        getline(cin,password);

        if(username == "Kalingga Dwindra Putraka" and password == "2309106054")
        {
            cout<<"Login Berhasil!"<<endl;
            cout<<endl;
            while(true)
            {
                cout<<"Sistem Pendataan Ketersediaan Spare Part Mobil\n"
                "1. Menambahkan spare part baru\n"
                "2. Mengubah nama/detail spare part tersedia\n"
                "3. Menampilkan spare part yang sedang tersedia\n"
                "4. Menghapus spare part\n";
                cout<<"Pilih menu : ";
                cin>>menu;
                cout<<endl;
                if (menu==1)
                {
                    cout<<"Menambahkan spare part baru\n";
                    cout<<"Masukkan nama spare part : ";
                    cin.ignore();
                    getline(cin, Part[jumlahPart]);
                    jumlahPart++;
                    cout<<endl;
                }
                else if (menu==2)
                {
                    if(jumlahPart>=1) 
                    {
                        cout<<"Mengubah nama/detail spare part tersedia\n";
                        for(int i = 0; i < jumlahPart; ++i)
                        {
                            cout<<i+1<<". "<<Part[i]<<endl;
                        }
                        cout<<"Masukkan nomor spare part yang akan diubah :";
                        cin>>indexPart;
                        cout << "Masukkan spare part baru : ";
                        cin.ignore();
                        getline(cin, Part[indexPart - 1]);
                        cout<<endl;
                    }
                    else 
                    {
                        cout<<"Tidak ada spare part tersedia"<<endl;
                        cout<<endl;
                    }
                }
                else if (menu==3)
                {
                    if(jumlahPart>=1)
                    {
                        cout<<"Menampilkan spare part tersedia\n";
                        for(int i = 0; i < jumlahPart; ++i)
                        {
                            cout<<i+1<<". "<<Part[i]<<endl;
                        }
                        cout<<endl;
                    }
                    else
                    {
                        cout<<"Tidak ada spare part tersedia"<<endl;
                        cout<<endl;
                    }
                }
                else if (menu==4)
                {
                    if(jumlahPart>=1)
                    {
                        cout<<"Menghapus spare part yang habis terjual\n";
                        for(int i = 0; i < jumlahPart; ++i)
                        {
                            cout<<i+1<<". "<<Part[i]<<endl;
                        }
                        cout<<"Masukkan nomor spare part yang ingin dihapus : ";
                        cin>>indexPart;
                        for(int i=indexPart-1; i < jumlahPart; i++)
                        {
                            Part[i]=Part[i+1];
                        }
                        jumlahPart--;
                        cout<<endl;
                    }
                    else
                    {
                        cout<<"Tidak ada spare part tersedia"<<endl;
                        cout<<endl;
                    }
                }
                else
                {
                    cout<<"Input tidak valid\n";
                }
                cout<<"Ingin melanjutkan pendataan?(y untuk melanjutkan) : ";
                cin>>ulang;
                if(ulang=="y")
                {
                    cout<<endl;
                    continue;
                }
                else
                {
                    cout<<endl;
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