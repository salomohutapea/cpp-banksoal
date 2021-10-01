//
// Created by Salomo Hutapea on 01/10/21.
//

#ifndef BANKSOAL_BANKSOAL_H
#define BANKSOAL_BANKSOAL_H

#include <string>
#include <functional>

using namespace std;

class BankSoal {
public:
    BankSoal();

    static void initializeQuestionFunctions();

    void executeAnswer() const;

private:
    void setQuestionCode(int x) {
        questionId = x;
    }

    int getQuestionId() const {
        return questionId;
    }

    int questionId{};

    void enterQuestionID();
};

#endif //BANKSOAL_BANKSOAL_H
