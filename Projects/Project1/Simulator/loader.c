#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loader.h"

int loader(const char *filename, char instructions[MAX_INSTRUCTIONS][9]) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    char command[9];
    int i = 0;

    while (fgets(command, 9, file) != NULL) {
        if (command[0] == '\n') continue;
        strncpy(instructions[i], command, 8);
        instructions[i][8] = '\0';
        i++;
    }

    fclose(file);
    return 0;
}
