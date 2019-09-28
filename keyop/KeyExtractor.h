//
// Created by liamcoal on 9/25/19.
//

#ifndef ARCHIVERIZE_KEYEXTRACTOR_H
#define ARCHIVERIZE_KEYEXTRACTOR_H


#include <string>
#include "../archive/Encrypt.h"

class KeyExtractor {
public:
    static void extract(const std::string& filename);
};


#endif //ARCHIVERIZE_KEYEXTRACTOR_H
