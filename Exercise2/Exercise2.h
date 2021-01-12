//
// Created by alexr on 12/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_2_EXERCISE2_H
#define ADAADVANCEDPROGRAMMING_2_EXERCISE2_H


#include "../Exercise.h"

using namespace std;

class Exercise2 : public Exercise {
public:
    void execute() override;

    std::string name() override;

    static string stringLower(std::string basicString);
};


#endif //ADAADVANCEDPROGRAMMING_2_EXERCISE2_H
