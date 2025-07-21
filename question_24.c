#include <stdio.h>

// 1+ 1/1!  +1/2! + 1/3! + 1/4! + 1/5! .... + 1/n!

int fact(int a) {
    int val = 1;
    for (int i = 1; i <= a; i++) {
        val *= i;
    }
    return val;
}

float mat(int x) {
    float ans = 0;
    for (int i = 0; i <= x; i++) {
        ans += 1.0 / fact(i);  
    }
    return ans;
}

int main() {
    int n;
    printf("Enter Value Of N: ");
    scanf("%d", &n);

    float result = mat(n);
    printf("Result = %.6f\n", result); 

    return 0;
}
