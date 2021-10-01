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
    using Questions = function<void()>;
    Questions questions[4];
    void initializeQuestionFunctions();
    void executeAnswer() const;

protected:
    void setQuestionCode(int x) {
        questionId = x;
    }

    int getQuestionId() const {
        return questionId;
    }

    int questionId{};
};

#endif //BANKSOAL_BANKSOAL_H
