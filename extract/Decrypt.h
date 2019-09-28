//
// Created by liamcoal on 9/25/19.
//

#ifndef ARCHIVERIZE_DECRYPT_H
#define ARCHIVERIZE_DECRYPT_H


#include <cstdio>
#include <string>
#include "../archive/Encrypt.h"

class Decrypt {
private:
    long randomseeds[KEYCOUNT] {};
public:
    Decrypt();
    ~Decrypt();

    void decrypt(const char *filen, const char *name);
};


#endif //ARCHIVERIZE_DECRYPT_H
