#include <stdio.h>

int countEqualDivisors(int n) {
    int count = 0;

    // Перевіряємо всі числа від 1 до n-1
    for (int i = 1; i < n; i++) {
        // Перевіряємо, чи є i рівним дільником числа n
        if ((n / i) == (n % i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    int equalDivisors = countEqualDivisors(n);
    printf("Кількість рівних дільників числа %d: %d\n", n, equalDivisors);

    return 0;
}