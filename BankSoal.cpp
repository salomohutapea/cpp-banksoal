//
// Created by Salomo Hutapea on 01/10/21.
//

#include "BankSoal.h"
#include "S_1920_1/S_1920_1.h"
#include <iostream>

using namespace std;

BankSoal::BankSoal() {
    initializeQuestionFunctions();
    cout << "Enter question ID" << endl;
    int a;
    cin >> a;
    cout << endl;
    setQuestionCode(a);
}

void BankSoal::executeAnswer() const {

    if (getQuestionId() < sizeof(questions) - 1 || getQuestionId() > 0) {
        (questions[getQuestionId()])();
    } else {
        cout << "There is no question ID " << getQuestionId() << endl;
    }
}

void BankSoal::initializeQuestionFunctions() {
    questions[0] = []() { S_1920_1(); };
}
