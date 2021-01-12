//
// Created by alexr on 12/01/2021.
//

#include <algorithm>
#include <cctype>
#include <string>
#include "Exercise2.h"
#include "../Helpers/iohelper.h"

using namespace std;

void Exercise2::execute() {
    string word = iohelper::getInput("Please enter a word");
    string lowered = stringLower(word);
    cout << word << " converted to lower case is: " << lowered;
}

std::string Exercise2::name() {
    return "Lowercase Converter";
}

string Exercise2::stringLower(std::string word) {
    string tempWord = word;
    std::transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
    return tempWord;
}
