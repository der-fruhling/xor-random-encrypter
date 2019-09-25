//
// Created by liamcoal on 9/24/19.
//

#ifndef ARCHIVERIZE_ARCHIVER_H
#define ARCHIVERIZE_ARCHIVER_H


#include <cstdio>
#include <string>

static std::string filename;

class Archiver {
private:
    long randomseeds[32]{};
public:
    Archiver();
    ~Archiver();

    void compress(FILE *file);
};


#endif //ARCHIVERIZE_ARCHIVER_H
