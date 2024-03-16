#include <iostream>
using namespace std;

int jumlahPart = 0, indexPart, percobaan = 0;
const int maksimalPart = 15, maxpercobaan = 3;
string Part[maksimalPart], ulang = "y", username, password, sparepart;

string tambahData(string Part[], int &jumlahPart) {
    cout << "Menambahkan spare part baru\n";
    cout << "Masukkan nama spare part : ";
    cin.ignore();
    getline(cin, sparepart);
    Part[jumlahPart] = sparepart;
    jumlahPart++;
    cout << endl;
    return sparepart;
}
void lihatData(string Part[], int jumlahPart, int index = 0) {
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
string ubahData(string Part[], int jumlahPart) {
    if (jumlahPart >= 1) 
    {
        cout << "Mengubah nama/detail spare part tersedia\n";
        lihatData(Part, jumlahPart);
        cout << "Masukkan nomor spare part yang akan diubah :";
        cin >> indexPart;
        cout << "Masukkan spare part baru : ";
        cin.ignore();
        getline(cin, sparepart);
        Part[indexPart - 1] = sparepart;
        cout << endl;
        return sparepart;
    } 
    else 
    {
        cout << "Tidak ada spare part tersedia" << endl << endl;
        return "";
    }
}
void hapusData(string Part[], int &jumlahPart) {
    if (jumlahPart >= 1)
    {
        cout << "Menghapus spare part yang habis terjual\n";
        lihatData(Part, jumlahPart);
        cout << "Masukkan nomor spare part yang ingin dihapus : ";
        cin >> indexPart;
        for (int i = indexPart - 1; i < jumlahPart; i++) {
            Part[i] = Part[i + 1];
        }
        jumlahPart--;
        cout << endl;
    }
    else
    {
        cout << "Tidak ada spare part tersedia" << endl << endl;
    }
}
void menu(string Part[], int &jumlahPart) {
    int pilihan;
    cout << "Sistem Pendataan Ketersediaan Spare Part Mobil\n"
    "1. Menambahkan spare part baru\n"
    "2. Mengubah nama/detail spare part tersedia\n"
    "3. Menampilkan spare part yang sedang tersedia\n"
    "4. Menghapus spare part\n";
    cout << "Pilih menu : ";
    cin >> pilihan;
    cout << endl;
    if (pilihan == 1)
    {
        tambahData(Part, jumlahPart);
    }
    else if (pilihan == 2)
    {
        ubahData(Part, jumlahPart);
    }
    else if (pilihan == 3)
    {
        lihatData(Part, jumlahPart);
    }
    else if (pilihan == 4)
    {
        hapusData(Part, jumlahPart);
    }
    else
    {
        cout << "Input tidak valid\n";
    }
    cout << "Ingin melanjutkan pendataan?(y untuk melanjutkan) : ";
    cin >> ulang;
    if (ulang == "y")
    {
        cout << endl;
        menu(Part,jumlahPart);
    }
    else
    {
        cout << endl;
        cout << "Program berhenti. Terima kasih.";
    }
}
int main() {
    cout<<"SISTEM PENDATAAN KETERSEDIAAN SPARE PART MOBIL (KALINGGA DWINDRA PUTRAKA/2309106054)"<<endl;
    cout<<endl;

    while (percobaan<maxpercobaan)
    {
        cout<<"Masukkan username : ";
        getline(cin,username);
        cout<<"Masukkan password : ";
        getline(cin,password);
        cout<<endl;
        if(username == "Kalingga Dwindra Putraka" and password == "2309106054")
        {
            menu(Part,jumlahPart);
            break;
        }
        else
        {
            cout<<"Login gagal"<<endl;
            percobaan++;
        }
    }
}