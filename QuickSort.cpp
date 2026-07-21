#include <iostream>
using namespace std;

int arr[20]; // Deklarasi variabel array untuk menampung data
int cmp_count = 0; // Deklarasi variabel untuk jumlah perbandingan
int mov_count = 0; // Deklarasi variabel untuk jumlah pergeseran data
int n; // Deklarasi variabel n untuk panjang elemen array

void input() // Prosedur untuk input
{
    while (true) // Looping untuk membuat input panjang elemen array
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20) // Jika jumlah elemen kurang dari atau sama dengan 20, looping selesai
        {
            break;
        }
        else // Jika panjang elemen lebih dari 20, peringatan input ulang di ulang
        {
            cout << "\nMaksimal panjang array adalah 20\n";
        }
    }

    cout << "\n-----------------------" << endl; // Menampilkan bentuk
    cout << "  Inputkan Isi element array  " << endl; // Menampilkan teks
    cout << "-----------------------" << endl;

    for (int i = 0; i < n; i++) // Looping untuk mengisi data array
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

void swap(int x, int y) // Membuat prosedur swap dengan parameter x, y bertipe data integer
{
    int temp = arr[x]; // Mengisi variabel temporary dengan arr indeks x
    arr[x] = arr[y]; // Mengisi arr indeks x dengan arr indeks y
    arr[y] = temp; // Mengisi arr indeks y dengan variabel temporary
    mov_count++; // Increment variabel mov_count
}