//
// Created by liamcoal on 9/25/19.
//

#include "KeyInserter.h"

void KeyInserter::insert(const std::string& filename) {
    FILE *file = fopen(filename.c_str(), "r+");
    FILE *keys = fopen("keys.bin", "r");
    void *data = malloc(sizeof(long) * 32);
    fread(data, sizeof(long), 32, keys);
    fwrite(data, sizeof(long), 32, file);
    fclose(keys);
    fclose(file);
    remove("keys.bin");
}
