#include <stdio.h>

static const char ASCII_MAP[24][3][4] = {
    {
        {' ', ' ', ' ', ' '},
        {' ', '/', '\\', ' '},
        {'/', '~', '~', '\\'}
    },
    {
        {' ', '_', '_', ' '},
        {'|', '_', '_', ')'},
        {'|', '_', '_', ')'}
    },
    {
        {' ', '_', '_', ' '},
        {'/', ' ', ' ', '`'},
        {'\\', '_', '_', ','}
    },
};

const char **ascii(char c) {
    return ASCII_MAP[c - 'a'];
}

int main(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            putchar(ascii('c')[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

