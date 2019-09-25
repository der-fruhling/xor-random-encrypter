#include <iostream>
#include <cstring>
#include "archive/Encrypt.h"
#include "extract/Decrypt.h"

using namespace std;

int main(int argc, char const **argv) {
    filename = "encrypted.aiz";
    if(argc < 3) {
        printf("Usage: %s <encrypt|decrypt> <file-in>\n", argv[0]);
        return 1;
    }
    if(strcmp(argv[1], "encrypt") != 0 && strcmp(argv[1], "decrypt") != 0) {
        printf("Usage: %s <encrypt|decrypt> <file-in>\n", argv[0]);
        return 1;
    }
    bool a, e;
    a = strcmp(argv[1], "encrypt") == 0;
    e = strcmp(argv[1], "decrypt") == 0;
    FILE *file = fopen(argv[2], "r");
    if(a) Encrypt().encrypt(file);
    if(e) Decrypt().decrypt(file);
    fclose(file);
    return 0;
}