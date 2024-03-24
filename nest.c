#include <stdio.h>
#include <stdlib.h>

int main() {
    int catLives = 7;

    while (catLives != 0) {
        for (int catAge = 0; catAge < 20; catAge++) {
            printf("Cat's age is %d (lives left: %d)\n", catAge, catLives);
        }
        catLives--;
    }

    printf("Cat is dead!");
    return 0;
}