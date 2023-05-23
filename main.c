//
//
//1. To print ODD numbers from 1 to N using a while loop:
//```c
#include <stdio.h>
int main()
{
    int i = 1, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (i <= N)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}
//```
//
//2. To print EVEN numbers from 1 to N using a do while loop:
//```c
//#include <stdio.h>
//int main()
//{
//    int i = 2, N;
//    printf("Enter the value of N: ");
//    scanf("%d", &N);
//    do
//    {
//        printf("%d ", i);
//        i += 2;
//    } while (i <= N);
//    return 0;
//}
//```
//
//3. To print all uppercase alphabets using a while loop:
//```c
//#include <stdio.h>
//int main()
//{
//    char c = 'A';
//    while (c <= 'Z')
//    {
//        printf("%c ", c);
//        c++;
//    }
//    return 0;
//}
//```
//
//4. To print all lowercase alphabets using a while loop:
//```c
//#include <stdio.h>
//int main()
//{
//    char c = 'a';
//    while (c <= 'z')
//    {
//        printf("%c ", c);
//        c++;
//    }
//    return 0;
//}
//```
//
//5. To print numbers from 1 to N using a while loop:
//```c
//#include <stdio.h>
//int main()
//{
//    int i = 1, N;
//    printf("Enter the value of N: ");
//    scanf("%d", &N);
//    while (i <= N)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//```
//
//6. To print numbers from 1 to 10 using a while loop:
//```c
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//```
//
//7. To read an integer and print its multiplication table using a for loop:
//```c
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    
//    for(i = 1; i <= 10; ++i)
//        printf("%d * %d = %d\n", n, i, n*i);
//
//   return 0;
//}
//```
//8 .
// C program that prints the multiplication tables of numbers from 1 to 4:
//
//```c
//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    for(i = 1; i <= 4; i++)
//    {
//        printf("Multiplication table of %d:\n", i);
//        for(j = 1; j <= 10; j++)
//        {
//            printf("%d x %d = %d\n", i, j, i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//```
//
//9  C program that checks if the entered number is ZERO, POSITIVE or NEGATIVE and stops if the user enters the character 'e':
//
//```c
//#include <stdio.h>
//
//int main()
//{
//    char input[10];
//    int num;
//    while(1)
//    {
//        printf("Enter a number or 'e' to exit: ");
//        scanf("%s", input);
//        if(input[0] == 'e')
//        {
//            break;
//        }
//        num = atoi(input);
//        if(num == 0)
//        {
//            printf("The number is ZERO\n");
//        }
//        else if(num > 0)
//        {
//            printf("The number is POSITIVE\n");
//        }
//        else
//        {
//            printf("The number is NEGATIVE\n");
//        }
//    }
//    return 0;
//}
//```
//
//That's a lot of C programs to write. I'll try to do my best. Here are some possible solutions:
//
//10 .C Program to find factorial of a number using any loop:
//
//```c
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    long long fact = 1;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    // using for loop
//    for (i = 1; i <= n; i++)
//    {
//        fact = fact * i;
//    }
//    printf("Factorial of %d = %lld\n", n, fact);
//    return 0;
//}
//```
//
//11 . C Program to find the sum of the first N natural numbers, N must be taken by the user:
//
//```c
//#include <stdio.h>
//int main()
//{
//    int n, i, sum = 0;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    // using for loop
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + i;
//    }
//    printf("Sum of the first %d natural numbers = %d\n", n, sum);
//    return 0;
//}
//```
//
//12 .C program to print all prime numbers from 1 to N:
//
//```c
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n, i, j, flag;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    printf("Prime numbers from 1 to %d are: \n", n);
//    // using for loop
//    for (i = 2; i <= n; i++)
//    {
//        flag = 1; // assume i is prime
//        // check if i is divisible by any number from 2 to sqrt(i)
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0; // i is not prime
//                break;
//            }
//        }
//        if (flag == 1) // i is prime
//        {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    return 0;
//}
//```
//
//13 . C program to print all even and odd numbers from 1 to N:
//
//```c
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    printf("Even numbers from 1 to %d are: \n", n);
//    // using for loop
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0) // i is even
//        {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    printf("Odd numbers from 1 to %d are: \n", n);
//    // using for loop
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 != 0) // i is odd
//        {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    return 0;
//}
//```
//
//14. C program to print all Armstrong numbers from 1 to N:
//
//```c
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n, i, temp, digits, sum;
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//    printf("Armstrong numbers from 1 to %d are: \n", n);
//    // using for loop
//    for (i = 1; i <= n; i++)
//    {
//        temp = i; // store the original number
//        digits = 0; // count the number of digits
//        while (temp > 0)
//        {
//            digits++;
//            temp = temp / 10;
//        }
//        temp = i; // reset the original number
//        sum = 0; // initialize the sum of powers of digits
//        while (temp > 0)
//        {
//            sum = sum + pow(temp % 10, digits); // add the power of the last digit to the sum
//            temp = temp / 10; // remove the last digit
//        }
//        if (sum == i) // i is an Armstrong number
//        {
//            printf("%d ", i);
//        }
//
//15.  C program that prints the square, cube and square root of all numbers from 1 to N:
//
//```
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int i, N;
//    printf("Enter the value of N: ");
//    scanf("%d", &N);
//    for(i = 1; i <= N; i++)
//    {
//        printf("Number: %d\n", i);
//        printf("Square: %d\n", i*i);
//        printf("Cube: %d\n", i*i*i);
//        printf("Square root: %.2f\n", sqrt(i));
//        printf("\n");
//    }
//    return 0;
//}
//```
//
//16 .  C program that prints all leap years from 1 to N:
//
//```c
//#include <stdio.h>
//
//int main()
//{
//    int year, N;
//    printf("Enter the value of N: ");
//    scanf("%d", &N);
//    for(year = 1; year <= N; year++)
//    {
//        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        {
//            printf("%d\n", year);
//        }
//    }
//    return 0;
//}
//```
//
//17.  C program that prints all upper case and lower case alphabets:
//
//```c
//#include <stdio.h>
//
//int main()
//{
//    char c;
//    printf("Upper case alphabets:\n");
//    for(c = 'A'; c <= 'Z'; c++)
//    {
//        printf("%c ", c);
//    }
//    printf("\nLower case alphabets:\n");
//    for(c = 'a'; c <= 'z'; c++)
//    {
//        printf("%c ", c);
//    }
//    return 0;
//}
//```
//
//18. C program that reads the age of 15 people and counts the total number of Baby age, School age and Adult age:
//
//```c
//#include <stdio.h>
//
//int main()
//{
//    int i, age, baby = 0, school = 0, adult = 0;
//    for(i = 1; i <= 15; i++)
//    {
//        printf("Enter the age of person %d: ", i);
//        scanf("%d", &age);
//        if(age >= 0 && age <= 5)
//        {
//            baby++;
//        }
//        else if(age >= 6 && age <= 18)
//        {
//            school++;
//        }
//        else
//        {
//            adult++;
//        }
//    }
//    printf("Total Baby age: %d\n", baby);
//    printf("Total School age: %d\n", school);
//    printf("Total Adult age: %d\n", adult);
//    return 0;
//}
//```

