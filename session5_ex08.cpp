#include<stdio.h>
int main() {
    int a, b, thay_a, thay_b, ucln, bcnn;
    
    
    printf(" nhap so thu 1: ");
    scanf("%d", &a);
    printf("nhap so thu 2: ");
    scanf("%d", &b);

    
    if (a == 0 || b == 0) {
        printf("UCLN và BCNN không xác dinh.\n");
        return 0;
    }
    thay_a = a;
    thay_b = b;

    while (thay_a != thay_b) {
        if (thay_a > thay_b) {
            thay_a = thay_a -thay_b;
        } else {
            thay_b = thay_b -thay_a;
        }
    }
    ucln = thay_a; 
    bcnn = (a * b) / ucln;
    printf("Uoc chung lon nhat cua %d và %d là: %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d và %d là: %d\n", a, b, bcnn);

    return 0;
}

