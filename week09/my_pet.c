#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20


typedef struct date Date;
struct date {
    int day;
    int month;
    int year;
};

typedef struct pet Pet;

struct pet {
    char name[MAX_NAME_LENGTH];
    char type[MAX_NAME_LENGTH];
    int age;
    Date dateOfBirth;
};

int main(void) {
    Pet pet1;
    strcpy(pet1.name, "Boris");
    strcpy(pet1.type, "dog");
    pet1.age = 7;
    
    // setting date of birth
    pet1.dateOfBirth.day = 1;
    pet1.dateOfBirth.month = 4;
    pet1.dateOfBirth.year = 1988;

    printf("%d/%d/%d\n", pet1.dateOfBirth.day, pet1.dateOfBirth.month, pet1.dateOfBirth.year);
    
    Pet *mocha = malloc(sizeof(struct pet));
    strcpy(*(mocha).name, "Mocha");
    strcpy(mocha->type, "dog");
    mocha.age = 6;
    
    // setting date of birth
    mocha->dateOfBirth.day = 1;
    mocha->dateOfBirth.month = 4;
    mocha->dateOfBirth.year = 1988;
    

    return 0;
}

//void printDOB(struct pet *pet1) {

//}
    
