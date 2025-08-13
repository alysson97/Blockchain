#include "headers/Blockchain.h"

int main(int argc, char** argv) {
    printf("Hello, World!\n");
    printf("Esse e o argc: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        if(i==0) continue;
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}