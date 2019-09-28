//
// Created by liamcoal on 9/25/19.
//

#include "KeyInserter.h"

void KeyInserter::insert(const std::string& filename) {
    FILE *file = fopen(filename.c_str(), "r+");
    FILE *keys = fopen("keys.bin", "r");
    void *data = malloc(sizeof(long) * KEYCOUNT);
    fread(data, sizeof(long), KEYCOUNT, keys);
    fwrite(data, sizeof(long), KEYCOUNT, file);
    fclose(keys);
    fclose(file);
    remove("keys.bin");
}
