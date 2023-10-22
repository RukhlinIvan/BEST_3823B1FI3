#include <stdbool.h>


bool is_digit(char x) {
    unsigned char g = x;
    bool a = g>='0' && g<='9';
    
    return a; // No implementation
}

bool is_letter(char x) {
    unsigned char g = x;
    bool a = g>='a' && g<='z';
    bool b = g>='A' && g<='Z';
    return a || b; // No implementation
}

bool is_punctuation(char x) {
    //char a[]=
    //"!, \", #, $, \%, &, \', (, ), *, +, -, ., /, :, ;, <, =, >, ?, @, [, \\, ], ^, _, `, {, |, }, ~";
    unsigned char g = x;
    bool a = g>='!' && g<='/';
    bool b = g>=':' && g<='@';
    bool c = g>='[' && g<='`';
    bool d = g>='{' && g<='~';
    return a || b || c || d; // No implementation
}

int get_ascii_code(char first, char second, char third) {
    int d = (first*1000 + second)*1000 + third;
    return d; // No implementation
}

