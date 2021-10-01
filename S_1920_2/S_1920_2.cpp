//
// Created by Salomo Hutapea on 02/10/21.
//

#include "S_1920_2.h"
#include <cmath>

S_1920_2::S_1920_2() {
    cout << "Question 19/20 No.2" << endl;
    cout
            << "Buatlah algoritme untuk menentukan rincian uang recehan (seminimal mungkin jumlah recehannya) dari masukan suatu nilai uang (integer), dimana jenis recehannya 100.000, 50.000, 10.000, 5.000, 1.000, 500, 10, 5 dan 1 rupiah."
            << endl << endl
            << "Sebagai contoh masukan program adalah 12345678 maka keluaran dari program adalah :" << endl;
    cout
            << endl <<
            "123 lembar 100.000an"
            << endl <<
            "4 lembar 10.000an"
            << endl <<
            "1 lembar 5.000an"
            << endl <<
            "1 lembar 500an"
            << endl <<
            "17 lembar 10an"
            << endl <<
            "1 lembar 5an"
            << endl <<
            "lembar 1an"
            << endl <<
            "Total 150 lembar"
            << endl;
    cout << endl << "Answer: " << endl << endl;
    executeAnswer();
}

void S_1920_2::executeAnswer() {
    int num;
    int currencies[7] = {100000, 10000, 5000, 500, 10, 5, 1};
    string currenciesString[7] = {"100.000", "10.000", "5.000", "500", "10", "5", "1"};

    cout << "Masukkan angka: ";
    cin >> num;

    int lembar = 0;
    for (int i = 0; i < sizeof(currencies) / 4; i++) {
        int sisaBagi = floor(num / currencies[i]);
        for (int j = sisaBagi; j > 0; j--) {
            num -= currencies[i];
            lembar++;
        }
        cout << endl << sisaBagi << " lembar " << currenciesString[i];
    }
    cout << endl << "Total " << lembar << " lembar";
}