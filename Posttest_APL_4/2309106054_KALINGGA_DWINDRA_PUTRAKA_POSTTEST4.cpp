#include <iostream>
#include <limits>
using namespace std;

int jumlah = 0, indexPart, percobaan = 0;
const int maxpercobaan = 3;
string ulang, username, password;

struct part
{
    string jenisPart;
    string jumlahPart;
};
struct sparepart
{
    string namaPart;
    struct part detail;
};

sparepart spare[15];

void tambahData(sparepart spare[], int &jumlah)
{
    system("cls");

    cout<<"Menambahkan spare part baru"<<endl;
    cout<<"Masukkan nama spare part : ";
    cin.ignore();
    getline(cin, spare[jumlah].namaPart);
    cout<<"Masukkan jenis spare part : ";
    getline(cin, spare[jumlah].detail.jenisPart);
    cout<< "Masukkan jumlah spare part : ";
    getline(cin, spare[jumlah].detail.jumlahPart);
    cout<<endl;
    cout<<"Spare part berhasil ditambahkan"<<endl;

    jumlah++;

}
void lihatData(sparepart spare[], int jumlah) 
{
    system("cls");
    if (jumlah >= 1) 
    {
        cout<<"Menampilkan spare part tersedia\n";
        cout<<"Spare parts yang tersedia:\n";
        cout << "=================================" << endl;
        for (int i = 0; i < jumlah; i++) 
        {
            cout<< i + 1 << ". "<<"Nama   : "<<spare[i].namaPart<<endl;
            cout<<"   Jenis  : "<<spare[i].detail.jenisPart<<endl;
            cout<<"   Jumlah : "<<spare[i].detail.jumlahPart<<endl;
            cout<< "=================================\n";
        }  
    }  
    else
    {
        cout<<"Tidak ada spare part tersedia\n\n";
    }
}
void ubahData(sparepart spare[], int jumlah) 
{
    system("cls");
    while(true)
    {
        if (jumlah >= 1) 
        {
            cout<<"Mengubah data spare part tersedia\n";
            cout<<"Spare parts yang tersedia:\n";
            lihatData(spare, jumlah);
            cout<<"Masukkan nomor spare part yang akan diubah : ";
            cin>>indexPart;
            if (indexPart > 0 && indexPart <= jumlah) 
            {
                cout<<"Masukkan nama baru : ";
                cin.ignore();
                getline(cin, spare[indexPart - 1].namaPart);
                cout<<"Masukkan jenis baru : ";
                getline(cin, spare[indexPart - 1].detail.jenisPart);
                cout<<"Masukkan jumlah baru : ";
                cin>>spare[indexPart - 1].detail.jumlahPart;
                cout<<"Data spare part berhasil diubah.\n\n";
                break;
            }
            else 
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        else 
        {
            cout<<"Tidak ada spare part tersedia.\n\n";
            break;
        }
    }
}
void hapusData(sparepart spare[], int &jumlah) 
{
    system("cls");
    while(true)
    {
        if (jumlah >= 1)
        {
            cout<<"Menghapus spare part yang habis terjual\n";
            lihatData(spare, jumlah);
            cout<<"Masukkan nomor spare part yang ingin dihapus : ";
            cin>>indexPart;
            if (indexPart > 0 && indexPart <= jumlah) {
                for (int i = indexPart - 1; i < jumlah - 1; ++i) 
                {
                    spare[i] = spare[i + 1];
                }
                jumlah--;
                cout<<"Data spare part berhasil dihapus.\n\n";
                break;
            } 
            else 
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        else
        {
            cout<<"Tidak ada spare part tersedia" << endl << endl;
            break;
        }

    }
}
void menu(sparepart spare[], int &jumlah) 
{
    system("cls");
    int pilihan;
    cout<<"Sistem Pendataan Ketersediaan Spare Part Mobil\n"
    "1. Menambahkan spare part baru\n"
    "2. Mengubah spare part tersedia\n"
    "3. Menampilkan spare part yang sedang tersedia\n"
    "4. Menghapus spare part\n";
    cout<<"Pilih menu : ";
    cin>>pilihan;
    cout<<endl;
    if (pilihan == 1)
    {
        tambahData(spare, jumlah);
    }
    else if (pilihan == 2)
    {
        ubahData(spare, jumlah);
    }
    else if (pilihan == 3)
    {
        lihatData(spare, jumlah);
    }
    else if (pilihan == 4)
    {
        hapusData(spare, jumlah);
    }
    else
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        menu(spare,jumlah);
    }
    cout<<"Ingin melanjutkan pendataan?(y untuk melanjutkan) : ";
    cin>>ulang;
    if (ulang == "y")
    {
        cout<<endl;
        menu(spare,jumlah);
    }
    else
    {
        cout<<endl;
        cout<<"Program berhenti. Terima kasih.";
    }
}
int main() 
{
    system("cls");
    cout<<"SISTEM PENDATAAN KETERSEDIAAN SPARE PART MOBIL (KALINGGA DWINDRA PUTRAKA/2309106054)"<<endl;
    cout<< "====================================================================================\n";

    while (percobaan<maxpercobaan)
    {
        cout<<"Masukkan username : ";
        getline(cin,username);
        cout<<"Masukkan password : ";
        getline(cin,password);
        cout<<endl;
        if(username == "Kalingga" and password == "54")
        {
            menu(spare,jumlah);
            break;
        }
        else
        {
            cout<<"Login gagal."<<endl;
            percobaan++;
        }
    }
}