//#include <stdio.h>
//
//int main()
//{
//    int n, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf(".");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &n);
//    for (i = n; i >= 1; i--)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n, i, j, k;
//    printf("Enter the number of rows: ");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (k = 1; k <= n - i; k++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++)
//        {
//            printf(".");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int rows, coef = 1, space, i, j;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++)
//            printf("  ");
//
//        for (j = 0; j <= i; j++) {
//            if (j == 0 || i == 0)
//                coef = 1;
//            else
//                coef = coef * (i - j + 1) / j;
//
//            printf("%4d ", coef);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int rows, coef, i, j;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++) {
//        coef = 1;
//        for (j = 0; j <= i; j++) {
//            printf("%d ", j);
//            coef = coef * (i - j) / (j + 1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int rows, coef, i, j;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++) {
//        coef = 'A';
//        for (j = 0; j <= i; j++) {
//            printf("%c ", coef+j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int rows, coef = 1, space, i, j;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++)
//            printf("  ");
//
//        for (j = 0; j <= i; j++) {
//
//                coef = "*";
//            printf("%4s ", coef);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int rows, coef = 1, space, i, j;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++)
//            printf("  ");
//
//        for (j = 0; j <= i; j++) {
//
//                coef = "*";
//            printf("%4d ", j-1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int is_palindrome(int num) {
//    int reversed = 0;
//    int temp = num;
//    
//    while (temp != 0) {
//        reversed = reversed * 10 + temp % 10;
//        temp /= 10;
//    }
//    
//    return num == reversed;
//}
//
//int main() {
//    int rows, coef = 1;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (int i = 0; i < rows; i++) {
//        for (int space = 1; space <= rows - i; space++) {
//            printf("  ");
//        }
//
//        for (int j = 0; j <= i; j++) {
//            if (is_palindrome(coef)) {
//                printf("%d ", coef);
//            } else {
//                printf("   ");
//            }
//            coef = coef * (i - j) / (j + 1);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//#define ROWS 10
//#define COLS 10
//#include <stdio.h>
//int main(){
//	int matrix1[ROWS][COLS];
//	int matrix2[ROWS][COLS];
//	int result [ROWS][COLS];
//	int rows , cols;
//	printf("enter the numbrer or rows and columns that the matrix remember the number of rows and columns must be equarl");
//	scanf("%d %d", &rows , &cols);
//	
//	printf("please thner the values of the first  matri");
//	for(int i =0;i<rows ;i++){
//		for(int j = 0; j<cols ; j++){
//		scanf("d" , &matrix1[i][j]);
//		}
//}
//	printf("please ther the valued for th esecond matrix");
//		for(int i =0 ; i<rows ;i++){
//		
//		for(int j = 0; j<cols ; j++){
//		scanf("d" , &matrix2[i][j]);
//		}
//}
//	
//	printf("the result of the martix is ");
//	
//	for(int i =0 ; i<rows ;i++){
//	
//		for(int j = 0; j<cols ; j++){
//		result[i][j] = matrix1[i][j] + matrix2[i][j];
//		printf("%d", result[i][j]);
//		}
//}
//return 0;
//}


#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int row , col , i , j , k;
	printf("enter the number of rows and columns \n");
	printf("rows \n");
	scanf("%d" , &row);
	printf("columns \n");
	scanf("%d" , &col);
	

	printf("--------------------------------------------------------------------------------- \n");

	int matrixA[row][col] , matrixB[row][col] , product[row][col];
	
	printf("enter the data for the first matrix \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter the value for matrixA %dx%d  = ",i+1 , j+2);
			scanf("%d",&matrixA[i][j] );
		}
	}
	
	printf("---------------------------------------------------------------------------------\n");
	printf("enter the data for the second matrix \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter the value for matrixB %dx%d  = ",i+1 , j+2);
			scanf("%d",&matrixB[i][j] );
		}
	}

//	the multiplication of the matrix
	for(i=0 ;i< row ;i++){
		for(j=0;j<row ; j++){
            product[i][j] = 0;
            for (k = 0; k < col; k++) {
                product[i][j] += matrixA[i][k] * matrixB[k][j];
            }
		}
	}
	printf("---------------------------------------------------------------------------------\n");

    printf("Product of matrix A and matrix B:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
	

	
}


///////////////////////////////////////////////////////////////////////////////////////////////////// some exercises before exams//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/// dynamic memory alocation 



