#include <iostream>
using namespace std;

int arr {20}; //inisialisasi variabel array untuk menampung nilai
int cmp_count = 0; //inisialisasi variabel untuk jumlah perbandingan
int mov_count = 0; //inisialisasi variabel untuk jumlah pergerakan data
int n; //inisialisasi variabel n untuk panjang element array

void input() //membuat prosedur input
{
    while (true) //looping untuk meminta input panjang element array
    {
        cout << "masukkan panjang element array : ";
        cin >> n;
        
        if (n <= 20) //jika jumlah element kurang dari atau sama dengan 20 looping selesai
        {
            break;
        }
        else //jika jumlah element lebih dari 20 permintaan input akan di ulang
        {
            cout << "\nmaksimal panjang array adalah 20";
        }