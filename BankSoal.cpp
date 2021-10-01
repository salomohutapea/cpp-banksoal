//
// Created by Salomo Hutapea on 01/10/21.
//

#include "BankSoal.h"
#include "S_1920_1/S_1920_1.h"
#include "S_1920_2/S_1920_2.h"
#include <iostream>

using namespace std;

BankSoal::BankSoal() {
    initializeQuestionFunctions();
    enterQuestionID();
}

// Set question array and size
function<void()> questionArray[2];

// Add question classes to question array
void BankSoal::initializeQuestionFunctions() {
    questionArray[0] = []() { S_1920_1(); };
    questionArray[1] = []() { S_1920_2(); };
}

void BankSoal::enterQuestionID() {
    cout << "Enter question ID" << endl;
    int a;
    cin >> a;
    cout << endl;
    setQuestionCode(a);
}

void BankSoal::executeAnswer() const {
    if (getQuestionId() < sizeof(questionArray) / 32 && getQuestionId() >= 0) {
        (questionArray[getQuestionId()])();
    } else {
        cout << "There is no question ID " << getQuestionId() << endl;
    }
}