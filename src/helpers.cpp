//
// Created by José Carlos Pereyra on 2/2/16.
//


#include "../include/helpers.h"

void ltrim(string& str) {
    size_t startpos = str.find_first_not_of(" \t\r\n");

    if(string::npos != startpos)
        str = str.substr(startpos);
}