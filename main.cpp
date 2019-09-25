#include <iostream>
#include <cstring>
#include "archive/Archiver.h"
#include "extract/UnArchiver.h"

using namespace std;

int main(int argc, char const **argv) {
    filename = "archive.aiz";
    if(argc < 3) {
        printf("Usage: %s <archive|extract> <file-in>\n", argv[0]);
        return 1;
    }
    if(strcmp(argv[1], "archive") != 0 && strcmp(argv[1], "extract") != 0) {
        printf("Usage: %s <archive|extract> <file-in>\n", argv[0]);
        return 1;
    }
    bool a, e, ext, add;
    a = strcmp(argv[1], "archive") == 0;
    e = strcmp(argv[1], "extract") == 0;
    FILE *file = fopen(argv[2], "r");
    if(a) Archiver().compress(file);
    if(e) UnArchiver().extract(file);
    fclose(file);
    return 0;
}