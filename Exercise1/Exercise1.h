//
// Created by alexr on 12/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_2_EXERCISE1_H
#define ADAADVANCEDPROGRAMMING_2_EXERCISE1_H


#include "../Exercise.h"

class Exercise1 : public Exercise {
public:
    void execute() override;

    std::string name() override;

    static std::string reverseWord(const std::string& basicString);
};


#endif //ADAADVANCEDPROGRAMMING_2_EXERCISE1_H
