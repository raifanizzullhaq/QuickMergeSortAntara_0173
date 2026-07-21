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

void q_sort(int low, int high) // Membuat prosedur q_sort dengan parameter low, high bertipe data integer
{
    int temp; // Deklarasi variabel temporary
    int pivot, i, j; // Deklarasi variabel pivot, i, dan j

    if (low >= high) // Jika low lebih besar dari high
    {
        return; // Alur mengembalikan nilai
    }

    pivot = arr[low]; // Mengisi variabel pivot dengan array indeks low
    i = low + 1; // Mengisi variabel i dengan low + 1
    j = high; // Mengisi variabel j dengan high

    while (i <= j) // Looping selama i <= j
    {
        // Mencari elemen array yang lebih besar dari pivot
        while ((arr[i] <= pivot) && (i <= high)) // Looping selama arr[i] <= pivot dan i <= high
        {
            i++; // Increment variabel i
            cmp_count++; // Increment variabel cmp_count
        }
        cmp_count++; // Increment variabel cmp_count

        // Mencari elemen array yang lebih kecil atau sama dengan pivot
        while ((arr[j] > pivot) && (j >= low))
        {
            j--; // Decrement variabel j
            cmp_count++; // Increment variabel cmp_count
        }
        cmp_count++; // Increment variabel cmp_count

        if (i < j) // Jika indeks i kurang dari j
        {
            swap(i, j); // Tukar elemen pada indeks i dengan elemen pada indeks j
        }
    }

    if (low < j) // Jika indeks low kurang dari j
    {
        swap(low, j); // Tukar elemen pivot dengan elemen di indeks j
    }

    q_sort(low, j - 1); // Memanggil rekursif prosedur q_sort untuk mengurutkan sub array sebelah kiri
    q_sort(j + 1, high); // Memanggil rekursif prosedur q_sort untuk mengurutkan sub array sebelah kanan
}

void output() // Pembuatan prosedur output
{
    cout << "\n-----------------------" << endl; // Menampilkan bentuk
    cout << "  Inputkan Isi element array  " << endl; // Menampilkan teks
    cout << "-----------------------" << endl;

    for (int i = 0; i < n; i++) // Looping untuk menampilkan elemen array yang telah di urutkan
    {
        cout << arr[i] << " ";
    }

    cout << "\nJumlah perbandingan : " << cmp_count << endl; // Menampilkan jumlah perbandingan didalam algoritma
    cout << "Jumlah pergerakan data : " << mov_count << endl; // Menampilkan jumlah pergeseran data
}