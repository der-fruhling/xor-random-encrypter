//
// Created by liamcoal on 9/25/19.
//

#include "KeyExtractor.h"

void KeyExtractor::extract(const std::string& filename) {
    const unsigned long exfileheader[KEYCOUNT] = {0xFFFFFFFFFFFFFFFF};
    FILE *file = fopen(filename.c_str(), "r+");
    auto *keys = reinterpret_cast<unsigned long *>(malloc(sizeof(long) * KEYCOUNT));
    fread(keys, sizeof(long), KEYCOUNT, file);
    fseek(file, 0, SEEK_SET);
    fwrite(exfileheader, sizeof(long), KEYCOUNT, file);
    fclose(file);
    file = fopen("keys.bin", "w");
    fwrite(keys, sizeof(long), KEYCOUNT, file);
    fclose(file);
}
