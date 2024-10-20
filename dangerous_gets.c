#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const int BUFFER = 5;

struct password_check {
    char password[BUFFER];
    bool pwd_correct;
};

int main(void) {
    struct password_check test1;
    test1.pwd_correct = false;
    memset(test1.password, 0, sizeof(test1.password));
    int i;

    for (i=0; i<BUFFER; i++) {
        printf("Position %i: value %i, address %p\n", i, test1.password[i], &test1.password[i]);
    } 
    
    return 0;
}