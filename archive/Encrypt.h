//
// Created by liamcoal on 9/24/19.
//

#ifndef ARCHIVERIZE_ENCRYPT_H
#define ARCHIVERIZE_ENCRYPT_H


#include <cstdio>
#include <string>

static std::string filename;

class Encrypt {
private:
    long randomseeds[32]{};
public:
    Encrypt();
    ~Encrypt();

    void encrypt(FILE *file);
};


#endif //ARCHIVERIZE_ENCRYPT_H
