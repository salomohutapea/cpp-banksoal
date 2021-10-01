//
// Created by Salomo Hutapea on 01/10/21.
//

#include "BankSoal.h"
#include "S_1920_1/S_1920_1.h"
#include <iostream>

using namespace std;
using Questions = function<void()>;

// Set question array
Questions questions[1];

BankSoal::BankSoal() {
    initializeQuestionFunctions();
    enterQuestionID();
}

void BankSoal::executeAnswer() const {
    if (getQuestionId() < sizeof(questions) / 32 && getQuestionId() >= 0) {
        (questions[getQuestionId()])();
    } else {
        cout << "There is no question ID " << getQuestionId() << endl;
    }
}

// Add question classes to question array
void BankSoal::initializeQuestionFunctions() {
    questions[0] = []() { S_1920_1(); };
}

void BankSoal::enterQuestionID() {
    cout << "Enter question ID" << endl;
    int a;
    cin >> a;
    cout << endl;
    setQuestionCode(a);
}
