#include <stdio.h>
#include <string.h>

int main (void) {
    char lotr[][30]  =  {"Frodo", "Gandalf", "Gimli", "Elrond", "Aragorn"};
    char tmp[30];
    
    //copies lotr[0] to tmp]
    strcpy(tmp, lotr[0]);
    strcpy(lotr[0], lotr[4]);
    strcpy(lotr[4], tmp);
    
    return 0;
}
