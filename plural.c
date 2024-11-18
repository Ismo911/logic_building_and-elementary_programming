#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char animals[30];
    char birds[30];
    char *aml=animals;
    char *bds=birds;
    int length, length2;
    printf("Enter an animal name:\n");
    scanf("%s", animals);
    printf("Enter a bird name:\n");
    scanf("%s", birds);
    length = strlen(animals);
    length2 = strlen(birds);
    printf("ther is the plural of animal amd birds : &aml &bds",animals,birds);
   

    return 0;
}

