#include <iostream>
#include <cstring>
#include "archive/Encrypt.h"
#include "extract/Decrypt.h"
#include "keyop/KeyExtractor.h"
#include "keyop/KeyInserter.h"

#define testfunc(name) strcmp(argv[1], #name) != 0
#define testfuncn(name) !(testfunc(name))

using namespace std;

int main(int argc, char const **argv) {
    filename = "encrypted.aiz";
    if(argc < 3) {
        printf("Usage: %s <encrypt|decrypt> <file-in>\n", argv[0]);
        return 1;
    }
    if(testfuncn(encrypt) && testfuncn(decrypt) && testfuncn(keys-extract) && testfuncn(keys-insert)) {
        printf("Usage: %s <encrypt|decrypt> <file-in>\n", argv[0]);
        return 1;
    }
    bool a, e, ex, in;
    a = strcmp(argv[1], "encrypt") == 0;
    e = strcmp(argv[1], "decrypt") == 0;
    ex = strcmp(argv[1], "keys-extract") == 0;
    in = strcmp(argv[1], "keys-insert") == 0;
    FILE *file = nullptr;
    if(a) file = fopen(argv[2], "r");
    if(a) Encrypt().encrypt(file);
    if(e) Decrypt().decrypt(argv[2], argv[0]);
    if(ex) KeyExtractor::extract(argv[2]);
    if(in) KeyInserter::insert(argv[2]);
    if(file != nullptr) fclose(file);
    return 0;
}