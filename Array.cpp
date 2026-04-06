#include <iostream>
using namespace std;

int main(){
    // deklarasi dengan inisiasi
    int aku[5] = {10,20,30,40,50};
    // deklarasi array tanpa inisialisasi
    int kamu[5];
    //tampilkan data
    cout << "Data pada indeks 1 = " << aku[1] << endl;
    //ganti indeks ke 1
    aku[1] = 200;
    cout << endl;
    cout << "Data pada indeks 1 = " << aku[1] << endl;
    //mengisi satu per satu
    cout << "Data indeks 0 = ";
    cin >> kamu[0];
    cout << "Data indeks 1 = ";
    cin >> kamu[1];
    cout << "Data indeks 2 = ";
    cin >> kamu[2];
    cout << "Data indeks 3 = ";
    cin >> kamu[3];
    cout << "Data indeks 4 = ";
    cin >> kamu[4];
    cout << endl;
    //menampilkan satu per satu
    cout << "Data Pertama = " << kamu[0] << endl;
    cout << "Data Kedua = " << kamu[1] << endl;
    cout << "Data Ketiga = " << kamu[2] << endl;
    cout << "Data Keempat = " << kamu[3] << endl;
    cout << "Data Kelima = " << kamu[4] << endl;
    cout << endl;

    //mengisi dengan menggunakan perulangan for
    for (int i = 0; i <= 4; i++)


}