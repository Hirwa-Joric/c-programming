
#include <stdio.h>
#include <stdlib.h>

struct Car {
    char color[20];
    int numberOfSits;
    int doors;
};

int main() {
    struct Car* car1;
    struct Car* car2;

    // Dynamically allocate memory for car1
    car1 = (struct Car*)malloc(sizeof(struct Car));
    if (car1 == NULL) {
        printf("Memory allocation failed for car1.\n");
        return 1;
    }

    // Dynamically allocate memory for car2
    car2 = (struct Car*)malloc(sizeof(struct Car));
    if (car2 == NULL) {
        printf("Memory allocation failed for car2.\n");
        free(car1); // Free the memory allocated for car1
        return 1;
    }

    printf("Enter values member elements for car1:\n");
    printf("Doors: ");
    scanf("%d", &(car1->doors));
    printf("sits: ");
    scanf("%d", &(car1->numberOfSits));
    printf("Color: ");
    scanf("%s", car1->color);

    printf("\nEnter details for car2:\n");
    printf("Doors: ");
    scanf("%d", &(car2->doors));
    printf("sits: ");
    scanf("%d", &(car2->numberOfSits));
    printf("Color: ");
    scanf("%s", car2->color);

    printf("\nValues you gave for car1:\n");
    printf("Doors: %d\n", car1->doors);
    printf("sits: %d\n", car1->numberOfSits);
    printf("Color: %s\n", car1->color);

    printf("\nvalues you gave for car2:\n");
    printf("Doors: %d\n", car2->doors);
    printf("sits: %d\n", car2->numberOfSits);
    printf("Color: %s\n", car2->color);


    // Free the allocated memory
    free(car1);
    free(car2);

    return 0;
}



