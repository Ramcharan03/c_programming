#include <stdio.h>
int main() {
    float cp, sp, p, l;

    printf("Enter the cost price: ");
    scanf("%f", &cp);

    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        p = sp - cp;
        printf("Profit: %.2f\n", p);
    } else if (cp > sp) {
        l = cp - sp;
        printf("Loss: %.2f\n", l);
    } else {
        printf("No profit, no loss\n");
    }

    return 0;
}
