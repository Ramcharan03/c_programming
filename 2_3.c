#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3, s, area;

    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        s = (side1 + side2 + side3) / 2;

        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

        printf("Area of the triangle with sides %.2lf, %.2lf, %.2lf is %.2lf\n", side1, side2, side3, area);
    } else {
        printf("Invalid triangle: The entered side lengths do not form a valid triangle.\n");
    }

    return 0;
}
