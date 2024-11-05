#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
    
// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    struct stat fileStat;
    if (stat(argv[1], &fileStat) != 0) {
        fprintf(stderr, "Could not access file.\n");
        return -1;
    }
 
    printf("File size: %ld bytes\n", fileStat.st_size);
}
