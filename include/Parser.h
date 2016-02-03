//
// Created by José Carlos Pereyra on 2/2/16.
//

#ifndef CPPDOTENV_PARSER_H
#define CPPDOTENV_PARSER_H

#include <iostream>
#include "helpers.h"

using namespace std;

class Parser {
public:
    bool isComment(string line);

    bool looksLikeSetter(string lie);
};

#endif //CPPDOTENV_PARSER_H
