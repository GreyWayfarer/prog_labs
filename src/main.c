#include "strings.h"
#include <stdio.h>
#define MAX_PATH 260

void input(char *delim, char *paths)
{
    char temp[2];
    printf("+, :, ,\n");
    fgets(temp, 2, stdin);
    *delim = temp[0];
    printf("Input chosen string\n");
    fgets(paths, MAX_PATH*4 + 4, stdin);
}

int check(char delim, char *paths, char *reject)
{
    //const char *sc1, *sc2;
    //int pathnum = 1;
    int letter = sspn(paths, reject);
    int length = slen(paths);
    if (delim != ' ' && delim != '+' && delim != ':') {
        printf("Incorrect delim\n");
        return 0;
    }
    if (letter != length) {
        printf("Wrong input in letter %d\n", letter);
        return 0;
    }
    if (paths[3] != '.' && paths[7] != '.' && paths[11] != '.') {
        
    }
    return 0;
}

void process(char *paths)
{
    char *sc;
    int count;
    int arrsize = slen(paths);
    int currsize = arrsize;
    //if 
}

void output(char *paths)
{
    printf("New path: %s\n", paths);
}

int main(int argc, char const *argv[])
{
    char delim;
    char paths[MAX_PATH*4 + 4] = {'\0'};
    input(&delim, paths);
    char reject[10] = {'\\', '|', '*', '\"', '<', '>', ':', '?'};
    if(check(delim, paths, reject)) {
        process(paths);
        output(paths);
    }
    return 0;
}

