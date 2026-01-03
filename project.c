#include <stdio.h>

int main() {

    int n, temp, sum = 0, d, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);   // scanf term added

    temp = n;          // store original number

    while (n > 0) {

        d = n % 10;
        fact = 1;

        for (i = 1; i <= d; i++)
            fact *= i;

        sum += fact;
        n /= 10;
    }

    if (temp == sum)
        printf("Strong Number");
    else
        printf("Not Strong");

    return 0;
}