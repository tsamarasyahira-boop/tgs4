#include <iostream>
#include <string>
using namespace std;

int main() 
{
    float nilai;
    string ulang;

    do {
        cout << "Masukkan Nilai: ";
        cin >> nilai;

        
        if (nilai > 90) {
            cout << "Hasil Grade : A" << endl;
        } 
        else if (nilai > 80) {
            cout << "Hasil Grade : B" << endl;
        } 
        else if (nilai > 70) {
            cout << "Hasil Grade : C" << endl;
        } 
        else {
            cout << "Hasil Grade : D" << endl;
        }

        cout << "===================================" << endl;
        cout << "Apakah Anda mau mengulang. tekan Y atau y : ";
        cin >> ulang;
        cout << endl;

    } while (ulang == "y" || ulang == "Y");

    return 0;
}
