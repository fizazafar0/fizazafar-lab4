#include <stdio.h>
int main() {
    int obstacle, person;
    float battery;
    printf("Obstacle detected? (1=yes, 0=no): ");
    scanf("%d", &obstacle);
    printf("Person detected? (1=yes, 0=no): ");
    scanf("%d", &person);
    printf("Enter battery percentage: ");
    scanf("%f", &battery);

    if (obstacle == 1) {
        if (person == 1)
            printf("Emergency Stop\n");
        else
            printf("Change Direction\n");
    } else {
        if (battery < 20)
            printf("Return to Charging Station\n");
        else
            printf("Continue Moving\n");
    }
    return 0;
}