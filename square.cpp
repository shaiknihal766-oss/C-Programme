#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check for negative input
    if (num < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        result = sqrt(num);
        printf("Square root of %.2lf = %.2lf\n", num, result);
    }

    return 0;
}

