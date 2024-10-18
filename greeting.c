#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]) {
    time_t now;

    time(&now);
    char *english_time = ctime(&now);
    if (english_time[strlen(english_time) - 1] == '\n') {
        english_time[strlen(english_time) - 1] = '\0';
    }

    printf("Hello %s!\n", argv[1]);
    printf("It is currently %lu seconds from the UNIX zero time.\n", now);
    printf("In human readable form, that means %s!\n\n", english_time);

    return 0;
}