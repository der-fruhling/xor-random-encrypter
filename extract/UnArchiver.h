//
// Created by liamcoal on 9/25/19.
//

#ifndef ARCHIVERIZE_UNARCHIVER_H
#define ARCHIVERIZE_UNARCHIVER_H


#include <cstdio>

class UnArchiver {
private:
    long randomseeds[32]{};
public:
    UnArchiver();
    ~UnArchiver();

    void extract(FILE *file);
};


#endif //ARCHIVERIZE_UNARCHIVER_H
