//
// Created by José Carlos Pereyra on 2/2/16.
//
#include "../include/Parser.h"

bool Parser::isComment(string line) {
    ltrim(line);
    return line.find("#") == 0;
}

bool Parser::looksLikeSetter(string line) {
    return line.find("=") != string::npos;
}