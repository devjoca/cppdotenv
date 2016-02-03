//
// Created by José Carlos Pereyra on 2/1/16.
//

#ifndef CPPDOTENV_DOTENV_H
#define CPPDOTENV_DOTENV_H

#include <iostream>
#include <fstream>
#include <string>
#include "../include/Parser.h"

using namespace std;
class Dotenv {
private:

    string filepath;
    Parser* parser;

public:
    Dotenv(string);

    void load();

    void setEnvironmentVariable(string line);

    string getEnv(const char* name);
};


#endif //CPPDOTENV_DOTENV_H
