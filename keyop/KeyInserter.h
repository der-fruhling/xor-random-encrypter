//
// Created by liamcoal on 9/25/19.
//

#ifndef ARCHIVERIZE_KEYINSERTER_H
#define ARCHIVERIZE_KEYINSERTER_H


#include <string>
#include "../archive/Encrypt.h"

class KeyInserter {
public:
    static void insert(const std::string& filename);
};


#endif //ARCHIVERIZE_KEYINSERTER_H
