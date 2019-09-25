//
// Created by liamcoal on 9/25/19.
//

#ifndef ARCHIVERIZE_DECRYPT_H
#define ARCHIVERIZE_DECRYPT_H


#include <cstdio>

class Decrypt {
private:
    long randomseeds[32]{};
public:
    Decrypt();
    ~Decrypt();

    void decrypt(FILE *file);
};


#endif //ARCHIVERIZE_DECRYPT_H
