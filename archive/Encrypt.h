//
// Created by liamcoal on 9/24/19.
//

#ifndef ARCHIVERIZE_ENCRYPT_H
#define ARCHIVERIZE_ENCRYPT_H


#include <cstdio>
#include <string>

// Normally 32, but do as many as you want.
#define KEYCOUNT 32

static std::string filename;

class Encrypt {
private:
    long randomseeds[KEYCOUNT]{};
public:
    Encrypt();
    ~Encrypt();

    void encrypt(FILE *file);
};


#endif //ARCHIVERIZE_ENCRYPT_H
