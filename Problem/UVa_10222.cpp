#include <stdio.h>
#include <ctype.h>

int main() {
    char map[256] = {0};

    map['2'] = '`'; map['3'] = '1'; map['4'] = '2'; map['5'] = '3';
    map['6'] = '4'; map['7'] = '5'; map['8'] = '6'; map['9'] = '7';
    map['0'] = '8'; map['-'] = '9'; map['='] = '0';

    map['e'] = 'q'; map['r'] = 'w'; map['t'] = 'e'; map['y'] = 'r';
    map['u'] = 't'; map['i'] = 'y'; map['o'] = 'u'; map['p'] = 'i';
    map['['] = 'o'; map[']'] = 'p'; map['\\'] = '[';

    map['d'] = 'a'; map['f'] = 's'; map['g'] = 'd'; map['h'] = 'f';
    map['j'] = 'g'; map['k'] = 'h'; map['l'] = 'j'; map[';'] = 'k';
    map['\''] = 'l';

    map['c'] = 'z'; map['v'] = 'x'; map['b'] = 'c'; map['n'] = 'v';
    map['m'] = 'b'; map[','] = 'n'; map['.'] = 'm'; map['/'] = ',';

    int ch;
    while ((ch = getchar()) != EOF) {
        ch = tolower(ch);
        if (map[ch] != 0) {
            putchar(map[ch]);
        } else {
            putchar(ch);
        }
    }

    return 0;
}