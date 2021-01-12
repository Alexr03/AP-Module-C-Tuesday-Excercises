//
// Created by alexr on 12/01/2021.
//

#include "iostream"
#include "Exercise1.h"
#include "../Helpers/iohelper.h"

using namespace std;

void Exercise1::execute() {
    string word = iohelper::getInput("Please enter a word");
    string reversed = reverseWord(word);

    cout << word << " spelt backwards is: " << reversed;
}

std::string Exercise1::name() {
    return "Reverse Word";
}

string Exercise1::reverseWord(const std::string& word) {
    string tempWord = word;
    int length = word.length();

    for (int i = 0; i < length / 2; ++i) {
        swap(tempWord[i], tempWord[length - i - 1]);
    }

    return tempWord;
}
