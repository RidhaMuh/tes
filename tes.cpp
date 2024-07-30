#include <iostream>
#include <conio.h>  
#include <cstdlib>  

using namespace std; //asasasas

void dmenu() {
    system("cls");
    cout << "Aplikasi Template Menu" << "\n";
    cout << "1. Menu Pertama" << "\n";
    cout << "2. Menu Kedua" << "\n";
    cout << "3. Menu Ketiga" << "\n";
    cout << "4. Menu Keempat" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukkan angka: ";
}

void mPertama() {
    system("cls");
    cout << "Halo saya menu pertama\n";
    cout << "Tekan enter untuk kembali ke menu";
    getch();
}

void mKedua() {
    system("cls");
    cout << "Halo saya menu kedua\n";
    cout << "Tekan enter untuk kembali ke menu";
    getch();
}

void mKetiga() {
    system("cls");
    cout << "Halo saya menu ketiga\n";
    cout << "Tekan enter untuk kembali ke menu";
    getch();
}

void mKeempat() {
    system("cls"); 
    cout << "Halo saya menu keempat\n";
    cout << "Tekan enter untuk kembali ke menu";
    getch();
}

int main() {
    char pl;
    do {
        dmenu();
        pl = getch();

        switch (pl) {
            case '1':
                //*code*//
                mPertama();
                break;
            case '2':
                //*code*//
                mKedua();
                break;
            case '3':
                //*code*//
                mKetiga();
                break;
            case '4':
                //*code*// 
                mKeempat();
                break;
            case '5':
                // Exit the loop
                break;
            default:
                system("cls");
                cout << "Pilihan tidak tersedia";
                getch();
                break;
        }
    } while (pl != '5');

    return 0;
}




