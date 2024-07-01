#include <stdio.h>

int count_equal_divisors(int n) {
    int count = 0;
    for (int m = 1; m < n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);

    int result = count_equal_divisors(n);

    printf("Кількість рівних дільників числа n: %d\n", result);
    
    return 0;
}
