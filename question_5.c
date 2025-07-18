#include<stdio.h>
// Three Side of a triangle are entered through the keybord .wap to check whether the triangle is isosceles , euilateral , scalene or right angled triangle.


// A Scalene Triangle is a triangle in which all three sides are of different lengths, and therefore all three angles are also different.

// An Isosceles Triangle is a triangle that has two sides equal in length and two equal angles opposite those sides.

int main(){
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
        if (a * a + b * b == c * c || 
            b * b + c * c == a * a || 
            a * a + c * c == b * b) {
            printf("Right-angled Triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }
}