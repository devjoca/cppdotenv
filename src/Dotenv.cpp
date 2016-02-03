//
// Created by José Carlos Pereyra on 2/1/16.
//
#include "../include/Dotenv.h"

Dotenv::Dotenv(string filepath) {

    this->filepath = string(filepath + "/.env");
    this->parser = new Parser();

}

void Dotenv::load() {

    fstream envfile;
    string line;
    size_t equalPos;

    envfile.open(this->filepath, ios::in);

    if ( envfile.is_open() ) {

        while( getline(envfile, line) ) {
            if( this->parser->isComment(line) ) {
                continue;
            }

            if( this->parser->looksLikeSetter(line) ) {
                this->setEnvironmentVariable(line);
            }
        }

        envfile.close();
    }

}

void Dotenv::setEnvironmentVariable(string line) {

    const char* enviromentDeclaration = line.c_str();

    putenv(strdup(enviromentDeclaration));

}

string Dotenv::getEnv(const char* name) {
    return string(getenv(name));
}
