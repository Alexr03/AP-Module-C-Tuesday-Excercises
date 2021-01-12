//
// Created by alexr on 12/01/2021.
//

#include "Exercise3.h"
#include "../Helpers/iohelper.h"
#include "../Exercise2/Exercise2.h"
#include "../Exercise1/Exercise1.h"

using namespace std;

void Exercise3::execute() {
    string word = iohelper::getInput("Please enter a word");
    word = Exercise2::stringLower(word);
    string reversed = Exercise1::reverseWord(word);
    if (reversed == word) {
        cout << "Yes, '" << word << "' is a palindrome.";
    } else {
        cout << "No, '" << word << "' is not a palindrome.";
    }
}

std::string Exercise3::name() {
    return "Palindrome Checker";
}
