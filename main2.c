//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char *argv[]) {
////	int i,j,k;
////	
////	for(i=1;i<=15;i++){
////		for(j=5;j>=i;j--){
////			printf(" ");
////		}
////		for(k=1;k<=i;k++){
////			printf("* ");
////		}
////		printf("\n");
////	}
//	
//	int i,j,k, rows=5;
//   // first loop for printing all rows
//    for ( i = 0; i < rows; i++) {
// 
//        // first inner loop for printing white spaces
//        for ( j = 0; j < 2 * i; j++) {
//            printf(" ");
//        }
// 
//        // second inner loop for printing star *
//        for ( k = 0; k < rows - i; k++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//	
//
//	
//	for(i=0;i<rows;i++){
//		for(j=0;j<rows-i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	
//	for(i=0;i<rows;i++){
//		for(j=0;j< 2* i;j++){
//			printf(" ");
//		}
//		for(k=0;k<2*(rows-i)-1;k++){
//			printf("* ");
//		}
//		printf("\n");
//		
//	}
//	
//
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n, i, num, sum, rem, digits;
//
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//
//    printf("Armstrong numbers between 1 and %d are: ", n);
//
//    // Check every number between 1 and n for being an Armstrong number
//    for (i = 1; i <= n; i++) {
//        num = i;
//        sum = 0;
//        digits = (int) log10(num) + 1;
//
//        // Calculate the sum of the cubes of the digits of num
//        while (num > 0) {
//            rem = num % 10;
//            sum += pow(rem, digits);
//            num /= 10;
//        }
//
//        // If the sum is equal to the number, print it
//        if (i == sum) {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n, i;
//    double square, cube, sqrt_num;
//
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//
//    printf("Number\tSquare\tCube\tSquare Root\n");
//
//    // Print the square, cube, and square root of every number between 1 and n
//    for (i = 1; i <= n; i++) {
//        square = pow(i, 2);
//        cube = pow(i, 3);
//        sqrt_num = sqrt(i);
//
//        printf("%d\t%.2lf\t%.2lf\t%.2lf\n", i, square, cube, sqrt_num);
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    char ch;
//
//    printf("Uppercase alphabets: ");
//    for (ch = 'A'; ch <= 'Z'; ch++) {
//        printf("%c ", ch);
//    }
//
//    printf("\nLowercase alphabets: ");
//    for (ch = 'a'; ch <= 'z'; ch++) {
//        printf("%c ", ch);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Car {
//    char color[20];
//    float price;
//    int numberOfSeats;
//    int numberOfTypes;
//};
//
//int main() {
//    struct Car* car1;
//    struct Car* car2;
//
//    // Dynamically allocate memory for car1
//    car1 = (struct Car*)malloc(sizeof(struct Car));
//    if (car1 == NULL) {
//        printf("Memory allocation failed for car1.\n");
//        return 1;
//    }
//
//    // Dynamically allocate memory for car2
//    car2 = (struct Car*)malloc(sizeof(struct Car));
//    if (car2 == NULL) {
//        printf("Memory allocation failed for car2.\n");
//        free(car1); // Free the memory allocated for car1
//        return 1;
//    }
//
//    printf("Enter details for car1:\n");
//    printf("Color: ");
//    scanf("%s", car1->color);
//    printf("Price: ");
//    scanf("%f", &(car1->price));
//    printf("Number of seats: ");
//    scanf("%d", &(car1->numberOfSeats));
//    printf("Number of types: ");
//    scanf("%d", &(car1->numberOfTypes));
//
//    printf("\nEnter details for car2:\n");
//    printf("Color: ");
//    scanf("%s", car2->color);
//    printf("Price: ");
//    scanf("%f", &(car2->price));
//    printf("Number of seats: ");
//    scanf("%d", &(car2->numberOfSeats));
//    printf("Number of types: ");
//    scanf("%d", &(car2->numberOfTypes));
//
//    printf("\nCar1 Details:\n");
//    printf("Color: %s\n", car1->color);
//    printf("Price: %.2f\n", car1->price);
//    printf("Number of seats: %d\n", car1->numberOfSeats);
//    printf("Number of types: %d\n", car1->numberOfTypes);
//
//    printf("\nCar2 Details:\n");
//    printf("Color: %s\n", car2->color);
//    printf("Price: %.2f\n", car2->price);
//    printf("Number of seats: %d\n", car2->numberOfSeats);
//    printf("Number of types: %d\n", car2->numberOfTypes);
//
//    // Free the allocated memory
//    free(car1);
//    free(car2);
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        for (space = 1; space < rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}




