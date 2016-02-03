#include <iostream>
#include "include/Dotenv.h"


int main() {

    Dotenv* dotenv;

    dotenv = new Dotenv("/Users/User/Developer/Joca/cppdotenv");
    dotenv->load();
    dotenv->getEnv("GOOGLE_URL");

    return 0;
}

